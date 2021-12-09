#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QApplication>
#include<QDebug>
#include<QDir>

#define REG_RUN  "HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QString applicationName=QApplication::applicationName();
    QString path= QApplication::applicationFilePath();
    qDebug()<<"applicationName"<<applicationName;
    qDebug()<<"path"<<path;


}

MainWindow::~MainWindow()
{
    delete ui;
}
