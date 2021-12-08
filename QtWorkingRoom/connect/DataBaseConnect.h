#ifndef DATABASECONNECT_H
#define DATABASECONNECT_H
#include<QSqlDatabase>
#include<QSqlQuery>
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
    /// <param name = "Password"> 连接的数据库名  </param>
    //////////////////////////////////////////////////////////////////////////////////////////

    bool Init(QString IP ="127.0.0.1" ,int Port = 8888 ,QString UserName = "",QString Password = "",QString DataBaseName = "");
private:
    /// <summury> 数据库连接句柄 </summury> ///
    QSqlDatabase Db;
    QSqlQuery Sql;
    bool IsConnected;
};

#endif // DATABASECONNECT_H
