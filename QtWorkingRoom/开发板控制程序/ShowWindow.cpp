#include "ui_window_main.h"
extern char** CMD;
extern ubody* u78asd;
extern nSOCKET csocket;
window_main::window_main(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::window_main)
{
    ui->setupUi(this);
}

window_main::~window_main()
{
    delete ui;
}

void window_main::on_pushButton_changlogin_clicked()
{
    emit send_changlongin();
    this->hide();
}

void window_main::on_pushButton_refresh_information_clicked()
{
    char buffer[CMDLEN]="renew";
    if(csocket.Online==1)
    {
        int len=::send(csocket.socket,buffer,CMDLEN,0);
        if(len!=6)
        {
            QMessageBox::information(this,"wang","error");
        }
        else
        {
            QMessageBox::information(this,"0","waiting");
        }
    }
    else
    {
        QMessageBox::information(this,"提示","网络连接错误,请检查网络连接");
    }
}

void window_main::recv_showthis()
{
    this->show();
}

void window_main::recv_show_listwidget(QString jk,int lld)
{
    QListWidgetItem *item=new QListWidgetItem(ui->listWidget_user,0);
    item->setSizeHint(QSize(100,100));
    QWidget *w = new QWidget(ui->listWidget_user);
    QHBoxLayout *layout=new QHBoxLayout(w);
    QLabel *hdsad=new QLabel(w);
    QPushButton *pushButton=new QPushButton(w);
    hdsad->setText(jk);
    pushButton->setText("交流");
    connect(pushButton,&QPushButton::released,[=]()
    {
        char buffer[6]="toesp";
        buffer[5]='\0';
        ::send(csocket.socket,buffer,CMDLEN,0);
    });
    layout->addWidget(pushButton);
    layout->addWidget(hdsad);
    w->setLayout(layout);
    w->show();
    ui->listWidget_user->setItemWidget(item,w);
}
