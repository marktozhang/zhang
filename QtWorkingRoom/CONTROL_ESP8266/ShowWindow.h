#ifndef WINDOW_MAIN_H
#define WINDOW_MAIN_H

#include <QWidget>
#include<thread_network.h>
#include<QMessageBox>

#include <QHBoxLayout>
namespace Ui {
class window_main;
}

class window_main : public QWidget
{
    Q_OBJECT

public:
    explicit window_main(QWidget *parent = 0);
    ~window_main();
signals:
    void send_changlongin();

private slots:
    void on_pushButton_changlogin_clicked();

    void on_pushButton_refresh_information_clicked();
public slots:

    void recv_showthis();
    void recv_show_listwidget(QString,int);
private:
    //Ui::window_main *ui;
};

#endif // WINDOW_MAIN_H
