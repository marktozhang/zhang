#include "esp8266.h"
#include "ui_esp8266.h"
#include<QMessageBox>
#include<QDebug>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLabel>

#include<QLineEdit>
#include"espwidget.h"

extern SOCKET socket_z;
extern ListDeceive listdeced;
kehu *espoint;
kehu::kehu(QWidget *parent) :
    QWidget(parent)
{
    ui=new Ui::esp8266;
    ui->setupUi(this);
    espoint=this;
    setWindowFlags(Qt::FramelessWindowHint);//无边框
   // DataBase dt;
   // dt.readData();
}

kehu::~kehu()
{
    delete ui;
}

void kehu::on_pushButton_clicked()
{
    int len=0;
    int  h=100;//100 renew 界面
    len=::send(socket_z,(char*)&h,sizeof(int),0);
    if(len<0)
    {
        QMessageBox::information(this,"提示","消息发送失败");
    }
    qDebug()<<"renew发送";
}

void kehu::show_renew(QString  psre,int d,int type)
{
    qDebug()<<"name"<<psre;
    qDebug()<<"编号"<<d;
    qDebug()<<"类型"<<type;
   /* if(type==1)
    {

        QListWidgetItem *item=new QListWidgetItem(ui->listWidget_showde,0);
        item->setSizeHint(QSize(10,100));
        QWidget *w = new QWidget(ui->listWidget_showde);
        QHBoxLayout *layout=new QHBoxLayout(w);
        QLabel *num=new QLabel(w);

        num->setText(QString::number(d));

        QLabel *hdsad=new QLabel(w);
        QPushButton *button=new QPushButton(w);
        button->setText("dianwo ");

        hdsad->setText(QString(psre));
        hdsad->show();
        layout->addWidget(num);
        layout->addWidget(hdsad);
        layout->addWidget(button);
        w->setLayout(layout);
       // w->resize(100,100);
        w->show();
        ui->listWidget_showde->setItemWidget(item,w);
    }
    if(type==2)
    {

        QListWidgetItem *item=new QListWidgetItem(ui->listWidget_showde,0);
        item->setSizeHint(QSize(10,100));
        QWidget *w = new QWidget(ui->listWidget_showde);
        QHBoxLayout *layout=new QHBoxLayout(w);
        QLabel *num=new QLabel(w);

        num->setText(QString::number(d));

        QLabel *hdsad=new QLabel(w);
        QPushButton *button=new QPushButton(w);
        button->setText("dianwo ");

        hdsad->setText(QString(psre));
        hdsad->show();
        layout->addWidget(num);
        layout->addWidget(hdsad);
        layout->addWidget(button);
        w->setLayout(layout);

        w->show();
        ui->listWidget_showde->setItemWidget(item,w);

    }*/

}

void kehu::on_pushButton_2_clicked()
{
    int len=0;
    int  h=100;//100 renew 界面
    len=::send(socket_z,(char*)&h,sizeof(int),0);
    if(len<0)
    {
        QMessageBox::information(this,"提示","消息发送失败");
    }
    qDebug()<<"renew发送";
    /*int counter =ui->listWidget_showde->count();
    for(int i=0;i<counter;i++)
    {
         QListWidgetItem *item = ui->listWidget_showde->takeItem(0);
         delete item;
    }*/
}

void kehu::Firstwindow()
{




}

void kehu::showthis()
{
    this->show();
}

void kehu::addresult(int result)
{
    qDebug()<<result;
    if(result==51)
    {
        QMessageBox::information(this,"提示","已成功将信息添加到服务器");
        return;
    }
    else if(result==-51)
    {
        QMessageBox::information(this,"提示","添加失败");
        return;
    }
    else if(result==52)
    {
        QMessageBox::information(this,"提示","账户信息已存在，请勿重复添加");
        return ;
    }
}

void kehu::showrenew()
{
    QListWidgetItem*item;
    espwidget * w;
    qDebug()<<""<<listdeced.length;
    for(int i=0;i<listdeced.length;i++)
    {
        w=new espwidget(this,i);
        item = new QListWidgetItem (ui->listWidget_DTU,0);
        item->setSizeHint(QSize(400,60));
        ui->listWidget_DTU->setItemWidget(item,w);
    }
}

void kehu::recvrq()
{
    QMessageBox::information(this,"提示","开始重启");

}

void kehu::showlist()
{

}

void kehu::setQSS(QString  arg1)
{
    if(arg1==QString("墨绿"))
        {
       this->setStyleSheet("\
    QWidget\
    {\
        background-color: rgb(20, 85, 10);\
        color: rgb(255, 255, 255);\
        font: 9pt \"微软雅黑\";\
    }\
    QPushButton:hover\
    {\
    border-style:solid;\
    border-width:2px;\
    background-color: rgb(255, 170, 127);\
    color: rgba(255, 255, 255, 255);\
    }\
    QPushButton:!hover\
    {\
    border-style:solid;\
    border-width:2px;\
    background-color:rgb(0, 85, 0);\
    color: rgba(255, 255, 255, 255);\
    }\
    QTabBar:tab:selected\
    {\
        background-color: rgb(255, 170, 127);\
    }\
    QTabBar:tab:!selected\
    {\
        background-color: rgb(0, 85, 0);\
    }\
    QLineEdit\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget::item\
    {\
        color: rgb(0, 0, 0);\
        border-style:none;\
        border-bottom-style:solid;\
        border-bottom-width:4px;\
        border-bottom-color:rgb(0, 85, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget::item:hover\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(85, 255, 255);\
    }\
    QListWidget::item:!hover\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget::item:selected\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 0, 0);\
    }\
    QComboBox\
    {\
        background-color: rgb(255, 255, 255);\
        color: rgb(0, 0, 0);\
    }\
    QMenuBar\
    {\
        background-color:transparent;\
    }\
    QMenuBar::item\
    {\
        background-color:transparent;\
    }\
    QMenu\
    {\
        background-color: rgba(255, 255, 255,0);\
    }\
    QMenu::item:!selected\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(238, 238, 238);\
        border:none rgb(255, 255, 255);\
        border-bottom:1px solid rgb(204, 204, 204);\
    }\
    QMenu::item:selected\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(170, 255, 255);\
        border:none rgb(255, 255, 255);\
        border-bottom:1px solid rgb(204, 204, 204);\
    }\
    QDateEdit\
    {\
        background-color: rgb(255, 255, 255);\
        color: rgb(0, 0, 0);\
    }\
    QSpinBox\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListView\
    {\
        background-color: rgb(255, 255, 255);\
        color: rgb(0, 0, 0);\
    }");

    }
    else if(arg1==QString("天蓝"))
        {
       this->setStyleSheet("\
    QWidget\
    {\
        background-color: rgb(85, 170, 255);\
        color: rgb(255, 255, 255);\
        font: 9pt \"微软雅黑\";\
    }\
    QPushButton:hover\
    {\
    border-style:solid;\
    border-width:2px;\
    background-color: rgb(60, 160, 255);\
    color: rgba(255, 255, 255, 255);\
    }\
    QPushButton:!hover\
    {\
    border-style:solid;\
    border-width:2px;\
    background-color: rgb(85, 170, 255);\
    color: rgba(255, 255, 255, 255);\
    }\
    QTabBar:tab:selected\
    {\
        background-color: rgb(255, 170, 127);\
    }\
    QTabBar:tab:!selected\
    {\
        background-color: rgb(85, 170, 255);\
    }\
    QLineEdit\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget::item\
    {\
        color: rgb(0, 0, 0);\
        border-style:none;\
        border-bottom-style:solid;\
        border-bottom-width:4px;\
        border-bottom-color:rgb(0, 85, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget::item:hover\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(85, 255, 255);\
    }\
    QListWidget::item:!hover\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget::item:selected\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 0, 0);\
    }\
    QComboBox\
    {\
        background-color: rgb(255, 255, 255);\
        color: rgb(0, 0, 0);\
    }\
    QMenuBar\
    {\
        background-color:transparent;\
    }\
    QMenuBar::item\
    {\
        background-color:transparent;\
    }\
    QMenu\
    {\
        background-color: rgba(255, 255, 255,0);\
    }\
    QMenu::item:!selected\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(238, 238, 238);\
        border:none rgb(255, 255, 255);\
        border-bottom:1px solid rgb(204, 204, 204);\
    }\
    QMenu::item:selected\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(170, 255, 255);\
        border:none rgb(255, 255, 255);\
        border-bottom:1px solid rgb(204, 204, 204);\
    }\
    QDateEdit\
    {\
        background-color: rgb(255, 255, 255);\
        color: rgb(0, 0, 0);\
    }\
    QSpinBox\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListView\
    {\
        background-color: rgb(255, 255, 255);\
        color: rgb(0, 0, 0);\
    }");

    }

    else if(arg1==QString("粉红"))
    {



        this->setStyleSheet("\
     QWidget\
     {\
        background-color: rgb(255, 187, 226);\
         color: rgb(255, 255, 255);\
         font: 9pt \"微软雅黑\";\
     }\
     QPushButton:hover\
     {\
     border-style:solid;\
     border-width:2px;\
     background-color: rgb(60, 160, 255);\
     color: rgba(255, 255, 255, 255);\
     }\
     QPushButton:!hover\
     {\
     border-style:solid;\
     border-width:2px;\
     background-color: rgb(255, 187, 226);\
     color: rgba(255, 255, 255, 255);\
     }\
     QTabBar:tab:selected\
     {\
         background-color: rgb(255, 170, 127);\
     }\
     QTabBar:tab:!selected\
     {\
         background-color: rgb(255, 187, 226);\
     }\
     QLineEdit\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(255, 255, 255);\
     }\
     QListWidget\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(255, 255, 255);\
     }\
     QListWidget::item\
     {\
         color: rgb(0, 0, 0);\
         border-style:none;\
         border-bottom-style:solid;\
         border-bottom-width:4px;\
         border-bottom-color:rgb(0, 85, 0);\
         background-color: rgb(255, 255, 255);\
     }\
     QListWidget::item:hover\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(85, 255, 255);\
     }\
     QListWidget::item:!hover\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(255, 255, 255);\
     }\
     QListWidget::item:selected\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(255, 0, 0);\
     }\
     QComboBox\
     {\
         background-color: rgb(255, 255, 255);\
         color: rgb(0, 0, 0);\
     }\
     QMenuBar\
     {\
         background-color:transparent;\
     }\
     QMenuBar::item\
     {\
         background-color:transparent;\
     }\
     QMenu\
     {\
         background-color: rgba(255, 255, 255,0);\
     }\
     QMenu::item:!selected\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(238, 238, 238);\
         border:none rgb(255, 255, 255);\
         border-bottom:1px solid rgb(204, 204, 204);\
     }\
     QMenu::item:selected\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(170, 255, 255);\
         border:none rgb(255, 255, 255);\
         border-bottom:1px solid rgb(204, 204, 204);\
     }\
     QDateEdit\
     {\
         background-color: rgb(255, 255, 255);\
         color: rgb(0, 0, 0);\
     }\
     QSpinBox\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(255, 255, 255);\
     }\
     QListView\
     {\
         background-color: rgb(255, 255, 255);\
         color: rgb(0, 0, 0);\
     }");

    }


}



void kehu::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
            m_bDrag = true;
            mouseStartPoint = event->globalPos();
            windowTopLeftPoint = this->frameGeometry().topLeft();
    }
}



void kehu::mouseMoveEvent(QMouseEvent *event)
{
     if(m_bDrag)
     {
           QPoint distance = event->globalPos() - mouseStartPoint;
           this->move(windowTopLeftPoint + distance);
     }
}

void kehu::mouseReleaseEvent(QMouseEvent *event)
{

      if(event->button() == Qt::LeftButton)
      {
            m_bDrag = false;
      }
}




void kehu::on_closewindow_clicked()
{
    QApplication::exit();
}

void kehu::on_minwindow_clicked()
{
    this->showMinimized();
}

void kehu::on_addnewdevice_clicked()
{

    QWidget *w=new  QWidget(this);
    QWidget *w2=new  QWidget(this);
    QWidget *w3=new  QWidget(this);
    QVBoxLayout  * vvv=new QVBoxLayout(w);
    QHBoxLayout  * hhh=new QHBoxLayout(w);
    QHBoxLayout  * hhh2=new QHBoxLayout(w);


    QLabel  *name =new QLabel(w);
    name->setText("产品名称");
    QLabel  *number=new QLabel(w);
    number->setText("产品编号");
    QLineEdit *tname=new QLineEdit(w);

    QLineEdit *tnumber=new QLineEdit(w);
    hhh->addWidget(name);
    hhh->addWidget(tname);
    hhh->addWidget(number);
    hhh->addWidget(tnumber);
    w2->setLayout(hhh);
    QPushButton *queren=new QPushButton(w);
    connect(queren,&QPushButton::clicked,[=]()
    {
        QString txtname=tname->text();
        QString txtnumber=tnumber->text();
        if(txtname.length()==0||txtnumber.length()==0)
        {
            QMessageBox::information(this,"提示","输入为空");
            return;
        }
        int cmd=1;
        ::send(socket_z,(char*)&cmd,sizeof(int),0);

        qDebug()<<"获取文本"<<txtname;
        qDebug()<<"获取文本"<<txtnumber;
        int a=txtname.length(),b=txtnumber.length();
        ::send(socket_z,(char*)&a,sizeof(int),0);
        ::send(socket_z,txtname.toUtf8().data(),txtname.length(),0);
        ::send(socket_z,(char*)&b,sizeof(int),0);
        ::send(socket_z,txtnumber.toUtf8().data(),txtnumber.length(),0);
    });

    queren->setText("确认");
    QPushButton *xiugai=new QPushButton(w);
    xiugai->setText("修改信息的接口");

    QPushButton *quxiao=new QPushButton(w);
    quxiao->setText("取消");
    connect(quxiao,&QPushButton::clicked,[=]()
    {
        w->hide();
        w->close();
        qDebug()<<"关闭前的w的地址"<<&w;
        w->setAttribute(Qt::WA_DeleteOnClose);
        qDebug()<<"关闭后的w的地址"<<&w;
    });
    hhh2->addWidget(queren);
    hhh2->addWidget(xiugai);
    hhh2->addWidget(quxiao);
    w3->setLayout(hhh2);

    vvv->addWidget(w2);
    vvv->addWidget(w3);
    w->setLayout(vvv);
    w->resize(600,300);
    //w->setStyleSheet("QWidget{background-color: rgb(255, 0, 0);}");
    w->show();
}

void kehu::on_renew_clicked()
{
    int cmd=3;
    ::send(socket_z,(char*)&cmd,sizeof(int),0);
    int count=0;
    count=ui->listWidget_DTU->count();
    for(int i=0;i<count;i++)
    {
        QListWidgetItem*item =ui->listWidget_DTU->takeItem(0);
        delete item;
    }
}
