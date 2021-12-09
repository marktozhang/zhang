#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#pragma execution_character_set("utf-8")
#include <QMainWindow>
#include<QVariant>
#include<QMouseEvent>
#include<stdio.h>
#include<QPushButton>
#include<QPixmap>
#include<QLabel>
#include"ED.h"
#include<QWidget>

#define M 9
#define MAXEDGENUM  24
#define MAXPATH  100//最大路径数
#define MAXLENGTHPATH  100//最大路径长度
#define CARNUMK  0.5 //车数量对堵车情况的影响
#define UCTK  0.78//UCB公式的约束
typedef struct
{
    int  pathcondition;
    int  carcondition;
    int distance;
    int weight;
    int start;
    int end;
    bool is_valid;
    QWidget* pw;
}EDGE;
namespace Ui
{
    class MainWindow;
}
typedef EDGE *      EDGEP;
typedef struct
{
    EDGEP **p;
    int i,j;
}PATHARRAY;



typedef struct A
{
    struct A* father;
    struct A* child;
    struct A* brother;
    int wins;
    int sims;
    int pathlength;
    float    Pt;
    EDGEP* path;
}UCBNODE;

typedef struct
{
    int num_vertex,num_edge;//弧数，顶点数
    EDGE* E[24];
}MAP;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    MAP* G;
    void initUI();
    void initMAP();
    void InitMap(int G);
    void InitNode();
    void SearchPath(int start,int end);
    void ucb(int start,int end);
    float  RandomNum();
private:
    Ui::MainWindow *ui;
    const QString thisss="border:solid;border-color:rgb(255,0,0);border-wdith:8px;";
    int step;
    EDGE* rootEdge;
    UCBNODE *root;
    QPoint InitWidPos;
    QPoint InitMouPos;
    int isPressFlag;
    PATHARRAY pArray;

public:
    void Btn_slot();
    void Btn_slot_setEDGE();
    UCBNODE* BestChild(UCBNODE *node);
  //  void Expand(UCBNODE* node);
    int  Simnode(UCBNODE* node);
    bool Backup(bool iswin,UCBNODE* node);
    QWidget *wid;
     void ED_widget(QWidget *p,int x,int y,int w,int h,EDGE* e);
     void initPath(int start);
     void InitKeyTree(int start,int end);
      EDGE* Array_Link(int start,int end);
     void withPt(EDGEP *p, int end,int &distance,float  &P);//计算联合概率
protected:
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
signals:
public slots:
    void ED_widget_slot();
private slots:
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
