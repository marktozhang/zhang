#ifndef THREAD_RECNN_H
#define THREAD_RECNN_H

#include <QThread>
#include<windows.h>
#include<QDebug>
//定时器+长链
#include"thread_network.h"
class thread_recnn : public QThread
{
    Q_OBJECT
public:
    explicit thread_recnn(QObject *parent = 0);
    thread_recnn(SOCKET sco, sockaddr_in service);
private:
    SOCKET socket_recnn;
    sockaddr_in sockaddr_in_cnn;

signals:
    void send_netstation(int);

public slots:

protected:
    void run();


};

#endif // THREAD_RECNN_H
