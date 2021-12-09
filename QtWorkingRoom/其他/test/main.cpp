#include "mainwindow.h"
#include <QApplication>
#include<QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QString kk;
    qDebug()<<kk;

    return a.exec();
}
