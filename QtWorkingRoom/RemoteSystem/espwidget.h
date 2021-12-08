#ifndef ESPWIDGET_H
#define ESPWIDGET_H

#include <QWidget>


#include<QMessageBox>
#include<QDebug>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLabel>

#include<windows.h>
#include<QLineEdit>
class espwidget : public QWidget
{
    Q_OBJECT
public:
    explicit espwidget(QWidget *parent = 0,int i=0);
    QLabel *name;
    QLabel *number;
    QLabel *station;
    QPushButton *cq;
    QHBoxLayout *h;//重启设备
    QString uid;
    QPushButton *de; //删除设备
    QPushButton *stop; //禁用设备
    QPushButton *start; //开启设备


signals:
    void buttonclicked();
    void cqxh(HANDLE  sd);
public slots:



};

#endif // ESPWIDGET_H
