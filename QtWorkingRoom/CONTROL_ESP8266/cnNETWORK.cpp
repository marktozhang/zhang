#include "thread_network.h"
QMutex locker;//线程异步锁
ubody* u78asd;//接受现在用户信息的结构体



thread_network::thread_network(QObject *parent) :
    QThread(parent)
{
    csocket.socket=INVALID_SOCKET;
    csocket.Online=false;

    CMD =new char*[MAXNUMCMD];
    for(int i=0;i<MAXNUMCMD;i++)
    {
        CMD[i]=new char[6];
        CMD[i][5]='\0';
    }
    CMD[0]="renew";
    CMD[2]="esp00";
    CMD[1]="login";
}

void thread_network::recv_Message()//接受消息
{
    int len =0;
    char buffer00[6];
    len=::recv(csocket.socket,buffer00,CMDLEN,0);
    if(len>0)
    {
            if(QString(buffer00)==QString(CMD[0]))
            {
                memset(buffer00,0,CMDLEN);
                recv_user_array();
            }
            else if(QString(buffer00)==QString(CMD[2]))
            {
                memset(buffer00,0,CMDLEN);
                Message_esp();
            }
    }
    else if(len==-1)
    {
       int rr=::connect(csocket.socket,(sockaddr*)&service, sizeof(service));
       if(rr==SOCKET_ERROR)
       {
           csocket.Online=0;
       }
       else
       {
           csocket.Online=1;
       }
    }
}

void thread_network::Message_esp()
{

}

//接受在线人状态
void thread_network::recv_user_array()
{
   int size=0;
   int len =0;
   while(true)
   {
        len=::recv(csocket.socket,(char*)&size,sizeof(int),0);
        if(size<0||size>100000||len<0)
        {
            break;
        }
        char * buffer00=new  char[size];
        len=::recv(csocket.socket,buffer00,size,0);
        if(len<0)
        {
            break;
        }
        len=::recv(csocket.socket,(char*)&size,sizeof(int),0);
         qDebug()<<"3"<<len;
        if(size<0||size>100000||len<0)
        {
            break;
        }
        int tnumber=0;
        len=::recv(csocket.socket,(char*)&tnumber,size,0);
        if(len<0)
        {
            break;
        }
        emit  send_renew_userinfo(buffer00,tnumber);
   }
}

void thread_network::disnetwork()
{

}

void thread_network::reConnect()
{
    int a=0;

}

void thread_network::run()
{

}
