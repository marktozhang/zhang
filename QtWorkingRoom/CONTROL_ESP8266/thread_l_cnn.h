#ifndef THREAD_L_CNN_H
#define THREAD_L_CNN_H

#include <QThread>
#include<windows.h>
#include<QMutex>
#include<QDebug>
#include<QTimer>
#include"thread_network.h"
#include<QWaitCondition>
class thread_L_cnn : public QThread
{
    Q_OBJECT
public:
    explicit thread_L_cnn(QObject *parent = 0);
    thread_L_cnn(SOCKET  socket);

   protected:
    void run();
signals:
    void send_L_cnn(int);
private:
    SOCKET socket;
    QTimer *timer_l_cnn;
public slots:
    void time_long_cnn();

};

#endif // THREAD_L_CNN_H
