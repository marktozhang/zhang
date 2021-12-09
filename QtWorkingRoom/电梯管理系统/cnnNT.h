#ifndef CNNNT_H
#define CNNNT_H
#define MAXNUMCMD  1024//最大命令数
#define  CMDLEN  6


#include"esp8266.h"
#include<QThread>
#include<windows.h>
#include<QMutex>
typedef struct
{
    int length;
    QString strinfo[1000][4];
}ListDeceive;
class cnnNT : public QThread
{
    Q_OBJECT
public:
    explicit cnnNT(QObject *parent = 0);
    int  init();
    void initCMD();
    int reConnect();
    void Message(char *s);
    void recvClient();
    void recv_100();
    void RecvDevecelist();

    SOCKADDR_IN  service;

signals:
    void show_renew(QString,int,int  );
    void show_renew_pnum(int );
    void tomain();//进入主界面
    void badtomain();//登录密码错误
    void addresult(int);//添加设备
    void renew();//查询设备
    void rq();
    void recvlistwc();
public slots:
protected:
    void run();

};

#endif // CNNNT_H
