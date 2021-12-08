#include "MainWindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QMessageBox>
#include<QAxObject>
#include"ExcelEngine.h"
#include<qDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("数据库处理工具");
    ui->LineEdit_IP->setText ( "21.125.249.128");
    ui->StatusBar->addWidget (&(MainWindow::StatusBar_Label));
    QString NowPath = QCoreApplication::applicationDirPath();
    NowPath += "/SQL.xlsx";
    ui->LineEdit_FilePos->setText(NowPath);
    connect(ui->PushButton_ChooseFile,&QPushButton::clicked,this,&MainWindow::on_PushButton_ChooseFile_clicked);
    connect(ui->pushButton_InsertData,&QPushButton::clicked,this,&MainWindow::on_pushButton_InsertData_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QStringList MainWindow::ReadExcel (QString FileName)
{
    QString TFileName = FileName;
    TFileName. replace("/","\\");
    QStringList Result;
    ExcelEngine Engine(TFileName);
    if(!Engine.Open())
    {
        return Result;
    }
    Result. append (Engine.GetCellData(2,7).toString());
    QString DataStr = Engine.GetCellData(3,3).toString();
    int Pos = 3;
    while(true)
    {
        DataStr = Engine.GetCellData(Pos,3).toString();
        if(DataStr.isEmpty())
        {
            break;
        }
        Result.append(Engine.GetCellData(Pos,7).toString());
        Pos++;
    }
    QString TempStr = Engine.GetCellData(Pos,7).toString();
    QStringList TempList = TempStr.split(";");
    for(int i = 0 ; i < TempList.size() ; i++ )
    {
        Result.append(TempList[i]);
    }
    return Result;
}

void MainWindow::on_PushButton_ChooseFile_clicked()
{
    FilePath = QFileDialog::getOpenFileName (this, "选择文件", "./", "文本文件(*.xls ;*.xlsx;*.CSv) ");
    if(FilePath.isEmpty())
    {
        return;
    }
else
    {
        ui->LineEdit_FilePos->clear();
        ui->LineEdit_FilePos->setText(FilePath);
    }
}

void MainWindow::on_pushButton_InsertData_clicked()
{
    QString IPstr =ui->LineEdit_IP->text();
    if(IPstr.isEmpty())
    {
        QMessageBox ::information (this, "提示", "IP地址为空");
        return;
    }
    bool sign = Db.ConnectDDS (IPstr);
    if(sign)
    {
        MainWindow::StatusBar_Label.setText("数据库已连接");
    }
    else
    {
        MainWindow::StatusBar_Label.setText( "数据库连接失败");
    }
    QString FileName = ui->LineEdit_FilePos->text();
    QStringList InsertData = ReadExcel(FileName);
    if ( InsertData.isEmpty())
    {
        QMessageBox::information (this, "提示", "文件信息读取失败");
        return;
    }
    bool OperSign = true;
    for (int i=0 ;i<InsertData.size ()-1;i++)
    {
        InsertData [i].replace ( ";","");
        InsertData[i].replace ( " ' "," \' " );

        OperSign = Db. OperationDDS(InsertData[ i]);
        if( ! OperSign)
        {
            break;
        }
    }
    if (OperSign)
    {
        QMessageBox::information (this, "提示","插入完成");
    }
    else
    {
        QMessageBox::information (this, "提示","插入失败");
    }
}
