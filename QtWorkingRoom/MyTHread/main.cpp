#include "mainwindow.h"
#include <QApplication>
#include"th.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    th tthh=new th();

    return a.exec();
}
