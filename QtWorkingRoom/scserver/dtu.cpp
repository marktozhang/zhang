#include "dtu.h"
#include<scdata.h>
extern DATA_DTU   DTUdata;
extern DTUTHREAD  dtuthrad[MAXVISIT];//占用内存78k
DTU::DTU(QObject *parent) :
    QThread(parent)
{

}

DTU::DTU(SOCKET socket,QString idd)
{
    this->socket=socket;
    UID=idd;
}


void DTU::exepro()//结束客户线程
{

        closesocket(socket);
        this->requestInterruption();
        this->quit();
}

void DTU::adddevice()
{
    int  size1=0,size2=0;
    ::recv(socket,(char*)&size1,sizeof(int),0);
    char* name=new char[size1+1];
    name[size1]='\0';
    ::recv(socket,name,size1,0);
    qDebug()<<"收到DTU数据"<<name;
    ::recv(socket,(char*)&size2,sizeof(int),0);
    char* number=new char[size2+1];
    name[size2]='\0';
    ::recv(socket,number,size2,0);
    qDebug()<<"收到DTU数据"<<number;
    for(int i=0;i<DTUdata.numDTU;i++)
    {
        if(DTUdata.Data_DTU[i][0]==QString(name)&&DTUdata.Data_DTU[i][1]==QString(number))
        {
            break;
        }
    }
}

void DTU::ExitTHREAD()//线程结束
{
    dtuthrad[NUMBER].p=nullptr;
    qDebug()<<"UID"<<UID<<"下线";
    dtuthrad[NUMBER].uid=QString::number(0);
    this->requestInterruption();
    this->exit();
}



void DTU::run()
{
    for(int i=0;i<MAXVISIT;i++)
    {
        if(dtuthrad[i].uid==QString::number(0))
        {
            dtuthrad[i].p=this;
            dtuthrad[i].uid=UID;
            NUMBER=i;
            break;
        }
    }
    while(isInterruptionRequested())
    {
        int cmd=0;
        int len=0;
        len=::recv(socket,(char*)&cmd,sizeof(int),0);
        qDebug()<<"收到DTU的指令"<<cmd;
        if(len<0)
        {
            ExitTHREAD();
        }
        if(cmd==1)
        {
            ;
        }
    }
}
