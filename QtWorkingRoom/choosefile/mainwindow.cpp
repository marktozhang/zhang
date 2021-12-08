#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString strFile = QFileDialog::getOpenFileName(this,"选择文件","./","文本文件(*.xls;*.xlsx;)");
   if (strFile.isEmpty())
   {
        return;
   }
}
