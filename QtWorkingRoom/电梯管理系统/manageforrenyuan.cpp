#include "manageforrenyuan.h"
#include "ui_manageforrenyuan.h"
#include"scdata.h"
#include<QDebug>
#include<QMessageBox>
extern TABLEALL  tALL;//所有表信息的缓存
manageforrenyuan::manageforrenyuan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manageforrenyuan)
{
    ui->setupUi(this);
    this->setWindowTitle("操作人员管理");
   // setWindowModality(Qt::ApplicationModal);
    for(int i=0;i<tALL.caozuoyuan.row;i++)
    {
        ui->caozuorenyuan->addItem(tALL.caozuoyuan.s[i][0]);
    }
}

manageforrenyuan::~manageforrenyuan()
{
    delete ui;
}

void manageforrenyuan::showthis()
{
    int num=ui->caozuorenyuan->count();
    for(int i=0;i<num;i++)
    {
        QListWidgetItem* item=ui->caozuorenyuan->takeItem(0);
        delete item;
    }
    QListWidgetItem *item;
    for(int i=0;i<tALL.caozuoyuan.row;i++)
    {
        ui->caozuorenyuan->addItem(tALL.caozuoyuan.s[i][0]);
    }
    this->show();
}

void manageforrenyuan::renyuan()
{
    QListWidgetItem *item=ui->caozuorenyuan->currentItem();
    QString dd=item->text();
    for(int i=0;i<tALL.caozuoyuan.row;i++)
    {
        if(tALL.caozuoyuan.s[i][0]==dd)
        {
            if(tALL.caozuoyuan.s[i][2]==QString("20"))
            {
                ui->caozuoyuan->setChecked(true);
                ui->guanli->setChecked(false);
                ui->chaoji->setChecked(false);
            }
            else if(tALL.caozuoyuan.s[i][2]==QString("30"))
            {
                ui->caozuoyuan->setChecked(false);
                ui->guanli->setChecked(true);
                ui->chaoji->setChecked(false);
            }
            else if(tALL.caozuoyuan.s[i][2]==QString("40"))
            {
                ui->caozuoyuan->setChecked(false);
                ui->guanli->setChecked(false);
                ui->chaoji->setChecked(true);
            }
            else
            {
                ui->guanli->setChecked(false);
                ui->caozuoyuan->setChecked(false);
                ui->chaoji->setChecked(false);
            }
        }
    }
}

void manageforrenyuan::gengxinrenyuan()
{
    int num=ui->caozuorenyuan->count();
    for(int i=0;i<num;i++)
    {
        QListWidgetItem* item=ui->caozuorenyuan->takeItem(0);
        delete item;
    }
    QListWidgetItem *item;
    for(int i=0;i<tALL.caozuoyuan.row;i++)
    {
        ui->caozuorenyuan->addItem(tALL.caozuoyuan.s[i][0]);
    }
}

void manageforrenyuan::on_pushButton_clicked()
{
    this->hide();
}

void manageforrenyuan::on_pushButton_2_clicked()
{
    emit  addaccount();
}

void manageforrenyuan::on_det_clicked()
{
    QListWidgetItem *item=ui->caozuorenyuan->currentItem();
    QString ddname=item->text();
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
    QSqlQuery  q;
    //删除元素DELETE from table table1 where id=1
    QString charu="delete from  表_操作员 where  账号=";
    QString llkl="\'"+ddname+"\'";
    charu+=llkl;
    qDebug()<<"删除语句:"<<charu;
    if(q.exec(charu))
    {
        QMessageBox::information(this,"提示","删除完成");
         db.close();
       // return ;
    }
    else
    {
        QMessageBox::information(this,"提示","删除失败");
         db.close();
        return ;
    }
    scdata mm;
    int num=ui->caozuorenyuan->count();
    for(int i=0;i<num;i++)
    {
        QListWidgetItem* itdem=ui->caozuorenyuan->takeItem(0);
        delete itdem;
    }
    for(int i=0;i<tALL.caozuoyuan.row;i++)
    {
        ui->caozuorenyuan->addItem(tALL.caozuoyuan.s[i][0]);
    }
    
    
    

}
