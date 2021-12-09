#ifndef ESP8266_H
#define ESP8266_H

#include <QThread>
#include<windows.h>
#include"client.h"
class Esp8266 : public QThread
{
    Q_OBJECT
public:
    explicit Esp8266(QObject *parent = 0);
    Esp8266(SOCKET    socket);
    SOCKET socket;
    QString uNAME;//属于用户
    QString eNAME;//名称
signals:
private:

    int tNUMBER;//在表的编号
    //QString eNAME;//名称
   // QString uNAME;//属于用户
    int produceID;//产品编号
    void exepro();
    void init();//注册表
public slots:

protected:
    void run();
};

#endif // ESP8266_H
