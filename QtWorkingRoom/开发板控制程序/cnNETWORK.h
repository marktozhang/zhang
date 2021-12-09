#ifndef THREAD_NETWORK_H
#define THREAD_NETWORK_H
#define MAXNUMCMD  1024//最大命令数
#define  CMDLEN  6
#include <QThread>
#include<windows.h>
#include"thread_recnn.h"
#include<QDebug>
#include<QMutex>
#include<QTimer>
#include<QWaitCondition>
//初始化socket的线程
#include<QStringList>
#include<QPushButton>
#include<QLabel>
#include<QListWidget>

typedef char* CharP;
typedef struct link_user
{
    int length;
    int  *a;
    CharP* b;
    int num;
    link_user* next;
}ubody,*ubody_p;

typedef struct
{
    float Online;
    SOCKET socket;
}nSOCKET;
class thread_network : public QThread
{
    Q_OBJECT
public:
    explicit thread_network(QObject *parent = 0);
    void recv_Message();
    void Message_esp();
signals:
    void send_netstation(int);
    void send_renew_userinfo(QString,int);

private:
    QTimer * time_one;
    sockaddr_in service;
    SOCKET socket_cnn;
   // recv_information *recv_information_point;
    void recv_user_array();
    void disnetwork();//网络断开返回界面
    void reConnect();//重连网路
public slots:


protected:
    void run();

};

#endif // THREAD_NETWORK_H
