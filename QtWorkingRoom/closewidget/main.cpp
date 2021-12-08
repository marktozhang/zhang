#include "mainwindow.h"
#include <QApplication>
#include<windows.h>
#include<QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
   // w.show();
    char dd[1024];
    char* ds="qwertyuiopasd";


    ds[3]='\0';
    qDebug()<<QString(ds);
   // delete  dsadas
}
