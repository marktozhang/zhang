#include "mainwindow.h"
#include <QApplication>
#include<>

void ReadExecl()
{
    QAxObject excel("Excel.Application"); //加载Excel驱动
    excel.setProperty("Visible", false); //不显示Excel界面，如果为true会看到启动的Excel界面
     QAxObject* pWorkBooks = excel.querySubObject("WorkBooks");
    pWorkBooks->dynamicCall("Open (const QString&)", strFile);
      QAxObject* pWorkBook = excel.querySubObject("ActiveWorkBook")

     QAxObject* pWorkSheets = pWorkBook->querySubObject("Sheets");//获取工作表

     int nSheetCount = pWorkSheets->property("Count").toInt();  //获取工作




}




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
