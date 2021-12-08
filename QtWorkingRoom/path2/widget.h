#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#pragma execution_character_set("utf-8")
#include <QMainWindow>
#include<QVariant>
#include<QMouseEvent>
#include<stdio.h>
#include<QPushButton>
#include<QPixmap>
#include<QLabel>
#include"ED.h"
#define M 9
#define MAXEDGENUM  24
#define MAXPATH  100//最大路径数
#define CARNUMK  0.5 //车数量对堵车情况的影响
#define UCTK  0.78//UCB公式的约束
namespace Ui {
class Widget;
}

typedef struct A
{
    struct A* father;
    struct A* child;
    struct A* brother;
    int wins;
    int sims;
    ED* edge;
}UCBNODE;
typedef struct
{
    int num_vertex,num_edge;//弧数，顶点数
    ED* E[24];
}MAP;
class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    MAP* G;
    void initUI();
    void initMAP();
    void InitMap(int G);
    void InitNode();

    void SearchPath(int start,int end);
    void ucb();
private:
    const QString thisss="border:solid;border-color:rgb(255,0,0);border-wdith:8px;";
    int step;

    UCBNODE *root;
    QPoint InitWidPos;
    QPoint InitMouPos;
    int isPressFlag;
public:
    void Btn_slot();
    void Btn_slot_setEDGE();
    UCBNODE* BestChild(UCBNODE *node);
    void Expand(UCBNODE* node);
    int  Simnode(UCBNODE* node);
    bool Backup(bool iswin,UCBNODE* node);
    QWidget *wid;
protected:
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
