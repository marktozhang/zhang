#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QDebug>
#include<iostream>
#include<QLabel>
#include<QBitmap>
#include<QPainter>
#include<QPushButton>
#include<QLineEdit>
#include<QMouseEvent>
#include<QPoint>
#include<QMessageBox>
#include<windows.h>
#include"show.h"
#include<QCoreApplication>
#include<QFile>
#include"showtbale.h"
#include<QTextEdit>
#include <QApplication>
#include<queue>
#include<stack>
#include<iostream>
#include<QTimer>
#define Maxn 100
#define Maxm 10000
#define Max 10000
#define MAV 100
using namespace std;
/*用于spfa的各个队列数值*/
typedef  QLabel*  Plabel;
using namespace std;
typedef struct
{
    int weight;
    int start;
    int end;
}ARC;//边矩阵
typedef struct
{
    int i,j;
    int number;
}VERTEX;//点

typedef struct
{
    VERTEX* vertex;//顶点向量
    ARC** array_arc;//邻接矩阵
    int num_v,num_arc;//弧数，顶点数
    int ** xiaohao;
    float  **gailv;
}MGRAGH;
namespace Ui {
class Widget;

}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);

    ~Widget();
    void Dijkstra(int k,int hfd);
    void Ford(int  dsa,int d);


    int  SPFA();
    QTimer *freshenTime;

public slots:
    void setbutton();

private slots:
    void on_pushButton_init_clicked();

    void on_pushButton_wcxd_clicked();
    void on_pushButton_qz_clicked();

    void on_showquan_clicked();
    void on_pushButton_dksl_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_SPFA_button_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_wcxd_released();

    void on_setM_clicked();

protected:
    void paintEvent(QPaintEvent*event);
signals:
    void send_s();
    void  qita(int);
private:
    Ui::Widget *ui;

    QPixmap pix_up;
    QPixmap pix_down;
    QPixmap pix_right;
    QPixmap pix_left;
    QPushButton *button;


public slots:
    void receive(float** );
};


#endif // WIDGET_H
