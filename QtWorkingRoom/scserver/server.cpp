#include "server.h"
#include"checkthread.h"
ArrayThread* arrThread;//客户
ArrayThread* arrThread_f;//face
ArrayThread* arrThread_esp;//face

CharP* CMD;//命令表
DTUTHREAD  dtuthrad[MAXVISIT];
QMutex locker;
Server::Server(QObject *parent) :
    QThread(parent)
{

;

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














