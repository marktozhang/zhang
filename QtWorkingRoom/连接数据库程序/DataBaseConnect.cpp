#include "DataBaseConnect.h"
#include<QSqlQuery>
#include<QDebug>
#include<QMessageBox>

DataBaseConnect::DataBaseConnect ()
{
    IsConnected = false;
}

bool DataBaseConnect::ConnectDDS (QString IPStr)
{
    if(IsConnected)
    {
        return true;
    }
    Db  =    QSqlDatabase::addDatabase ( "QOCI");
    Db. setHostName (IPStr);
    Db. setPort (1521);
    Db. setUserName ( "sDbkor40");
    Db. setPassword ( "jtls" );
    Db.setDatabaseName ( "JTLS");
    Db.open();
    if( !Db. open() )
    {
        return false;
    }
    IsConnected = true;
/*
QSqlQuery query (Db);
query.exec ( "select * from area_of_operations");
while (query.next())
{
qDebug ()<<"读取测试"<<query.value (0).toString ()<<query.value (1).toString ( )<<query.value (2).toString()<<query.value(3).toString ( )<<query.value(4).toString () ;
}*/
    return true;
}

bool DataBaseConnect::OperationDDS (QString OperationSqlString)
{
    QSqlQuery query (Db) ;
    bool sign = query.exec (OperationSqlString);
    return sign;
}

DataBaseConnect::~DataBaseConnect ()
{
    Db.close();
}

bool DataBaseConnect::Init(QString IP, int Port, QString UserName, QString Password, QString DataBaseName)
{
    if(IsConnected)
    {
        return true;
    }
    Db  =    QSqlDatabase::addDatabase ( "QOCI");
/*数据类型类型*/


    Db. setHostName (IP);
    Db. setPort (Port);
    Db. setUserName (UserName);
    Db. setPassword (Password);
    Db.setDatabaseName (DataBaseName);
    Db.open();
    if( ! Db. open() )
    {
        return false;
    }
    IsConnected = true;
    return true;
}
