#ifndef ESP8266_H
#define ESP8266_H
#define STEP  100
#include <QWidget>

#include"cnnNT.h"
#include<windows.h>
#include<QMouseEvent>

namespace Ui {
class esp8266;
}

class kehu : public QWidget
{
    Q_OBJECT

public:
    explicit kehu(QWidget *parent = 0);
    ~kehu();
    QWidget* testw;
    QString uid;


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void   Firstwindow();
    void on_closewindow_clicked();

    void on_minwindow_clicked();

    void on_addnewdevice_clicked();

    void on_renew_clicked();

//公共槽
public slots:

    void showthis();
    void addresult(int ds);
    void showrenew();
    void recvrq();
    void showlist();

    void setQSS(QString );
private:   
        Ui::esp8266 *ui;
        bool         m_bDrag;
        QPoint      mouseStartPoint;
        QPoint      windowTopLeftPoint;

protected:
        void mousePressEvent(QMouseEvent *event);//窗体事件
        void mouseMoveEvent(QMouseEvent *event);
        void mouseReleaseEvent(QMouseEvent *event);
public slots:
    void show_renew(QString,int ,int );
};

#endif // ESP8266_H
