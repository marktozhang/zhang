#include "widget.h"
#include <QApplication>
#include"test_th.h"
#include<windows.h>
extern int num;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   /* Widget w;
    w.show();*/
    for(int i=0;i<500;i++)
    {
        test_th*  test_dddd=new   test_th(i);
        test_dddd->start();
       // qDebug()<<"当前线程数"<<i;
    }

    Sleep(10000);
    qDebug()<<"全局线程数"<<num;
    return a.exec();
}
