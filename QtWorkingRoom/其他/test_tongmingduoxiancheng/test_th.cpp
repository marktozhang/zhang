#include "test_th.h"
QMutex locker;//全局变量
int num;
test_th::test_th(QObject *parent) :
    QThread(parent)
{

}

test_th::test_th(int i)
{

}

void test_th::run()
{
    locker.lock();
    num++;
    qDebug()<<"当前线程id :"<<this->currentThreadId();
    locker.unlock();
    while(!isInterruptionRequested())
    {

        ;
    }
}
