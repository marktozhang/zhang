#ifndef CHECKTHREAD_H
#define CHECKTHREAD_H

#include <QThread>
#include"mainwindow.h"

class checkthread : public QThread
{
    Q_OBJECT
public:
    explicit checkthread(QObject *parent = 0);
    checkthread(SOCKET socket);
private:
    SOCKET socket;
    void clientlogin();
    void DTUlogin(char a ,char b,char c);


    void recvData();
signals:

public slots:

protected:
    void run();

};

#endif // CHECKTHREAD_H
