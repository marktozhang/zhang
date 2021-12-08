#include "cnnNT.h"
#include<QHBoxLayout>
#include<QDebug>
#include<QThread>
#include<QMutex>
#include<QTimer>
#include<QWaitCondition>
#include<QStringList>
#include<QPushButton>
#include<QLabel>
#include<QListWidget>
#include<QMessageBox>
#include<windows.h>
#include "ui_esp8266.h"
ListDeceive listdeced;
SOCKET socket_z;
char** CMD;
QMutex  locker;

extern kehu *espoint;

cnnNT::cnnNT(QObject *parent) :
    QThread(parent)
{
    socket_z=INVALID_SOCKET;
    qDebug()<<"线程开始";
    listdeced.length=0;
   // connect(this,&cnnNT::show_renew,espoint,&kehu::show_renew,Qt::DirectConnection);
    //ui->listWidget->hide();
}
int cnnNT::init()
{
    WSADATA wsaData;
    WSAStartup(0x202, &wsaData);//连接动态库
    if(HIBYTE(wsaData.wVersion)!=2||LOBYTE(wsaData.wVersion)!=2)
    {
        qDebug()<<"请求版本失败";
        return 0;
    }
    //创建socket
    socket_z=::socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    if(socket_z==INVALID_SOCKET)
    {
        qDebug()<<"套接字无效";
    }
    if(socket_z==INVALID_SOCKET)
    {
         qDebug()<<"socket初始化失败";
         return 0;
    }
    //创建地址族
    service.sin_family=PF_INET;
   service.sin_addr.S_un.S_addr=inet_addr("47.105.203.158");
    // service.sin_addr.S_un.S_addr=inet_addr("127.0.0.1");
    service.sin_port=htons(6000);
    //连接主机
    int r=::connect(socket_z,(sockaddr*)&service, sizeof(service));
    qDebug()<<"连接";
    if(r==SOCKET_ERROR)return 0;
    qDebug()<<"fwq已连接";
    int h=1;
    ::send(socket_z,(char*)&h,sizeof(int),0);
    return r;
}

int cnnNT::reConnect()
{
    int r=::connect(socket_z,(sockaddr*)&service, sizeof(service));
    return r;
}

void cnnNT::recv_100()
{
    qDebug()<<"接受";

    char* uu;
    int len=0;
    int numa=0;
    int numbers=0;
    int ytpee=0;
    while(true)
    {
        int size=-1;
        len=::recv(socket_z,(char*)&size,sizeof(int),0);
        if(size<0||len<0)break;
        uu=new char[size+1];
        uu[size]='\0';
        ::recv(socket_z,uu,size,0);

        ::recv(socket_z,(char*)&numa,sizeof(int),0);

        ::recv(socket_z,(char*)&ytpee,sizeof(int),0);

        emit show_renew(QString(uu),numa,ytpee);
        numbers++;
    }
    emit show_renew_pnum(numbers);
    qDebug()<<"接受";
}

void cnnNT::RecvDevecelist()
{
    listdeced.length=0;
    int count=0;
    ::recv(socket_z,(char*)&count,sizeof(int),0);
    int size1=0,size2=0;
    char* buffer;
    int is =0;
    int threadnum=0;
    qDebug()<<"装置数量"<<count;
    for(int i=0;i<count;i++)
    {
        ::recv(socket_z,(char*)&size1,sizeof(int),0);
        buffer=new char[size1+1];
        buffer[size1]='\0';
        ::recv(socket_z,buffer,size1,0);
        listdeced.strinfo[listdeced.length][0]=QString(buffer);

        ::recv(socket_z,(char*)&size2,sizeof(int),0);
        buffer=new char[size2+1];
        buffer[size2]='\0';
        ::recv(socket_z,buffer,size2,0);
        listdeced.strinfo[listdeced.length][1]=QString(buffer);

        ::recv(socket_z,(char*)&is,sizeof(int),0);
      //  ::recv(socket_z,(char*)&threadnum,sizeof(int),0);
        listdeced.strinfo[listdeced.length][2]=QString::number(is);
      //  listdeced.strinfo[listdeced.length][3]=QString::number(threadnum);
        listdeced.length++;
    }
    qDebug()<<"信息接收完后";
    emit recvlistwc();
}

void cnnNT::run()
{
    init();
    int type=0;
    //1 装置信息总览
    int len=0;
    while(true)
    {
        len=::recv(socket_z,(char*)&type,sizeof(int),0);
        if(len<0)
        {
            reConnect();
        }
        else
        {
            if(type==100)
            {
                recv_100();
            }
            else if(type==50)
            {
                 emit  tomain();
            }
            else if(type==-50)
            {
                emit  badtomain();
            }
            else if(type==51||type==52)
            {
                emit addresult(type);
            }
            else if(type==54)
            {
                RecvDevecelist();
                emit renew();
            }
            else if(type==55)
            {
                emit rq();
            }

        }
    }
}
