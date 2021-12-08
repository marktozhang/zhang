#ifndef ADD_DEVICE_H
#define ADD_DEVICE_H

#include <QWidget>

namespace Ui {
class ADD_device;
}

class ADD_device : public QWidget
{
    Q_OBJECT

public:
    explicit ADD_device(QWidget *parent = 0);
    ~ADD_device();

private:
    Ui::ADD_device *ui;

public  slots:
    void showthis();

    void button64sf();
    void qsin(int );
    void xxx(QString ,QString ,QString ,QString );

    void setQSS(QString );
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();


    void on_hidexiugai_clicked();

    void on_adddddd_clicked();

signals:
    void xiewanl();
    void okadddevice();

    void deee();
    };

#endif // ADD_DEVICE_H
