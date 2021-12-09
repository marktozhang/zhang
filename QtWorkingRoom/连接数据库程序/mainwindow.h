#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<QLabel>
#include"DataBaseConnect.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void a();
    ~MainWindow();
    QStringList ReadExcel (QString FileName);
public  slots:
    void on_PushButton_ChooseFile_clicked();
    void on_pushButton_InsertData_clicked();
private:
    Ui::MainWindow *ui;
    QString FilePath;
    QLabel StatusBar_Label;
    DataBaseConnect Db;
};

#endif // MAINWINDOW_H
