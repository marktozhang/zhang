#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include<QMessageBox>
#include<windows.h>
#include<QDebug>
#include<QTimer>
#include<QMutex>
#include<QDir>

#include"aaaa.h"
#include"server.h"
#include"scdata.h"
#include"esp8266.h"
typedef struct
{
    int* size;
    char**  Datastr;
}INFO;

typedef struct
{
    HANDLE p;//指向线
    int uid;//等级
    int type;//用户类型
}ArrayThread;

class Client : public QThread
{
    Q_OBJECT
public:
    explicit Client(QObject *parent=0);
    Client(SOCKET client=INVALID_SOCKET,QString str=" ",QString tr=" ");
    void SearchInfo();//校验用户信息表
    void ResponseLogin();//回应登录请求
    void ResponseFileTransfer();//回应备份请求
    void CheckOnline();//监测用户是否在线
    void ReceiveFile();//接受文件
    void CreateFolder(QString path);//检查文件夹是否存在与建立
    void cmd_to(char*oo);\
    QString js();
    void recv_100();
    void addDevice();
    void sendlistdeceive();

    void recv_rq();//重启

private:
    SOCKET socket;//已连接好的套接字
    QString  cNAME;
    QString  password;
    int tNUMBER;//线程表编号
    void receivefile();//文件接收函数
    char* scBuffer;//数据缓冲区
    int  pppp;
    void exepro();//线程结束
    void reMessage();
    int  iszaixain(QString jj);
signals:
    void send_info(QString);
    void send_cmd(QString);
    void sdda(int );
public slots:

protected :
     void run();

};



#endif // MYTHREAD_H
