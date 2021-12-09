#include "scdata.h"
//数据库类
/*
Table_FreeScale
Table_License
Table_Setup
表_部门管理
表_操作员
表_储存地址
表_单元管理
表_缴费记录
表_楼层
表_楼层——Temp
表_楼号管理
表_设备信息
表_收费标准
表_梯内编号
表_用户
表_职务
*/
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QApplication>
#include<QDebug>

QSqlDatabase  db;
TABLEALL  tALL;//所有表信息的缓存
scdata::scdata(QObject *parent) :
    QObject(parent)
{
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
    readData();
}


void scdata::readData()//楼层的费率
{
    //读取楼层费率  该表有主值编号
    QSqlQuery  q;
    QString ser;
    int row=0;
    int col=0;
    searcht(q,"Table_FeeScale");
    numrow(q,row,col);
    //qDebug()<<"操作员数据"<<row<<"读取的数据"<<col;
    readddd(tALL.loucengfeilv,row,col-1);
    for(int i=0;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            tALL.loucengfeilv.s[i][j-1]=q.value(j).toString();
        }
        q.next();
    }
    //设置的默认时间  该表一个值  该表无主值编号
    q.clear();
    ser="select * from Table_Setup";
    q.exec(ser);//查询后重定位
    q.first();
    tALL.initdata=q.value(0).toString();
  //  qDebug()<<"went"<<tALL.initdata;
    //业主与物业身份2x2 修改
    //该表有id  操作员
    row=0;
    col=0;
    searcht(q,"表_操作员");
    numrow(q,row,col);
   // qDebug()<<"操作员数据"<<row<<"读取的数据"<<col;
    readddd(tALL.caozuoyuan,row,col-1);
    for(int i=0;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            tALL.caozuoyuan.s[i][j-1]=q.value(j).toString();
            //qDebug()<<tALL.caozuoyuan.s[i][j-1];
        }
        q.next();
    }

    //表_储存地址 有id

    row=0;
    col=0;
    searcht(q,"表_存储地址");
    numrow(q,row,col);
    readddd(tALL.chucundizhi,row,col-1);

    for(int i=0;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            tALL.chucundizhi.s[i][j-1]=q.value(j).toString();
        }
        q.next();
    }

    //表_单元管理  有id
    row=0;
    col=0;
    searcht(q,"表_单元管理");
    numrow(q,row,col);
    readddd(tALL.danyuanguanli,row,col-1);
    for(int i=0;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            tALL.danyuanguanli.s[i][j-1]=q.value(j).toString();
        }
        q.next();
    }
    //表缴费记录 无信息
    //表_楼层  有id
    row=0;
    col=0;
    searcht(q,"表_楼层");
    numrow(q,row,col);
    readddd(tALL.floor,row,col-1);
    for(int i=0;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            tALL.floor.s[i][j-1]=q.value(j).toString();
        }
        q.next();
    }

    //有id无具体号  表_楼层——Temp

    row=0;
    col=0;
    searcht(q,"表_楼层_Temp");
    numrow(q,row,col);
    readddd(tALL.floor_temp,row,col-1);
    for(int i=0;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            tALL.floor_temp.s[i][j-1]=q.value(j).toString();
        }
        q.next();
    }

    //表_楼号管理 有id号

    row=0;
    col=0;
    searcht(q,"表_楼号管理");
    numrow(q,row,col);
    readddd(tALL.floornummanage,row,col-1);
    for(int i=0;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            tALL.floornummanage.s[i][j-1]=q.value(j).toString();
        }
        q.next();
    }
    //yyouid表_设备信息
    row=0;
    col=0;
    searcht(q,"表_设备信息");
    numrow(q,row,col);
    readddd(tALL.deviceinfo,row,col-1);
    for(int i=0;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            tALL.deviceinfo.s[i][j-1]=q.value(j).toString();
        }
        q.next();
    }
    //有id 表_收费标准
    row=0;
    col=0;
    searcht(q,"表_收费标准");
    numrow(q,row,col);
    readddd(tALL.shoufeibiaozhun,row,col-1);
    for(int i=0;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            tALL.shoufeibiaozhun.s[i][j-1]=q.value(j).toString();
        }
        q.next();
    }
    //表 体内编号
    //表 用户 youid

    row=0;
    col=0;
    searcht(q,"表_用户");
    numrow(q,row,col);
    readddd(tALL.client,row,col-1);
    for(int i=0;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            tALL.client.s[i][j-1]=q.value(j).toString();
        }
        q.next();
    }
    // 表职务 有id

    row=0;
    col=0;
    searcht(q,"表_职务");
    numrow(q,row,col);
    readddd(tALL.zhiwu,row,col-1);
    for(int i=0;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            tALL.zhiwu.s[i][j-1]=q.value(j).toString();
        }
        q.next();
    }

    db.close();
    //QString dd=QSqlDatabase::databaseName();
}

void scdata::searcht(QSqlQuery  &sd,QString name)
{
    sd.clear();
    QString jk="select * from "+name;
    sd.exec(jk);
    QSqlRecord r=sd.record();
    int  ccc=r.count();
    qDebug()<<"table   "<<name<<"record  "<<ccc;
}

void  scdata::numrow(QSqlQuery  dd,int &row,int &col)
{
    dd.first();
    QSqlRecord r=dd.record();
    int  ccc=r.count();
    col=ccc;

    int unum=0;
    while(dd.next())
    {
       ++unum;
    }
    row=unum+1;
    dd.first();
}

void scdata::readddd(QSSS &hh, int a, int b)
{
    hh.s=new  QString*[a];
    for(int i=0;i<a;i++)
    {
        hh.s[i]=new QString[b];
    }
    hh.row=a;
    hh.col=b;
}

