#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<Qtimer>
#include"server.h"
#include<windows.h>
#include<QTimer>
#include"scdata.h"
namespace Ui {
class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    QTimer* timer;//用来定时刷新
    Server * ser;//服务器线程
SOCKET ServerSocket;//监听套接字
    WSADATA wsadata;
    QTimer* s;
signals:
    void To_Remote(QString);
private slots:
    void on_openserver_clicked();
    void on_closeserver_clicked();
    void receive_info(QString str);
    void on_sendinfo_clicked();
};

#endif // MAINWINDOW_H
