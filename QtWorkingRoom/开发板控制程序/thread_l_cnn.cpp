#include "thread_l_cnn.h"
extern QMutex locker;
extern NETWORK_INFO INFORMATION_NET;
extern QWaitCondition  waitcondition;
thread_L_cnn::thread_L_cnn(QObject *parent) :
    QThread(parent)
{

}

//触发重连的槽函数
void thread_L_cnn::run()
{
    int  len=0;
    float  num=0;
    char buffer[5]="1234";
    timer_l_cnn=new QTimer();
    connect(timer_l_cnn,&QTimer::timeout,this,[=]()
    {
        locker.lock();
        for(int i=0;i<5;i++)
        {
            len=::send(INFORMATION_NET.socket,buffer,1,0);
            if(len<0)
            {
                num++;
            }
        }
        INFORMATION_NET.Online=1-num/5.0;
        if(!INFORMATION_NET.Online)
        {
            qDebug()<<"开始阻塞";
            waitcondition.wait(&locker);//线程阻塞
            qDebug()<<"阻塞完成";
        }
        else
        {
            locker.unlock();
        }
    });
    timer_l_cnn->start(5000);
    exec();*/
        char k[5]="132";
   int len=::send(*(INFORMATION_NET.socket),k,2,0);
   qDebug()<<"发送长度"<<len;
}















