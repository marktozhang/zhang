#ifndef TEST_TH_H
#define TEST_TH_H

#include <QThread>
#include<QDebug>
#include<QMutex>
class test_th : public QThread
{
    Q_OBJECT
public:
    explicit test_th(QObject *parent = 0);
    test_th(int i);
signals:

public slots:
protected:
    void run();

};

#endif // TEST_TH_H
