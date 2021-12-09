#ifndef SQL_H
#define SQL_H

#include <QObject>
#include<QDebug>
#include<QSqlQuery>
#include<QSqlRecord>
//查询数据库
class sql : public QObject
{
    Q_OBJECT
public:
    explicit sql(QObject *parent = 0);
sql(QString dsa="");
sql(QWidget*  w=NULL,QString dsa="");

QSqlQuery *q;
QSqlRecord  ji;

int si;
int ok;



signals:

public slots:

};

#endif // SQL_H
