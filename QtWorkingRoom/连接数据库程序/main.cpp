#include "MainWindow.h"
#include<QApplication>

int main(int argc, char *argv[])
{
    QApplication App(argc,argv);
    MainWindow Main;
    Main.show();
    return App.exec();
}
