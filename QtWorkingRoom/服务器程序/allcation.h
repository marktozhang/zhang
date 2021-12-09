#ifndef ALLCATION_H
#define ALLCATION_H

#include <QThread>
#include<windows.h>
#include"server.h"
#include"client.h"
#include"esp8266.h"
class Allcation : public QThread
{
    Q_OBJECT
public:
    explicit Allcation(QObject *parent = 0);
    Allcation(SOCKET socket);

private:
    SOCKET socket;
    void exepro();//线程结束
signals:

public slots:

protected:
    void run();

};

#endif // ALLCATION_H
