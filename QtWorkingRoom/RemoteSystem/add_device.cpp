#include "add_device.h"
#include "ui_add_device.h"
#include<QPushButton>
#include<QLineEdit>
#include<QDebug>
#include"scdata.h"
#include<QSqlQuery>
#include<QSqlRecord>
#include<QDebug>
#include<QMessageBox>
#include"sql.h"
QPushButton *butt64;
QLineEdit  *line64;
extern TABLEALL  tALL;//所有表信息的缓存

int zhiqian;
int xie_add;
ADD_device::ADD_device(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ADD_device)
{
    ui->setupUi(this);
   // setWindowModality(Qt::ApplicationModal);
    this->setWindowTitle("设备添加");

    int bwidth=ui->button64->width()/10;
    int bheight=ui->button64->height()/7;
    qDebug()<<bwidth<<" "<<bheight;
    butt64=new QPushButton[64];
    line64=new QLineEdit[64];
    for(int i=0;i<64;i++)
    {
        butt64[i].setText(QString::number(i+1));
        line64[i].setText(QString::number(i+1)+"层");
        butt64[i].setGeometry((i%10)*bwidth,(i/10)*bheight,bheight,bheight);
        line64[i].setGeometry((i%10)*bwidth+bheight,(i/10)*bheight,bheight,bheight);
        butt64[i].setParent(ui->button64);
        line64[i].setParent(ui->button64);
        line64[i].hide();
        connect(&butt64[i],SIGNAL(clicked()),this,SLOT(button64sf()));
    }
    line64[0].setText("1层");
    line64[0].show();
    connect(ui->dianticengshu,SIGNAL(valueChanged(int)),this,SLOT(qsin(int)));

    connect(this,&ADD_device::deee,this,&ADD_device::on_adddddd_clicked);
}

ADD_device::~ADD_device()
{
    delete ui;
}

void ADD_device::showthis()
{
    ui->hidexiugai->hide();
    ui->adddddd->show();
    this->show();
}

void ADD_device::button64sf()
{
    QPushButton* btn = (QPushButton*)sender();  // 获取到了发送该信号按钮的指针
    int num=btn->text().toInt();
    for(int i=0;i<64;i++)
    {
        line64[i].hide();
    }
    for(int i=0;i<num;i++)
    {
        line64[i].show();
    }
    ui->dianticengshu->setValue(num);

}

void ADD_device::qsin(int ddd)
{
    qDebug()<<"qspin收到数据"<<ddd;
    for(int i=0;i<64;i++)
    {
        line64[i].hide();
    }
    for(int i=0;i<ddd;i++)
    {
        line64[i].show();
    }


}

void ADD_device::xxx(QString ma,QString min,QString ceng,QString jing)
{

    int numa=ma.toInt();
    ui->diantidizhi->setValue(numa);
    int cengnum=ceng.toInt();
    ui->dianticengshu->setValue(cengnum);
    zhiqian=numa;
    if(jing==QString("是"))
    {
        ui->ismengjin->setChecked(true);
    }
    else
    {
        ui->ismengjin->setChecked(false);
    }
    ui->diantiname->setText(min);

    for(int i=0;i<cengnum;i++)
    {
        line64[i].show();
    }
    ui->dianticengshu->setValue(cengnum);


    ui->adddddd->hide();
    ui->hidexiugai->show();
    this->show();
}

void ADD_device::setQSS(QString  arg1)
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

void ADD_device::on_pushButton_clicked()
{

    this->hide();
    emit   okadddevice();
}

//添加设备信息
void ADD_device::on_pushButton_2_clicked()
{
    QString  diantidizhi=ui->diantidizhi->text();
    QString diantiname=ui->diantiname->text();
    QString cengshu=ui->dianticengshu->text();

    QSqlDatabase db;
    QString path=QApplication::applicationDirPath();
    if(QSqlDatabase::contains("qt_sql_default_connection"))//查看数据库连接列表包含连接名称
      db = QSqlDatabase::database("qt_sql_default_connection");//静态函数可直接调用
    else
      db=QSqlDatabase::addDatabase("QODBC");//这个函数是设置底层驱动的，参数为要连接的数据库类型
    QString driver="DRIVER={Microsoft Access Driver (*.mdb, *.accdb)}; FIL={MS Access};DBQ=";//设置驱动
    path+="/data.accdb";
    driver+=path;
    db.setDatabaseName(driver);
    db.setHostName("");
    db.setPassword("");
    db.open();

    QString zq="select * from 表_设备信息 where 电梯编码="+ui->diantidizhi->text();
    qDebug()<<"zq"<<zq;
    sql sq(zq);


    if(sq.si)
    {

            QMessageBox::information(this,"提示","改地址已存在");
            return;
    }

    QSqlQuery q;
    QString charu="insert into  表_设备信息 (电梯编码,电梯名称,层数,是否门禁";
    for(int i=1;i<cengshu.toInt()+1;i++)
    {
        charu+=","+QString::number(i);
    }
    charu+=") values (";
    diantidizhi="\'"+diantidizhi+"\'"+",";
    diantiname="\'"+diantiname+"\'"+",";
    cengshu="\'"+cengshu+"\'"+",";


    QString is ;
    if(ui->ismengjin->checkState()==Qt::Checked)
    {
        is=QString("\'")+"是"+"\'";
    }
    else
    {
        is=QString("\'")+"否"+"\'";
    }
    charu+=diantidizhi+diantiname+cengshu+is;
    for(int i=1;i<(ui->dianticengshu->text().toInt()+1);i++)
    {
        charu+=","+QString("\'")+line64[i-1].text()+"\'";
    }
    charu+=")";

    qDebug()<<"设备插入语句"<<charu;
    if(q.exec(charu))
    {
        QMessageBox::information(this,"提示","写入完成");
        scdata  kk;
        db.close();

        return ;
    }
    else
    {
        QMessageBox::information(this,"提示","写入失败");
        db.close();
        return ;
    }
    emit  xiewanl();
}

void ADD_device::on_hidexiugai_clicked()
{
    QString zqd=QString::number(zhiqian);
    QString zq="delete from 表_设备信息 where 电梯编码="+zqd;
    qDebug()<<"zq"<<zq;
    sql sq(zq);
    emit deee();
}

void ADD_device::on_adddddd_clicked()
{

    QString zq="select * from 表_设备信息 where 电梯编码="+ui->diantidizhi->text();
    qDebug()<<"zq"<<zq;
    sql sq(zq);
    if(sq.q->value(0).toString().length()>0)
    {
            QMessageBox::information(this,"提示","改地址已存在");
            return;
    }
    QString  diantidizhi=ui->diantidizhi->text();
    QString diantiname=ui->diantiname->text();
    QString cengshu=ui->dianticengshu->text();

    QSqlDatabase db;
    QString path=QApplication::applicationDirPath();
    if(QSqlDatabase::contains("qt_sql_default_connection"))//查看数据库连接列表包含连接名称
      db = QSqlDatabase::database("qt_sql_default_connection");//静态函数可直接调用
    else
      db=QSqlDatabase::addDatabase("QODBC");//这个函数是设置底层驱动的，参数为要连接的数据库类型
    QString driver="DRIVER={Microsoft Access Driver (*.mdb, *.accdb)}; FIL={MS Access};DBQ=";//设置驱动
    path+="/data.accdb";
    driver+=path;
    db.setDatabaseName(driver);
    db.setHostName("");
    db.setPassword("");
    db.open();


    QSqlQuery q;
    QString charu="insert into  表_设备信息 (电梯编码,电梯名称,层数,是否门禁";
    for(int i=1;i<cengshu.toInt()+1;i++)
    {
        charu+=","+QString::number(i);
    }
    charu+=") values (";
    diantidizhi="\'"+diantidizhi+"\'"+",";
    diantiname="\'"+diantiname+"\'"+",";
    cengshu="\'"+cengshu+"\'"+",";


    QString is ;
    if(ui->ismengjin->checkState()==Qt::Checked)
    {
        is=QString("\'")+"是"+"\'";
    }
    else
    {
        is=QString("\'")+"否"+"\'";
    }
    charu+=diantidizhi+diantiname+cengshu+is;
    for(int i=1;i<(ui->dianticengshu->text().toInt()+1);i++)
    {
        charu+=","+QString("\'")+line64[i-1].text()+"\'";
    }
    charu+=")";

    qDebug()<<"设备插入语句"<<charu;
    if(q.exec(charu))
    {
        QMessageBox::information(this,"提示","写入完成");
        scdata  kk;
        db.close();

        return ;
    }
    else
    {
        QMessageBox::information(this,"提示","写入失败");
        db.close();
        return ;
    }
    emit  xiewanl();
}
