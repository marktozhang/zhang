#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<thread_network.h>
#include<QRegExp>
#include<QRegExpValidator>
#include<QValidator>
#include<QMessageBox>

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
public slots:
    void recv_showthis();
    void recv_netcnn_repaint_isonline(int);
signals:
    void send_show_registwidget();
    void send_show_interface();

private slots:
    void on_regist_clicked();
    void on_login_clicked();

};

#endif // MAINWINDOW_H
