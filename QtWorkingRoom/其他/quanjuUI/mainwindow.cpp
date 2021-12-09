#include "mainwindow.h"
#include "ui_mainwindow.h"
Ui::MainWindow *ui;//界面的全局化
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)//c++的初始化列表，对类类型初始化效率高，使用初始化列表少了一次调用默认构造函数的过程
{
    ui=new Ui::MainWindow();
    ui->setupUi(this);//UI类的对象初始化
}

MainWindow::~MainWindow()
{
    delete ui;
}
