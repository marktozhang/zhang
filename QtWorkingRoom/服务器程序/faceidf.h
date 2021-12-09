#ifndef FACEIDF_H
#define FACEIDF_H

#include <QThread>
#include<windows.h>
#include"client.h"
class faceIDF : public QThread
{
    Q_OBJECT
public:
    explicit faceIDF(QObject *parent = 0);
    faceIDF(SOCKET socket=INVALID_SOCKET);
private:
    SOCKET socket;
    int number;//设备编号
    int tNUMBER;//在表编号
    void init();//注册在表编号
    void exepro();//消除在表信息
signals:

public slots:
    void run();

};

#endif // FACEIDF_H
