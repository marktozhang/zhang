#ifndef SCDATA_H
#define SCDATA_H

#include <QObject>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QApplication>
#include<QMessageBox>

typedef  QString**  QSS;

typedef  struct
{
    QSS  s;
    int row;
    int col;
}QSSS;
typedef  struct
{
    QSSS  loucengfeilv;
    QSSS  yonghu;
    QString  initdata;
    QSSS  bumenguanli;

    QSSS  caozuoyuan;

    QSSS  chucundizhi;
    QSSS  danyuanguanli;
    QSSS  jiaofeijilu;

    QSSS  floor;
    QSSS floor_temp;
    QSSS  floornummanage;
    QSSS  deviceinfo;

    QSSS  shoufeibiaozhun;
   QSSS  tineibianhao;
   QSSS  client;
   QSSS  zhiwu;

}TABLEALL;


class scdata : public QObject
{
    Q_OBJECT
public:
    explicit scdata(QObject *parent = 0);

    void readData();
    void searcht(QSqlQuery  &sd, QString name);
    void  numrow(QSqlQuery  dd,int &row,int &col);
    void readddd(QSSS &hh,int a,int b);


signals:

public slots:

};

#endif // SCDATA_H
