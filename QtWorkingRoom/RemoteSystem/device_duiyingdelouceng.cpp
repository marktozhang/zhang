#include "device_duiyingdelouceng.h"
#include "ui_device_duiyingdelouceng.h"
#include<QLineEdit>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include"scdata.h"
#include<QListWidgetItem>
#include<QDebug>
#include<QMessageBox>
#include<sql.h>
extern TABLEALL  tALL;//所有表信息的缓存
device_duiyingdelouceng::device_duiyingdelouceng(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::device_duiyingdelouceng)
{
    ui->setupUi(this);
    //setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
    //setWindowModality(Qt::ApplicationModal);

    //装盒子操作
    /*QWidget* w=new QWidget(this);
    QHBoxLayout *all=new QHBoxLayout(w);
    QVBoxLayout *left=new QVBoxLayout(this);
    QVBoxLayout *right=new QVBoxLayout(this);

    QLineEdit *lef=new QLineEdit[64];
    QLineEdit *righ=new QLineEdit[64];

    QLabel *dsad=new QLabel[2];
    dsad[0].setText("楼层");
    dsad[1].setText("楼层名称");
    left->addWidget(&dsad[0]);
    right->addWidget(&dsad[1]);
    for(int i=0;i<64;i++)
    {
       lef[i].setText(QString::number(i));
       lef[i].setAlignment(Qt::AlignRight);
       left->addWidget(&lef[i]);
       righ[i].setText(QString::number(i)+"层");
       right->addWidget(&righ[i]);
    }
    all->addLayout(left);
    all->addLayout(right);
    w->setLayout(all);
    ui->scrollArea_2->setWidget(w);*/


    connect(ui->listWidget,&QListWidget::clicked,[=]()
    {
         int   num=ui->listWidget->currentRow();
            int ww=ui->listWidget_haha->width();
         int kk=ui->listWidget_haha->count();
         for(int l=0;l<kk;l++)
         {
QListWidgetItem* item=ui->listWidget_haha->takeItem(0);
delete item;
         }
         qDebug()<<"当前数量"<<num;
         if(num<0)
         {
             ;
         }
         else
         {
             QListWidgetItem *itecm=ui->listWidget->item(num);
             QWidget* temitem=ui->listWidget->itemWidget(itecm);
             QString ttx;
             QList<QLabel*>   uu=temitem->findChildren<QLabel*>("电梯编码");
             foreach(QLabel* u,uu)
             {
                ttx=u->text();
             }
             for(int e=0;e<tALL.deviceinfo.row;e++)
             {
                 if(tALL.deviceinfo.s[e][1]==ttx)
                 {
                     int nudm=(tALL.deviceinfo.s[e][3]).toInt();
                     qDebug()<<"cengshu"<<nudm;
                     QWidget* a;
                     QLabel *b;
                     QLabel*c;
                     QListWidgetItem* d;
                     QHBoxLayout* box;
                     for(int i=0;i<nudm;i++)
                     {
                        a=new QWidget(ui->listWidget_haha);
                        b=new QLabel(ui->listWidget_haha);
                        c=new QLabel(ui->listWidget_haha);
                        d=new QListWidgetItem(ui->listWidget_haha);
                        box=new QHBoxLayout(a);
                        b->setText(QString::number(i+1));
                        qDebug()<<b->text();
                        c->setText(tALL.deviceinfo.s[e][i+8]);
                        qDebug()<<b->text();
                        box->addWidget(b);
                        box->addWidget(c);
                        b->setStyleSheet("QLabel{color:rgb(0,0,0);border-style:solid;border-width:2px;border-color:rgb(0,0,0);}");
                        c->setStyleSheet("QLabel{color:rgb(0,0,0);border-style:solid;border-width:2px;border-color:rgb(0,0,0);}");

                        a->setStyleSheet("QWidget{background-color:rgba(255,255,255,0);color:rgb(0,0,0)}");
                        a->setLayout(box);
                        d->setSizeHint(QSize(ww,50));
                        ui->listWidget_haha->addItem(d);
                        ui->listWidget_haha->setItemWidget(d,a);
                     }
                        break;
                 }
             }


         }
    });
    this->setWindowTitle("设备管理");
    //读数据
    QWidget *  dad;
    QLabel **asd;
    QListWidgetItem *item;
    int ww=ui->b->width();
    for(int j=0;j<tALL.deviceinfo.row;j++)
    {
        item=new QListWidgetItem(ui->listWidget);
        dad=new QWidget(this);
        dad->setStyleSheet("QWidget{background-color:rgba(255,255,02,0);color:rgb(0,0,0)}");
        asd=new QLabel*[4];
        for(int i=1;i<5;i++)
        {
            asd[i-1]=new QLabel(dad);
           if(i==1)
           {
              asd[i-1]->setObjectName("电梯编码");
           }
           asd[i-1]->setStyleSheet("QLabel{border-style:solid;border-width:2px;border-color:rgb(0,0,0);}");
           asd[i-1]->setText(tALL.deviceinfo.s[j][i]);
           asd[i-1]->setGeometry((i-1)*ww/4,0,ww/4,50);
        }
        item->setSizeHint(QSize(ww,50));
        ui->listWidget->addItem(item);
        ui->listWidget->setItemWidget(item,dad);
    }
}

device_duiyingdelouceng::~device_duiyingdelouceng()
{
    delete ui;
}

void device_duiyingdelouceng::on_pushButton_5_clicked()
{
    this->hide();
    emit showtoadd();
}

void device_duiyingdelouceng::showthis()
{
    this->show();
}

void device_duiyingdelouceng::recvxiewwan()
{
    delete  ui->listWidget;
    ui->listWidget=new QListWidget(this);

    connect(ui->listWidget,&QListWidget::clicked,[=]()
    {
         int   num=ui->listWidget->currentRow();
            int ww=ui->listWidget_haha->width();
         int kk=ui->listWidget_haha->count();
         for(int l=0;l<kk;l++)
         {
QListWidgetItem* item=ui->listWidget_haha->takeItem(0);
delete item;
         }
         qDebug()<<"当前数量"<<num;
         if(num<0)
         {
             ;
         }
         else
         {
             QListWidgetItem *itecm=ui->listWidget->item(num);
             QWidget* temitem=ui->listWidget->itemWidget(itecm);
             QString ttx;
             QList<QLabel*>   uu=temitem->findChildren<QLabel*>("电梯编码");
             foreach(QLabel* u,uu)
             {
                ttx=u->text();
             }
             for(int e=0;e<tALL.deviceinfo.row;e++)
             {
                 if(tALL.deviceinfo.s[e][1]==ttx)
                 {
                     int nudm=(tALL.deviceinfo.s[e][3]).toInt();
                     qDebug()<<"cengshu"<<nudm;
                     QWidget* a;
                     QLabel *b;
                     QLabel*c;
                     QListWidgetItem* d;
                     QHBoxLayout* box;
                     for(int i=0;i<nudm;i++)
                     {
                        a=new QWidget(ui->listWidget_haha);
                        b=new QLabel(ui->listWidget_haha);
                        c=new QLabel(ui->listWidget_haha);
                        d=new QListWidgetItem(ui->listWidget_haha);
                        box=new QHBoxLayout(a);
                        b->setText(QString::number(i+1));
                        qDebug()<<b->text();
                        c->setText(tALL.deviceinfo.s[e][i+8]);
                        qDebug()<<b->text();
                        box->addWidget(b);
                        box->addWidget(c);
                        b->setStyleSheet("QLabel{color:rgb(0,0,0);border-style:solid;border-width:2px;border-color:rgb(0,0,0);}");
                        c->setStyleSheet("QLabel{color:rgb(0,0,0);border-style:solid;border-width:2px;border-color:rgb(0,0,0);}");

                        a->setStyleSheet("QWidget{background-color:rgba(255,255,255,0);color:rgb(0,0,0)}");
                        a->setLayout(box);
                        d->setSizeHint(QSize(ww,50));
                        ui->listWidget_haha->addItem(d);
                        ui->listWidget_haha->setItemWidget(d,a);
                     }
                        break;
                 }
             }


         }
    });
    ui->VLAYoutlistwidget->addWidget(ui->listWidget);

    ui->VLAYoutlistwidget->setStretchFactor(ui->a,1);
    ui->VLAYoutlistwidget->setStretchFactor(ui->b,1);
    ui->VLAYoutlistwidget->setStretchFactor(ui->listWidget,20);

    QWidget *  dad;
    QLabel **asd;
    QListWidgetItem *item;

    int ww=ui->b->width();
    for(int j=0;j<tALL.deviceinfo.row;j++)
    {
        dad=new QWidget(this);
        dad->setStyleSheet("QWidget{background-color:rgba(255,255,02,0);color:rgb(0,0,0)}");
        asd=new QLabel*[4];
        for(int i=1;i<5;i++)
        {
            asd[i-1]=new QLabel(dad);
            if(i==1)
            {
                asd[i-1]->setObjectName("电梯编码");
            }
           asd[i-1]->setParent(dad);
           asd[i-1]->setStyleSheet("QLabel{border-style:solid;border-width:2px;border-color:rgb(0,0,0);}");
           asd[i-1]->setText(tALL.deviceinfo.s[j][i]);

            asd[i-1]->setGeometry((i-1)*ww/4,0,ww/4,50);
        }
        item=new QListWidgetItem(ui->listWidget);
        item->setSizeHint(QSize(ww,50));
        ui->listWidget->addItem(item);
        ui->listWidget->setItemWidget(item,dad);
    }
}

void device_duiyingdelouceng::setQSS(QString  arg1)
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

void device_duiyingdelouceng::on_pushButton_2_clicked()
{
    emit   wancde();
    this->hide();
}


//删除指定的设备信息
void device_duiyingdelouceng::on_pushButton_6_clicked()
{

    int num=ui->listWidget->count()-1;
    if(num<0)
    {
        QMessageBox::information(this,"提示","无信息");
        return;
    }
    QString txt_al;
    QListWidgetItem *itecm=ui->listWidget->item(num);
    QWidget* temitem=ui->listWidget->itemWidget(itecm);
    QList<QLabel*>   uu=temitem->findChildren<QLabel*>("电梯编码");
    foreach(QLabel * u ,uu)
    {
        txt_al=u->text();
    }
    QString ddd="delete from  表_设备信息 where 电梯编码=";
    //txt_al=QString("\'")+QString("55")+"\'";
    ddd+=txt_al;
    qDebug()<<"删除语句"<<ddd;
    sql seaddrch(ddd);

    //更新==============
    delete  ui->listWidget;


    ui->listWidget=new QListWidget(this);
    connect(ui->listWidget,&QListWidget::clicked,[=]()
    {
         int   num=ui->listWidget->currentRow();
            int ww=ui->listWidget_haha->width();
         int kk=ui->listWidget_haha->count();
         for(int l=0;l<kk;l++)
         {
QListWidgetItem* item=ui->listWidget_haha->takeItem(0);
delete item;
         }
         qDebug()<<"当前数量"<<num;
         if(num<0)
         {
             ;
         }
         else
         {
             QListWidgetItem *itecm=ui->listWidget->item(num);
             QWidget* temitem=ui->listWidget->itemWidget(itecm);
             QString ttx;
             QList<QLabel*>   uu=temitem->findChildren<QLabel*>("电梯编码");
             foreach(QLabel* u,uu)
             {
                ttx=u->text();
             }
             for(int e=0;e<tALL.deviceinfo.row;e++)
             {
                 if(tALL.deviceinfo.s[e][1]==ttx)
                 {
                     int nudm=(tALL.deviceinfo.s[e][3]).toInt();
                     qDebug()<<"cengshu"<<nudm;
                     QWidget* a;
                     QLabel *b;
                     QLabel*c;
                     QListWidgetItem* d;
                     QHBoxLayout* box;
                     for(int i=0;i<nudm;i++)
                     {
                        a=new QWidget(ui->listWidget_haha);
                        b=new QLabel(ui->listWidget_haha);
                        c=new QLabel(ui->listWidget_haha);
                        d=new QListWidgetItem(ui->listWidget_haha);
                        box=new QHBoxLayout(a);
                        b->setText(QString::number(i+1));
                        qDebug()<<b->text();
                        c->setText(tALL.deviceinfo.s[e][i+8]);
                        qDebug()<<b->text();
                        box->addWidget(b);
                        box->addWidget(c);
                        b->setStyleSheet("QLabel{color:rgb(0,0,0);border-style:solid;border-width:2px;border-color:rgb(0,0,0);}");
                        c->setStyleSheet("QLabel{color:rgb(0,0,0);border-style:solid;border-width:2px;border-color:rgb(0,0,0);}");

                        a->setStyleSheet("QWidget{background-color:rgba(255,255,255,0);color:rgb(0,0,0)}");
                        a->setLayout(box);
                        d->setSizeHint(QSize(ww,50));
                        ui->listWidget_haha->addItem(d);
                        ui->listWidget_haha->setItemWidget(d,a);
                     }
                        break;
                 }
             }


         }
    });
    ui->VLAYoutlistwidget->addWidget(ui->listWidget);
    ui->VLAYoutlistwidget->setStretchFactor(ui->a,1);
    ui->VLAYoutlistwidget->setStretchFactor(ui->b,1);
    ui->VLAYoutlistwidget->setStretchFactor(ui->listWidget,20);
    QWidget *  dad;
    QLabel **asd;
    QListWidgetItem *item;
    int ww=ui->b->width();
    for(int j=0;j<tALL.deviceinfo.row;j++)
    {
        dad=new QWidget(this);
        dad->setStyleSheet("QWidget{background-color:rgba(255,255,02,0);color:rgb(0,0,0)}");
        asd=new QLabel*[4];
        for(int i=1;i<5;i++)
        {
             asd[i-1]=new QLabel(dad);
            if(i==1)
            {
                asd[i-1]->setObjectName("电梯编码");
            }
           asd[i-1]->setParent(dad);
           asd[i-1]->setStyleSheet("QLabel{border-style:solid;border-width:2px;border-color:rgb(0,0,0);}");
           asd[i-1]->setText(tALL.deviceinfo.s[j][i]);
            asd[i-1]->setGeometry((i-1)*ww/4,0,ww/4,50);
        }
        item=new QListWidgetItem(ui->listWidget);
        item->setSizeHint(QSize(ww,50));
        ui->listWidget->addItem(item);
        ui->listWidget->setItemWidget(item,dad);
    }
}
void device_duiyingdelouceng::on_pushButton_clicked()
{


}

void device_duiyingdelouceng::on_pushButton_4_clicked()
{
    int num=ui->listWidget->currentRow();

    if(num<0)
    {
        ;
    }
    else
    {
        QListWidgetItem *itecm=ui->listWidget->item(num);
        QWidget* temitem=ui->listWidget->itemWidget(itecm);
        QString ttx;
        QList<QLabel*>   uu=temitem->findChildren<QLabel*>("电梯编码");
        foreach(QLabel* u,uu)
        {
           ttx=u->text();
        }
        for(int e=0;e<tALL.deviceinfo.row;e++)
        {
            if(tALL.deviceinfo.s[e][1]==ttx)
            {
                int num=0;
                this->hide();
                emit xxxggg(tALL.deviceinfo.s[e][1],tALL.deviceinfo.s[e][2],tALL.deviceinfo.s[e][3],tALL.deviceinfo.s[e][4]);
                break;

                }
            }




    }
}
