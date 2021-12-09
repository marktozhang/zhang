#include "allcation.h"

extern CharP* CMD;//命令表
extern DATA_ACCESS  ACdata;


Allcation::Allcation(QObject *parent) :
    QThread(parent)
{

}

Allcation::Allcation(SOCKET socket)
{
    this->socket=socket;
}

void Allcation::exepro()
{
    closesocket(socket);
    this->requestInterruption();
    this->quit();
}

void Allcation::run()
{
    while(!isInterruptionRequested())
    {
        char buffer[CMDLEN];
        buffer[CMDLEN-1]='\0';
        int len=0;
        len=::recv(socket,buffer,CMDLEN,0);
        if(len<0)
        {
           exepro();
        }
        if(QString(buffer)==QString(CMD[4]))//用户登录
        {
            len=::send(socket,buffer,CMDLEN,0);
            char* name,*password;
            int a,b;
            len=::recv(socket,(char*)&a,sizeof(int),0);
            if(len<0)
            {
                 exepro();
            }
            len=::recv(socket,(char*)&b,sizeof(int),0);
            if(len<0)
            {
                exepro();
            }
            name=new char[a];
            password=new char[b];
            len=::recv(socket,name,a,0);
            if(len<0)
            {
               exepro();
            }
            len=::recv(socket,password,b,0);
            if(len<0)
            {
               exepro();
            }
            for(int i=0;i<ACdata.row_client;i++)
            {
                if(QString(name)==ACdata.Data_client[i][0])
                {
                    if(QString(password)==ACdata.Data_eps8266[i][1])
                    {
                        Client  *user=new  Client(socket,QString(name),QString(password));
                        user->start();
                    }
                }
            }
        }
        else if(QString(buffer)==QString(CMD[2]))//esp登录
        {
             len=::send(socket,buffer,CMDLEN,0);
             Esp8266* esp=new Esp8266(socket);
        }
    }
}
