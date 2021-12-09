#include "addcaozuorenyuan.h"
#include "ui_addcaozuorenyuan.h"
#include<QMessageBox>
#include"scdata.h"
#include<QDebug>
#include<sql.h>
extern TABLEALL  tALL;//所有表信息的缓存
extern QSqlDatabase  db;
addcaozuorenyuan::addcaozuorenyuan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addcaozuorenyuan)
{
    ui->setupUi(this);
    this->setWindowTitle("添加用户");
    setWindowModality(Qt::ApplicationModal);
}
addcaozuorenyuan::~addcaozuorenyuan()
{
    delete ui;
}

void addcaozuorenyuan::dataoperator(QString sql)
{

    scdata  jk;
}

void addcaozuorenyuan::showthis()
{
    this->show();
}

void addcaozuorenyuan::setQSS(QString arg1)
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

void addcaozuorenyuan::on_pushButton_clicked()
{
    this->hide();
    emit  gengxinrenyuan();
}

void addcaozuorenyuan::on_showpassword_clicked()
{
    if(ui->showpassword->checkState()==Qt::Checked)
    {
        ui->passwordtwo->hide();
        ui->quretxt->hide();
        ui->passwordtxt->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->passwordtxt->setEchoMode(QLineEdit::Password);
        ui->passwordtwo->show();
        ui->quretxt->show();
    }
}

void addcaozuorenyuan::on_pushButton_2_clicked()
{
    QString user=ui->user->text();
    QString password=ui->passwordtxt->text();
    QString Que=ui->quretxt->text();
    if(ui->showpassword->checkState()==Qt::Checked)
    {
        if(!user.length()||!password.length())
        {
            QMessageBox::information(this,"提示","输入不能为空");
            return;
        }
    }
    else
    {
        if(!user.length()||!password.length()||!Que.length())
        {
            QMessageBox::information(this,"提示","输入不能为空");
            return;
        }
        if(password!=Que)
        {
            QMessageBox::information(this,"提示","两次密码不一致");
            return ;
        }
    }
    for(int i=0;i<tALL.caozuoyuan.row;i++)
    {
        if(tALL.caozuoyuan.s[i][0]==user)
        {
            QMessageBox::information(this,"提示","用户名已存在");
            return ;
        }
    }
    updata(tALL.caozuoyuan,user,password);
}

void addcaozuorenyuan::updata(QSSS aaq, QString user, QString password)
{
    QSqlDatabase db;
    QString path=QApplication::applicationDirPath();
    if(QSqlDatabase::contains("qt_sql_default_connection"))//查看数据库连接列表包含连接名称
      db = QSqlDatabase::database("qt_sql_default_connection");//静态函数可直接调用
    else
      db=QSqlDatabase::addDatabase("QODBC");//这个函数是设置底层驱动的，参数为要连接的数据库类型
    QString driver="DRIVER={Microsoft Access Driver (*.mdb, *.accdb)}; FIL={MS Access};DBQ=";//设置驱动
    // QString driver=QString("DRIVER={Microsoft Access Driver (*.mdb, *.accdb)};FIL={MS Access};DBQ=%1;").arg(path);
    path+="/data.accdb";
    driver+=path;
    qDebug()<<"数据库路径："<<path;
    db.setDatabaseName(driver);
    db.setHostName("");
    db.setPassword("");
    db.open();
    QSqlQuery  q;
    // INSERT INTO Websites (name, url, alexa, country)
    //VALUES ('百度','https://www.baidu.com/','4','CN');

    user="\'"+user+"\'";
    password="\'"+password+"\'";
    QString quanxina="\'"+QString::number(20)+"\'";
    QString charu="insert into  表_操作员 (账号,密码,权限) values ("+user+","+password+","+quanxina+")";
    qDebug()<<"插入语句"<<charu;

    if(q.exec(charu))
    {
        QMessageBox::information(this,"提示","添加完成");
        db.close();
        scdata  jk;

        return ;
    }
    else
    {
        QMessageBox::information(this,"提示","添加失败");
        db.close();
        return ;
    }
}
