#include "client.h"
#include"dtu.h"
/*

100ke客户查看装置

101
*/
extern CharP* CMD;//命令表
extern ArrayThread*   arrThread;//client
extern DATA_DTU   DTUdata;
extern DTUTHREAD  dtuthrad[MAXVISIT];
Client::Client(QObject *parent) :
    QThread(parent)
{
    ;
}

Client::Client(SOCKET client, QString str, QString tr)
{
    socket=client;
    pppp=0;
    cNAME=str;
    password=tr;
}
void Client::cmd_to(char*ds)
{


}

void Client::recv_100()
{
    int len=0;
    for(int i=0;i<MAXVISIT;i++)
    {
        if(arrThread[i].type==1)
        {
            int size=0;
            char*  g="client";
            size=QString(g).length();
            len=::send(socket,(char*)&size,sizeof(int),0);
            if(len<0)exepro();
            len=::send(socket,g,size,0);
            if(len<0)exepro();
            len=::send(socket,(char*)&i,sizeof(int),0);//发发送表中编号
            if(len<0)exepro();
            int  j=1;
            len=::send(socket,(char*)&j,sizeof(int),0);//发是装置类型
            if(len<0)exepro();

        }
        if(arrThread[i].type==2)
        {
            int size=0;
            char*  g="esp8266";
            size=QString(g).length();
            len=::send(socket,(char*)&size,sizeof(int),0);
            if(len<0)exepro();
            len=::send(socket,g,size,0);
            if(len<0)exepro();
            len=::send(socket,(char*)&i,sizeof(int),0);//发发送表中编号
            if(len<0)exepro();
            int  j=2;
            len=::send(socket,(char*)&j,sizeof(int),0);//发是装置类型
            if(len<0)exepro();
        }
    }
    int table=-1;
    table=::send(socket,(char*)&table,sizeof(int),0);
    if(table<0)exepro();
    qDebug()<<"wcfs"<<table;
}

void Client::addDevice()
{

    int len=0;
    int  size1=0,size2=0;
    len=::recv(socket,(char*)&size1,sizeof(int),0);
    if(len<0||size1<0||size1==0)
    {

        return ;
    }
    char* name=new char[size1+1];
    name[size1]='\0';
    ::recv(socket,name,size1,0);

    ::recv(socket,(char*)&size2,sizeof(int),0);
    qDebug()<<"size2"<<size2;
    char* number=new char[size2+1];
    number[size2]='\0';
    ::recv(socket,number,size2,0);

    int cunzai=52;
    for(int i=0;i<DTUdata.numDTU;i++)
    {
        if(DTUdata.Data_DTU[i][1]==QString(number))
        {
            ::send(socket,(char*)&cunzai,sizeof(int),0);
            return ;
        }
    }


    cunzai=51;
    qDebug()<<"c插入编号"<<DTUdata.numDTU;
    DTUdata.Data_DTU[DTUdata.numDTU][0]=name;
    DTUdata.Data_DTU[DTUdata.numDTU][1]=number;
    DTUdata.Data_DTU[DTUdata.numDTU][2]=cNAME;
    qDebug()<<"收到DTU数据1"<<name;
    qDebug()<<"收到DTU数据2"<<number;
    qDebug()<<"收到DTU数据3"<<cNAME;
    DTUdata.numDTU++;
    ::send(socket,(char*)&cunzai,sizeof(int),0);


}

void Client::sendlistdeceive()
{
    int cmd=54;
    ::send(socket,(char*)&cmd,sizeof(int),0);
    ::send(socket,(char*)&DTUdata.numDTU,sizeof(int),0);
    qDebug()<<"设备数"<<DTUdata.numDTU;
    int size=0;
    int is=0;
    int threadnum=0;
    for(int i=0;i<DTUdata.numDTU;i++)
    {
        if(DTUdata.Data_DTU[i][2]==cNAME)
        {
            size=DTUdata.Data_DTU[i][0].length();
            ::send(socket,(char*)&size,sizeof(int),0);
            ::send(socket,DTUdata.Data_DTU[i][0].toUtf8().data(),size,0);
            size=DTUdata.Data_DTU[i][1].length();
            ::send(socket,(char*)&size,sizeof(int),0);
            ::send(socket,DTUdata.Data_DTU[i][1].toUtf8().data(),size,0);
            qDebug()<<"fs"<<DTUdata.Data_DTU[i][0]<<DTUdata.Data_DTU[i][1];
            if(iszaixain(DTUdata.Data_DTU[i][1]))
            {
                is=1;
                ::send(socket,(char*)&is,sizeof(int),0);
                qDebug()<<"在线程在线";
            }
            else
            {
                qDebug()<<"在线程不在线";
                is=0;
                threadnum=-1;
                ::send(socket,(char*)&is,sizeof(int),0);

            }
        }
    }
}

void Client::recv_rq()
{
    //接受编号

    int size=0;
    ::recv(socket,(char*)&size,sizeof(int),0);
    qDebug()<<"大小"<<size;
    char* buffer=new char[size+1];
    buffer[size]='\0';
    ::recv(socket,buffer,size,0);
    QString uid=QString(buffer);
    //接受指令
    qDebug()<<"数据"<<uid;

    ::recv(socket,(char*)&size,sizeof(int),0);
    buffer=new char[size+1];
    buffer[size]='\0';
    ::recv(socket,buffer,size,0);
    QString cmd=QString(buffer);
    qDebug()<<"size"<<size;
    qDebug()<<"命令"<<cmd;

    for(int i=0;i<MAXVISIT;i++)
    {
        if(dtuthrad[i].uid==uid)
        {
            qDebug()<<"找到目标线程";
            DTU* temsocket=(DTU*)dtuthrad[i].p;
            ::send(temsocket->socket,cmd.toUtf8().data(),cmd.length(),0);
            break;
        }
    }
}

void Client::exepro()//结束客户线程
{
    qDebug()<<"当前线程ID"<<this->currentThreadId();
    qDebug()<<"点前线程编号"<<tNUMBER;
    arrThread[tNUMBER].uid=0;
    arrThread[tNUMBER].p=nullptr;
    arrThread[tNUMBER].type=0;
    closesocket(socket);
    this->requestInterruption();
    this->quit();
}

int Client::iszaixain(QString kk)
{
    for(int i=0;i<MAXVISIT;i++)
    {
        if(dtuthrad[i].uid==kk)
        {
            return true;
        }
    }
    return false;
}

void Client::run()
{
    for(int i=0;i<MAXVISIT;i++)
    {
        if(arrThread[i].type==0)
        {
            arrThread[i].uid=0;
            arrThread[i].p=this;
            arrThread[i].type=1;
            tNUMBER=i;
            break;
        }
    }
    int a=0;
    int len =0;
    while(!isInterruptionRequested())
    {
        a=0;
        len=::recv(socket,(char*)&a,sizeof(int),0);
        qDebug()<<"客户命令"<<a;
        if(len<0)exepro();
        if(a==1)
        {
            addDevice();
        }
        else if(a==3)
        {
            sendlistdeceive();
        }
        else if(a==4)
        {
             recv_rq();
        }
    }
}



