#ifndef AAAA_H
#define AAAA_H

#include <QThread>
#include<QMessageBox>
#include<windows.h>
#include<QDebug>
#include<QTimer>
#include<QMutex>
#include<QDir>
class aaaa : public QThread
{
    Q_OBJECT
public:
    explicit aaaa(QObject *parent = 0);
   aaaa(SOCKET   l);
private:
   SOCKET hh;
signals:
   void  dddd(QString);

public slots:
protected :
     void run();

};

#endif // AAAA_H
