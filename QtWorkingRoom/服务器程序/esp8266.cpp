#include "esp8266.h"
#include"allcation.h"
 extern ArrayThread*   arrThread;//client
 extern ArrayThread* arrThread_f;//face
 extern ArrayThread* arrThread_esp;//face
Esp8266::Esp8266(QObject *parent) :
    QThread(parent)
{

}

Esp8266::Esp8266(SOCKET socket)
{
    this->socket=socket;
    tNUMBER=0;//编号
    eNAME=" ";//名称
    uNAME=" ";//属于用户
    produceID=35211;
}

void Esp8266::exepro()
{
    arrThread[tNUMBER].num=0;
    arrThread[tNUMBER].p=nullptr;
    arrThread[tNUMBER].numberID=0;
    closesocket(socket);
    this->requestInterruption();
    this->quit();
}

void Esp8266::init()
{
    for(int i=0;i<MAXVISIT;i++)
    {
        if(arrThread[i].num==0)
        {
            tNUMBER=i;//记录在线程的编号
            arrThread_esp[i].num=1;//esp等级
            arrThread_esp[i].numberID=(int)this->currentThreadId();
            arrThread_esp[i].p=this;
        }
    }

}

void Esp8266::run()
{


    while(!isInterruptionRequested())
    {
        char buffer[CMDLEN];
        int len=::recv(socket,buffer,CMDLEN,0);
        if(len<0)
        {
             closesocket(socket);
             requestInterruption();
             quit();
             wait();
        }

    }
}
