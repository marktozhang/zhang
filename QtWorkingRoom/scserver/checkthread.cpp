#include "checkthread.h"
#include"scdata.h"
#include"client.h"
#include"dtu.h"
extern DATA_ACCESS  ACdata;
extern DATA_DTU  DTUdata;
extern ArrayThread*   arrThread;//client
checkthread::checkthread(QObject *parent) :
    QThread(parent)
{

}

checkthread::checkthread(SOCKET socket)
{
    this->socket=socket;
}

void checkthread::clientlogin()
{
    int a=0;
    int len=0;
    int ok=50;
    int c=0;
    for( c=0;c<50;c++)
    {
        ::recv(socket,(char*)&a,sizeof(int),0);
        qDebug()<<"login命令："<<a;
        if(a==1)
        {
            int size1=0;
            int size2=0;
            len=::recv(socket,(char*)&size1,sizeof(int),0);
            if(len<0||size1<1)
            {
               ;
            }
            char *tuser=new char[size1+1];
            len=::recv(socket,tuser,size1,0);
            tuser[size1]='\0';
            qDebug()<<QString(tuser);

            len=::recv(socket,(char*)&size2,sizeof(int),0);
            if(len<0||size2<1)
            {
               ;
            }
            char *tpassword=new char[size2+1];
            len=::recv(socket,tpassword,size2,0);
            tpassword[size2]='\0';
            qDebug()<<QString(tpassword);
            QString a=QString(tuser);
            QString b=QString(tpassword);
            for(int i=0;i<ACdata.row_client;i++)
            {
               if(ACdata.Data_DTU[i][0]==a&&ACdata.Data_DTU[i][1]==b)
               {

                   ::send(socket,(char*)&ok,sizeof(int),0);
                   qDebug()<<"已验证";
                   ok=1;
                   c=50;
                   Client* client =new Client(socket,a,b);
                   client->start();

               }
            }
        }
        if(ok==50)
        {
            ok=-50;
            ::send(socket,(char*)&ok,sizeof(int),0);
            ok=50;
        }
    }
}

void checkthread::DTUlogin(char a ,char b,char c)
{
    //接受其余的12 字节
    //
    char UIDstr[16];
    UIDstr[0]=a;
    UIDstr[1]=b;
    UIDstr[2]=c;
    UIDstr[15]='\0';

    char more[12];

    ::recv(socket,more,12,0);
    for(int i=3;i<15;i++)
    {
        UIDstr[i]=more[i-3];
    }
    QString uid=QString(UIDstr);

    //ID检测
    for(int i=0;i<DTUdata.numDTU;i++)
    {
        if(DTUdata.Data_DTU[i][1]==uid)
        {
            qDebug()<<"登记的设备登入";
            qDebug()<<"UID"<<uid;
            DTU *dtu=new DTU(socket,uid);
            dtu->start();
        }
    }
}

void checkthread::recvData()
{
  ;
}

void checkthread::run()
{
    int a=0;
    int len =0;
    qDebug()<<"ddddddddddd";

    len=::recv(socket,(char*)&a,sizeof(int),0);
    char*   shu=(char*)&a;
    int shuss=(int)shu[0];

    if(len<0)
    {
            closesocket(socket);
            this->requestInterruption();
            this->quit();
    }
    qDebug()<<"登录类型"<<a;
    if(a==1)//客户
    {
        clientlogin();
    }
    else if(shuss==50)
    {
        DTUlogin(shu[1] ,shu[2],shu[3]);
    }
    else
    {
        ;
    }

}
