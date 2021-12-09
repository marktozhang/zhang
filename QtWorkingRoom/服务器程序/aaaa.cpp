#include "aaaa.h"

aaaa::aaaa(QObject *parent) :
    QThread(parent)
{
}

aaaa::aaaa(SOCKET l)
{
    hh=l;
}

void aaaa::run()
{
    char buffer[1024];
    while(!isInterruptionRequested())
    {
        int len=0;
        len=::recv(hh,buffer,1024,0);
        qDebug()<<"实际接收字节"<<len;
        char* bn=new char[len+1];
        bn[len]='\0';
        for(int i=0;i<len;i++)
        {
            bn[i]=buffer[i];
        }
        qDebug()<<"==========接受=========";
        qDebug()<<bn;
        emit dddd("==========接受=========");
        emit dddd(bn);


    }
}
