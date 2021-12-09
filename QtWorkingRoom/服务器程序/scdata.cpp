#include "scdata.h"
DATA_ACCESS  ACdata;
DATA_DTU   DTUdata;
scData::scData()
{
    ACdata.row_client=0;
    DTUdata.numDTU=0;
    init();
}

int scData::init()
{
    QString path=QCoreApplication::applicationDirPath();
    QString filename="/Data.accdb";
    path+=filename;
    db=QSqlDatabase::addDatabase("QODBC");
    QString driver="DRIVER={Microsoft Access Driver (*.mdb, *.accdb)}; FIL={MS Access};DBQ=";//设置驱动
    // QString driver=QString("DRIVER={Microsoft Access Driver (*.mdb, *.accdb)};FIL={MS Access};DBQ=%1;").arg(path);
    driver+=path;
    db.setDatabaseName(driver);
    db.setHostName("");
    db.setPassword("");
    return db.open();
}

void scData::read()
{
    if(init())
    {

         QSqlQuery p;
         QString psearch="select * from users";
         p.exec(psearch);
         QSqlRecord rp=p.record();
         int pcol=rp.count();
         int  prow=0;
         while(p.next())
         {
            ++prow;
         }
         ACdata.row_client=prow;
         p.first();
         for(int i=0;i<prow;i++)
         {
             for(int j=1;j<pcol;j++)
             {
                ACdata.Data_DTU[i][j-1]=p.value(j).toString();
                qDebug()<<ACdata.Data_DTU[i][j];
             }
             p.next();
         }




         p.clear();
         psearch="select * from DTU";
         p.exec(psearch);
         rp=p.record();
         pcol=rp.count();//列数
         prow=0;  //行数
         while(p.next())
         {
            ++prow;
         }
         p.first();
         DTUdata.numDTU=prow;
         for(int i=0;i<prow;i++)
         {
             for(int j=1;j<pcol;j++)
             {
                DTUdata.Data_DTU[i][j-1]=p.value(j).toString();
                qDebug()<<"DTU数据"<<DTUdata.Data_DTU[i][j-1];
             }
             p.next();
         }
    }
    db.close();
    qDebug()<<"db完成";
}




