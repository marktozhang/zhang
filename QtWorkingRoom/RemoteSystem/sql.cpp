#include "sql.h"
#include"scdata.h"
#include<QDebug>
#include<QMessageBox>
extern TABLEALL  tALL;//所有表信息的缓存
sql::sql(QObject *parent) :
    QObject(parent)
{
    ;
}

sql::sql(QString   gg)
{
    si=0;
    ok=0;
    QSqlDatabase db;
    //再次连接数数据库
    if(QSqlDatabase::contains("qt_sql_default_connection"))//查看数据库连接列表包含连接名称
      db = QSqlDatabase::database("qt_sql_default_connection");//静态函数可直接调用
    else
      db=QSqlDatabase::addDatabase("QODBC");//这个函数是设置底层驱动的，参数为要连接的数据库类型
    q=new QSqlQuery(db);
    if(q->exec(gg))
    {
       // QMessageBox::information(NULL,"提示","操作完成");
        q->first();
        ji=q->record();
        scdata ds;
        ok=1;
        db.close();
    }
    else
    {
        ok=0;
        db.close();
       // QMessageBox::information(NULL,"提示","操作失败");
    }
}

sql::sql(QWidget *w, QString gg)
{

    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))//查看数据库连接列表包含连接名称
      db = QSqlDatabase::database("qt_sql_default_connection");//静态函数可直接调用
    else
      db=QSqlDatabase::addDatabase("QODBC");//这个函数是设置底层驱动的，参数为要连接的数据库类型

    q=new QSqlQuery(db);
    QSqlRecord n=q->record();
    int  j=n.count();
    if(q->exec(gg))
    {
        QMessageBox::information(w,"提示","操作完成");
        q->first();
ji=q->record();
        scdata ds;
        db.close();
    }
    else
    {
        db.close();
        QMessageBox::information(w,"提示","操作失败");
    }
}

