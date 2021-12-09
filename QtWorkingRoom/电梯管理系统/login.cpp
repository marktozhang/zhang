#include "login.h"
#include "ui_login.h"
#include<QLabel>
#include<QMovie>
#include<QRegExp>
#include<cnnNT.h>
#include<QMessageBox>
#include<QDebug>
#include<windows.h>
#include<QApplication>

extern SOCKET socket_z;
login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);//无边框
   // ui->txtwaring->setText("服务器未连接，请稍等/重试/检查网络状态");
    ui->txtwaring->setText("                                ");
    //ui->txtwaring->setVisible(false);
    m_bDrag=false;
    ui->memorypassword->setChecked(true);
    ui->autologin->setChecked(true);
    ui->txtpassword->setText("123456");
}

login::~login()
{
    delete ui;
}

void login::on_closeWindow_clicked()
{
    QApplication::exit();
}

void login::on_showmin_clicked()
{
    this->showMinimized();
}

void login::on_loginStart_clicked()
{

    QString user;//ui->txtuser->text();
    user=ui->txtuser->currentText();
    qDebug()<<"当前文本"<<user;
    QString password=ui->txtpassword->text();
    qDebug()<<"当前文本"<<password;

    if(password.length()==0)
    {
        QMessageBox::information(this,"提示","密码为空");
        return ;
    }
    if(user.length()==0)
    {
        QMessageBox::information(this,"提示","用户名为空");
        return ;
    }
    int len=0;
    int size1=user.length();
    int size2=password.length();
    int cmd=1;
    len=::send(socket_z,(char*)&cmd,sizeof(int),0);
    if(len<0)
    {
        qDebug()<<"未连接服务器";
        ui->txtwaring->setText("服务器未连接，请稍等/重试/检查网络状态");
    }
    ::send(socket_z,(char*)&size1,sizeof(int),0);
    ::send(socket_z,user.toUtf8().data(),size1,0);
    ::send(socket_z,(char*)&size2,sizeof(int),0);
    ::send(socket_z,password.toUtf8().data(),size2,0);
    qDebug()<<"信息已发送";
/*
    QString path=QApplication::applicationDirPath();
    QString tempath=path+"/info.accdb";
    path+="/info.o";
    qDebug()<<path;
    rename(path.toUtf8().data(),tempath.toUtf8().data());
    DataBase db;*/



}


void login::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
            m_bDrag = true;
            mouseStartPoint = event->globalPos();
            windowTopLeftPoint = this->frameGeometry().topLeft();
    }
}



void login::mouseMoveEvent(QMouseEvent *event)
{
     if(m_bDrag)
     {
           QPoint distance = event->globalPos() - mouseStartPoint;
           this->move(windowTopLeftPoint + distance);
     }
}

void login::mouseReleaseEvent(QMouseEvent *event)
{

      if(event->button() == Qt::LeftButton)
      {
            m_bDrag = false;
      }
}

void login::hidethis()
{
    this->hide();
}

void login::warnup()
{
    QMessageBox::information(this,"提示","您未注册/账号错误/密码错误");
}

void login::on_checkBox_clicked()
{



;
}

void login::on_pushButton_5_clicked()
{
    emit showmakecard();
    this->hide();
}
