#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ser=new QTcpServer();
    connect(ser,&QTcpServer::newConnection,[=]()
    {
        qDebug()<<"扶我去";
        scok=ser->nextPendingConnection();
        connect(scok,&QTcpSocket::disconnected,[=]()
        {
             qDebug()<<"qqqqqqqqq";
        });

    });

    ser->listen(QHostAddress::AnyIPv4,8848);
}

MainWindow::~MainWindow()
{
    delete ui;
}
