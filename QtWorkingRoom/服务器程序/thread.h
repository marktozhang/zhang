#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include<QMutexLocker>
#include<QMessageBox>
#include<windows.h>
#include<QDebug>
#define nullptr 0
class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(SOCKET  sock);
    ~MyThread();
protected:
     void run();
};

#endif // THREAD_H
