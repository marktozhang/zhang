#ifndef DEVICE_DUIYINGDELOUCENG_H
#define DEVICE_DUIYINGDELOUCENG_H

#include <QWidget>

namespace Ui {
class device_duiyingdelouceng;
}

class device_duiyingdelouceng : public QWidget
{
    Q_OBJECT

public:
    explicit device_duiyingdelouceng(QWidget *parent = 0);
    ~device_duiyingdelouceng();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();





    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::device_duiyingdelouceng *ui;

public  slots:
     void  showthis();
     void  recvxiewwan();
     void setQSS(QString );
signals:

     void showtoadd();

     void  xxxggg(QString ,QString ,QString ,QString);//修改
     void wancde();
};

#endif // DEVICE_DUIYINGDELOUCENG_H
