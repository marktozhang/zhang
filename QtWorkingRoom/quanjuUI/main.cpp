#include "mainwindow.h"
#include <QApplication>

#include "ui_mainwindow.h"
extern Ui::MainWindow *ui;//界面的全局化
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    return a.exec();
}
