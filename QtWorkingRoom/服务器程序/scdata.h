#ifndef SCDATA_H
#define SCDATA_H
#include<QSqlQuery>
#include<QSqlRecord>
#include<QSqlDatabase>
#include<QStringList>
#include<QString>
#include<QCoreApplication>
#include<QDebug>
#include"server.h"


typedef struct
{
    int row_client;
    QString Data_DTU[MAXVISIT][2];
}DATA_ACCESS;
typedef struct
{
    int numDTU;
    QString Data_DTU[MAXVISIT][3];
}DATA_DTU;

class scData
{
public:
    scData();
    int  init();
    void  read();
    void readDTU();
    QSqlDatabase db;
};
#endif // SCDATA_H


