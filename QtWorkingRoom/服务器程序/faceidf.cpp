#include "faceidf.h"
extern ArrayThread* arrThread;//client
extern ArrayThread* arrThread_f;//face
extern ArrayThread* arrThread_esp;//face
faceIDF::faceIDF(QObject *parent) :
    QThread(parent)
{



}

faceIDF::faceIDF(SOCKET socket)
{
    this->socket=socket;
}

void faceIDF::init()
{
    for(int i=0;i<MAXVISIT;i++)
    {
        if(arrThread_f[i].num==0)
        {
            tNUMBER=i;//记录在线程的编号
            arrThread_f[i].num=1;//esp等级
            arrThread_f[i].numberID=(int)this->currentThreadId();
            arrThread_f[i].p=this;
        }
    }
}

void faceIDF::exepro()
{
    arrThread_f[tNUMBER].num=0;
    arrThread_f[tNUMBER].p=nullptr;
    arrThread_f[tNUMBER].numberID=0;
    closesocket(socket);
    this->requestInterruption();
    this->quit();
}

void faceIDF::run()
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
