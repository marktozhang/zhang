#ifndef LISTENNING_H
#define LISTENNING_H
#define MAXVISIT 700//最大用户访问量
#define MAXNUMCMD  1024//最大命令数
#define NUMDATA   2
#define CMDLEN    6
#include<QString>
#include<QDebug>
#include<QThread>
#include<windows.h>
#include"client.h"
#include<QDebug>
#include<QMutex>


typedef struct
{
    HANDLE p;
    QString uid;//
}DTUTHREAD;//占用内存78k


typedef char* CharP;


typedef struct link_user
{
    int length;//a的大小
    int  *a;//分段数组
    CharP* b;//信息数组
    int num;//编号

    link_user* next;
}ubody,*ubody_p;

//////////////////////////////////////////////////////////////////////////////////////////
/// <summury> 服务器类 </summury>
//////////////////////////////////////////////////////////////////////////////////////////

class Server
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = 0);

    //////////////////////////////////////////////////////////////////////////////////////////
    /// <summury> 服务器启动初始化 </summury>
    //////////////////////////////////////////////////////////////////////////////////////////

    void Init();

    //////////////////////////////////////////////////////////////////////////////////////////
    /// <summury> 记录新连入的socket为其创建线程 </summury>
    //////////////////////////////////////////////////////////////////////////////////////////

    void Record();

    Server(SOCKET s);
private:
    SOCKET ThisSock;

public:
    QString newuser;
signals:
    void send_info(QString a);
    void send_wuyu(QString a);
    void to_Remote_Client(QString a);//给client

public slots:
    void test(QString str);

protected:
    void run();

};

#endif // LISTENNING_H
