#include "ui_mainwindow.h"
nSOCKET csocket;//通信的结构体
char** CMD;//
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_username->setText("请输入数字与字母的组合");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::recv_showthis()
{
    this->show();
}
void MainWindow::recv_netcnn_repaint_isonline(int is)
{
    if(is)
    {
        ui->show_isonline->setText("服务器已连接");
    }
    else
    {
        ui->show_isonline->setText("请检查网络连接");
    }
}

void MainWindow::on_regist_clicked()
{
    this->hide();
    emit send_show_registwidget();
}


