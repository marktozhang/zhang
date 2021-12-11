#include "server.h"
#include"checkthread.h"
#include<thread>
ArrayThread* arrThread;//客户
ArrayThread* arrThread_f;//face
ArrayThread* arrThread_esp;//face

CharP* CMD;//命令表
DTUTHREAD  dtuthrad[MAXVISIT];
QMutex locker;
Server::Server(QObject *parent) :
    QThread(parent)
{
    Init();
}

void Server::Init()
{
    //请求系统版本号
    WSAStartup(0x202, &wsadata);
    if(HIBYTE(wsadata.wVersion)!=2||LOBYTE(wsadata.wVersion)!=2)
    {
        qDebug()<<"服务器启动失败：请求版本号失败";
        return ;
    }
    //创建TCPsocket
      ServerSocket=::socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
      if(ServerSocket==INVALID_SOCKET)
      {
          qDebug()<<"服务器启动失败：socket创建失败";
          return;
      }
      //给套接字绑定地址
      sockaddr_in service;
      service.sin_family=PF_INET;
      service.sin_addr.S_un.S_addr=htonl(INADDR_ANY);
      service.sin_port=htons(8848);
      if(::bind(ServerSocket,(sockaddr*)&service,sizeof(sockaddr_in))==SOCKET_ERROR)
      {
          qDebug()<<"服务器启动失败：socket绑定信息失败";
          return;
      }
      //开始监听
      if( listen(ServerSocket,SOMAXCONN) == SOCKET_ERROR)
      {
          qDebug()<<"服务器启动失败：socket不能监听";
           return ;
      }
      char host[255];
      if(gethostname(host,sizeof(host))==SOCKET_ERROR)
      {
           qDebug()<<"主机地址无效";
           return;
      }
      char*  nip;//内网ip
      struct hostent *p=gethostbyname(host);
      if(!p)
      {
           qDebug()<<"主机地址无效";
       }
       else
       {
           for(int i=0;p->h_addr_list[i]!=0;i++)
           {
                 struct in_addr in;
                 memcpy(&in,p->h_addr_list[i],sizeof(struct in_addr));
                 nip=inet_ntoa(in);
           }
        }
      qDebug()<<"主机地址:"+nip;
      std::thread ServerThread(Record);
}

void Server::Record()
{
    qDebug()<<"监听中...";
    sockaddr_in Address;
    int size = sizeof(Address);
    while(!isInterruptionRequested())
    {
        memset(&Address,0,size);
        SOCKET client = ::accept(ServerSocket,(sockaddr*)&Address,&size);
        QString clientIp(inet_ntoa(clientAddr.sin_addr));
        int clientPort = ntohs(clientAddr.sin_port);
        qDebug()<<"IP:"<<clientIp<<"Port:"<<QString::number(clientPort);
    }
}

Server::Server(SOCKET s)
{
    ThisSock=s;
    arrThread=new ArrayThread[MAXVISIT];

    for(int i=0;i<MAXVISIT;i++)
    {
        arrThread[i].p=nullptr;
        arrThread[i].type=0;
        arrThread[i].uid=0;
    }
    CMD =new CharP[MAXNUMCMD];
    for(int i=0;i<MAXNUMCMD;i++)
    {
        CMD[i]=new char[6];
        CMD[i][5]='\0';
    }
    CMD[0]="renew";
    CMD[1]="finsh";
    CMD[2]="esp00";
    CMD[3]="toesp";
    CMD[4]="login";
    CMD[6]="photo";//收图片
    qDebug()<<"server完成";
    for(int i=0;i<MAXVISIT;i++)
    {
        dtuthrad[i].uid=QString::number(0);
        dtuthrad[i].p=nullptr;

    }

}

void Server::test(QString str)
{
    qDebug()<<"ds";
    emit to_Remote_Client("das111111111d");
    emit to_Remote_Client(str);
}

void Server::run()
{
    sockaddr_in clientAddr;
    int size = sizeof(clientAddr);
    //一直接受用户请求
    while(!isInterruptionRequested())
    {
        memset(&clientAddr,0,sizeof(clientAddr));
        SOCKET client = ::accept(ThisSock,(sockaddr*)&clientAddr,&size);
        char* clientIp = inet_ntoa(clientAddr.sin_addr);
        int clientPort = ntohs(clientAddr.sin_port);
        QString str = "用户IP"+QString(clientIp)+"用户端口"+QString::number(clientPort);
        emit send_info(str);
        //数据库查找用户信息
        //创建用户线程

        qDebug()<<"新用户";

        checkthread*  che=new checkthread(client);
        che->start();


        //Client* user=new Client(client);
        //connect(user,SIGNAL(send_info(QString)),this,SIGNAL(send_info(QString)));
       // user->start();


    }

}














