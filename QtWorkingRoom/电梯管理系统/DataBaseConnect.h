#ifndef DATABASECONNECT_H
#define DATABASECONNECT_H
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QVector>

//////////////////////////////////////////////////////////////////////////////////////////
///数据库连接类
///
///
//////////////////////////////////////////////////////////////////////////////////////////

class DataBaseConnect
{
public:
    DataBaseConnect();
    bool ConnectDDS(QString IPStr);
    bool OperationDDS(QString SqlString);
    ~DataBaseConnect();

    //////////////////////////////////////////////////////////////////////////////////////////
    /// <summury> 初始化环境及连接 </summury>
    ///
    /// <param name = "IP"> 目标IP </param>
    ///
    /// <param name = "Port"> 目标端口 </param>
    ///
    /// <param name = "UserName"> 数据库用户登录名 </param>
    ///
    /// <param name = "Password"> 数据库登录密码  </param>
    ///
    /// <param name = "DataBaseName"> 连接的数据库名  </param>
    ///
    /// <param name = "Type"> 连接的数据库的类型 </param>
    //////////////////////////////////////////////////////////////////////////////////////////

    bool Init(QString IP ="127.0.0.1" ,int Port = 8888 ,QString UserName = "",QString Password = "",QString DataBaseName = "",,QString Type = "");

    //////////////////////////////////////////////////////////////////////////////////////////
    /// <summury> 读取一张表里所有信息 </summury>
    ///
    /// <param name = "TableName"> 表名 </param>
    ///
    /// <return> 返回记录每一行数据的容器 </return>
    //////////////////////////////////////////////////////////////////////////////////////////

    QVector<QStringList> ReadTable(QString TableName);

private:
    /// <summury> 数据库连接句柄 </summury> ///
    QSqlDatabase Db;
    /// <summury> 数据库连状态标识 </summury> ///
    bool IsConnected;
};



#endif // DATABASECONNECT_H
