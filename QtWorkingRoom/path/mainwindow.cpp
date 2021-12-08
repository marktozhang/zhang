#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QLabel>
#include<QPushButton>
#include<QPainter>
#include<QGridLayout>
#include<QLineEdit>
#include<QCheckBox>
#include<QDebug>
#include"ED.h"
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QDir>
#include<QLineEdit>
#include<QCheckBox>
#include<qdebug.h>
#include <random>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initMAP();
    initUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initUI()
{
    this->setWindowFlags(Qt::FramelessWindowHint);
    int stp=(this->height())/3;
    step=stp-20;
    int num=0;
    int size=20;
    int size1=1.5*size;
    //const QString css= "min-width: 20px; min-height: 20px;max-width:20px; max-height: 20px;border-radius: 10px;  border:1px solid black;background:yellow";
    const QString  bss="background-color:rgb(0,0,0);color:rgb(255,0,0);border-radius:4px";
    //顶点按钮
   for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
           QPushButton *a=new QPushButton(this);
           a->setText(QString::number(num));
            a->setStyleSheet(bss);
           a->setGeometry((j)*step,(i)*step,size1,size1);
            num++;
        }
    }
    QVector<QPoint>  ep;
    int is=0;
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
        {
            if(i!=j&&(i==j-1||j==i-1||i==j-4||j==i-4))
            {
                QPoint tem(i,j);
                QPoint p;
                foreach(p,ep)
                {
                    if((tem.x()==p.x()&&tem.y()==p.y())||(tem.y()==p.x()&&tem.x()==p.y()))
                    {
                        is=1;
                        break;
                    }
                }
                if(is==0)
                {
                    ep.push_back(tem);
                }
                else
                {
                    is=0;
                }

            }
        }
    }
    QPoint  temp;
    int sign=0;
    foreach (temp, ep)
    {
        if((temp.x()+1)%4==0&&temp.x()+1==temp.y())
        {
            ;
        }
        else
        {
            if(temp.x()>temp.y())
            {
                int temx=temp.x();
                temp.setX(temp.y());
                temp.setY(temx);
            }
            G->E[sign]=new EDGE;
            G->E[sign]->is_valid=false;
            ED_widget(ui->widget,temp.x(),temp.y(),step-size1,size1,G->E[sign]);
            sign++;
        }
    }
}

void MainWindow::initMAP()
{
    root=new UCBNODE;
    root->child=nullptr;
    root->father=nullptr;
    root->sims=0;
    isPressFlag=false;
    G=new MAP;
    G->num_edge=24;
    G->num_vertex=16;
    pArray.i=0;
    pArray.j=0;
    pArray.p=new EDGEP*[MAXPATH];
    for(int i=0;i<MAXLENGTHPATH;i++)
    {
        pArray.p[i]=new EDGEP[MAXLENGTHPATH];
    }
    for(int i=0;i<MAXPATH;i++)
    {
        for(int j=0;j<MAXLENGTHPATH;j++)
        {
            pArray.p[i][j]=nullptr;
        }
    }
}

void MainWindow::ucb(int start,int end)
{
    initPath(start);//记录所有路径
    InitKeyTree(start,end);//键树
    UCBNODE* now=root;
    int pro=0;
    while(true)
    {
        //恢复指向点
        now=root;
        now=BestChild(now);//最好孩子
        pro=Simnode(now);
        Backup(pro, now);
        if(root->sims>1000)
        {
            break;
        }
    }
    UCBNODE* child=root->child;
    while(true)
    {
        if(child==nullptr)break;
        float   winpro = (float)child->wins / (float)child->sims;
        float   temucb = winpro + UCTK * sqrt((float)log((float)root->sims) / (float)child->sims);
        qDebug()<<"ucb:"<<temucb;
        qDebug()<<"sims:"<<child->sims;
        qDebug()<<"wins:"<<child->wins;
        qDebug()<<"pt"<<child->Pt;
        qDebug()<<"dis"<<child->pathlength;
        child=child->brother;
    }
}

float MainWindow::RandomNum()
{
    std::random_device rd;
    std::mt19937 mt(rd());
     return (mt()%100)/100.00;
}

UCBNODE* MainWindow::BestChild(UCBNODE *node)
{
   UCBNODE* tem= node->child;
   UCBNODE* bestnode=nullptr;
   float temucb=0;
   float bestucb=-1000;
   if (tem==nullptr)
   {
       return node;
   }
   while (tem!= nullptr)
   {
       if (tem->sims > 0)
       {
           temucb = node->wins+ UCTK * sqrt((float)log((float)tem->father->sims) / (float)tem->sims);
           if (temucb > bestucb)
           {
               bestucb = temucb;
               bestnode = tem;
           }
       }
       else
       {
           bestnode = tem;

           break;
       }
       tem = tem->brother;
   }
   return bestnode;
}

int MainWindow::Simnode(UCBNODE *node)
{
    if(RandomNum()<node->wins)
    {
        return 1;
    }
    return 0;
}

bool  MainWindow::Backup(bool iswin, UCBNODE *node)
{
    UCBNODE *tem=node;
    while(true)
    {
        tem->sims+=1;
        tem->wins+=iswin;
        tem=tem->father;
        if(!tem)
        {
            break;
        }
    }
}

void MainWindow::ED_widget(QWidget *p,int a,int b,int w,int h,EDGE *e)
{
    QWidget  *wid=new QWidget(ui->widget);
    e->pw=wid;
    e->start=a;
    e->end=b;
    wid->setWindowFlags(Qt::FramelessWindowHint);
    QLabel *record=new QLabel(wid);
    record->hide();
    record->setObjectName("record");
    record->setText(QString::number((int)e));
    QLabel *ShowValue[2];
    for(int i=0;i<2;i++)
    {
        ShowValue[i]=new QLabel(wid);
        ShowValue[i]->hide();
    }
    ShowValue[1]->setStyleSheet("color: rgb(255, 0, 0);background-color: rgba(0, 0, 0, 100);font: 14pt ;");
    ShowValue[0]->setObjectName("valueshow");
    ShowValue[1]->setObjectName("arrow");
    QPushButton *cen=new QPushButton(wid);
    cen->setStyleSheet("background-color:rgb(150,0,0);");
    int size=20;
   QLabel *bord[4];
    QPixmap* L[4]={nullptr};
    QString Str[4]={"left.png","right.png","up.png","down.png"};
    for(int i=0;i<4;i++)
    {
        L[i]=new QPixmap(size,size);
        L[i]->load(QDir::currentPath()+"/"+Str[i]);
    }
    for(int i=0;i<4;i++)
    {
        bord[i]=new QLabel(wid);
        bord[i]->setPixmap(*L[i]);
        bord[i]->setScaledContents(true);
        bord[i]->setGeometry(0,0,0,0);
        bord[i]->hide();
    }

    bord[0]->setObjectName("left");
    bord[1]->setObjectName("right");
    bord[2]->setObjectName("up");
    bord[3]->setObjectName("down");
    int x=a%4*(w+h);
    int y=a/4*(w+h);
    if(a==b-4)
    {
        wid->setGeometry(x,y+h,h,w);
        bord[2]->setGeometry(0,0,wid->width(),wid->width());
        bord[3]->setGeometry(0,wid->height()-wid->width(),wid->width(),wid->width());
        ShowValue[1]->setGeometry(wid->width()/3,0,wid->width()/3,wid->height());
        ShowValue[0]->setGeometry(0,wid->height()/2-wid->width()/2,wid->width(),wid->width());
        cen->setGeometry(wid->width()/2-size/2,wid->height()/2-size/2,size,size);
    }
    else if(a==b-1)
    {
        wid->setGeometry(x+h,y,w,h);
        bord[0]->setGeometry(0,0,wid->height(),wid->height());
        bord[1]->setGeometry(wid->width()-wid->height(),0,wid->height(),wid->height());
         ShowValue[1]->setGeometry(0,wid->height()/3,wid->width(),wid->height()/3);
         ShowValue[0]->setGeometry(wid->width()/2-wid->height()/2,0,wid->height(),wid->height());
          cen->setGeometry(wid->width()/2-size/2,wid->height()/2-size/2,size,size);
    }
    connect(cen,&QPushButton::clicked,this,&MainWindow::ED_widget_slot);
}

EDGE* MainWindow::Array_Link(int start, int end)
{
    for(int i=0;i<24;i++)
    {
        if(G->E[i]->start==start&&G->E[i]->end==end)
        {
            return G->E[i];
        }
    }
}

void MainWindow::initPath(int start)
{
    static int sign=0;
    for(int i=0;i<24;i++)
    {
        if(G->E[i]->start==start&&G->E[i]->is_valid==true)
        {
            sign++;
            pArray.p[pArray.i][pArray.j]=G->E[i];
            pArray.j++;
            //入栈
            initPath(G->E[i]->end);
            if(sign>0)
            {
                sign=0;
                pArray.i++;
                pArray.j=0;
            }
        }
    }


}

void MainWindow::InitKeyTree(int start,int end)
{
    UCBNODE *first=nullptr;
    for(int i=0;i<pArray.i;i++)
    {
        int m=0;
        while(pArray.p[i][m])m++;
        if(pArray.p[i][m-1]->end=end)
        {
            UCBNODE* tem=new UCBNODE;
            tem->father=root;
            tem->brother=nullptr;
            tem->child=nullptr;
            tem->sims=0;
            tem->wins=0;
            withPt(pArray.p[i],m-1,tem->pathlength,tem->Pt);
            if(!first)
            {
                root->child=tem;
                first=tem;
            }
            else
            {
                first->brother=tem;
                first=tem;
            }
        }
    }

       /* if(pArray.p[i][0]->start==start)
        {
            int m=0;
            while (pArray.p[i][m])
            {
                m++;
            }
            if(pArray.p[i][m-1]->end==end)
            {
                UCBNODE* tem=new UCBNODE;
                tem->father=root;
                tem->brother=nullptr;
                tem->child=nullptr;
                tem->sims=0;
                withPt(pArray.p[i],m-1,tem->pathlength,tem->Pt);
                if(!first)
                {
                    first=root->child;
                }
                else
                {
                    first->brother=tem;
                    first=tem;
                }
            }
        }
    }*/
}

void  MainWindow::withPt(EDGEP *p, int end,int &distance,float  &P)
{
     float Pp,Pc,Pa,Pt,Sumdis;
    float **a=new float*[2];
    for(int i=0;i<2;i++)
    {
        a[i]=new float[end+1];
    }
    for(int i=0;i<end+1;i++)
    {
        a[0][i]=p[i]->distance;
        float PA;//道路情况 对堵车概率的函数
        float PB;//车流量情况 对堵车概率的函数
        float PC;//全概率联合概率
        if(p[i]->pathcondition==2)
        {
            PA=0.9;
        }
        else if(p[i]->pathcondition==1)
        {
            PA=0.6;
        }
        else if(p[i]->pathcondition==0)
        {
            PA=0.3;
        }
        if(p[i]->carcondition==0)
        {
            PB=0.9;
        }
        else if(p[i]->carcondition==1)
        {
            PB=0.4;
        }
        else if(p[i]->carcondition==2)
        {
            PB=0.2;
        }
        //PA发生的概略*加PA的占比+PB发生的概略*加PB的占比
        PC=0.7*PA+0.3*PB;
        a[1][i]=PC;
    }
    for(int i=0;i<end+1;i++)
    {
        Sumdis+=a[0][i];
    }
    for(int i=0;i<end+1;i++)
    {
        Pt+=a[0][i]/Sumdis*a[1][i];
    }
    distance=Sumdis;
    P=Pt;
}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    if(isPressFlag)
    {
        QPoint dis=e->globalPos()-InitMouPos;
        this->move(InitWidPos+dis);
    }
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        isPressFlag=true;
        InitWidPos=this->frameGeometry().topLeft();
        InitMouPos= e->globalPos();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        isPressFlag=false;
    }
}

void MainWindow::ED_widget_slot()
{
    QPushButton *btn=qobject_cast<QPushButton* >(sender());
    QWidget *wid=qobject_cast<QWidget*>(btn->parent());
    QLabel* RE=wid->findChild<QLabel*>("record");
   // qDebug()<<RE;
  //  qDebug()<<RE->text();
    EDGE*E=(EDGE*)(RE->text().toInt());
    QLabel*  temlabel[6];//指向边的窗体
    temlabel[0]=wid->findChild<QLabel*>("left");
    temlabel[1]=wid->findChild<QLabel*>("right");
    temlabel[2]=wid->findChild<QLabel*>("up");
    temlabel[3]=wid->findChild<QLabel*>("down");
    temlabel[4]=wid->findChild<QLabel*>("valueshow");
    temlabel[5]=wid->findChild<QLabel*>("arrow");
    for(int i=0;i<6;i++)
    {
        //qDebug()<<temlabel[i];
    }
    QWidget* Parent_Widget=new QWidget;
    QWidget* Child_Widget=new QWidget(Parent_Widget);
    Child_Widget->setWindowFlags(Qt::FramelessWindowHint);
    int wid_width=350;
    Parent_Widget->setGeometry(this->x()+100,this->y()+100,wid_width,wid_width);
    Child_Widget->setGeometry(0,0,wid_width,wid_width);
    if(btn->y()>this->height()*0.7)
    {
        Parent_Widget->setGeometry(btn->x()+this->x(),btn->y()+this->y()-300,wid_width,wid_width);
        Child_Widget->setGeometry(0,0,wid_width,wid_width);
    }
    QGridLayout * ChildWidLay=new QGridLayout(Child_Widget);
    QString strV[10];
    strV[0]=QString::number(E->start);
    strV[1]=QString::number(E->end);
    int sign=0;
    QLabel* TxtShow[5];
    for(int i=0;i<5;i++)
    {
        TxtShow[i]=new QLabel(Child_Widget);
    }
    TxtShow[0]->setText("是否存在");
    TxtShow[1]->setText("起始点");
    TxtShow[2]->setText("道路长度");
    TxtShow[3]->setText("车况");
    TxtShow[4]->setText("路况");
    for(int i=0;i<5;i++)
    {
        ChildWidLay->addWidget(TxtShow[i],i,0);
    }
    //设置权值输入
    QLineEdit *line=new QLineEdit(Child_Widget);
    int randdis=rand()%100+1;
    line->setText(QString::number(randdis));
    ChildWidLay->addWidget(line,2,1);
    //设置单选
    QCheckBox *is[9];
    for(int i=0;i<9;i++)
    {
        is[i]=new QCheckBox(Child_Widget);
    }
    ChildWidLay->addWidget(is[0],0,1);
    ChildWidLay->addWidget(is[1],1,1);
    is[0]->setChecked(true);
    is[1]->setText("顶点"+strV[0]);
     is[1]->setChecked(true);
    ChildWidLay->addWidget(is[2],1,2);
    is[2]->setText("顶点"+strV[1]);

    is[3]->setText("多");
     is[3]->setChecked(true);
    ChildWidLay->addWidget(is[3],3,1);
    is[4]->setText("中");
    ChildWidLay->addWidget(is[4],3,2);
    is[5]->setText("少");
    ChildWidLay->addWidget(is[5],3,3);
     is[6]->setChecked(true);
    is[6]->setText("好");
    ChildWidLay->addWidget(is[6],4,1);
    is[7]->setText("中");
    ChildWidLay->addWidget(is[7],4,2);
    is[8]->setText("坏");
    ChildWidLay->addWidget(is[8],4,3);
    //按钮设置

    QPushButton* b2[2]={new QPushButton(Child_Widget),new QPushButton(Child_Widget)};
    b2[0]->setText("确认");
    b2[1]->setText("取消");
    ChildWidLay->addWidget(b2[0],5,0);
    ChildWidLay->addWidget(b2[1],5,1);
    connect(b2[1],static_cast<void(QPushButton::*)(bool)>(&QPushButton::clicked),[=](bool dd)
    {
        Parent_Widget->hide();
        Child_Widget->hide();
    });
    connect(b2[0],static_cast<void(QPushButton::*)(bool)>(&QPushButton::clicked),[=](bool isclicked)
    {
        //qDebug()<<E->start<<E->end;
        if(is[0]->checkState()==Qt::Checked)
        {
            E->is_valid=true;
            if(is[1]->checkState()==Qt::Checked)
            {
                QString str=is[1]->text();
                QChar temchar[3]={'\0'};
                for(int i=0;i<str.length();i++)
                {
                    if(i>1)
                    {
                        temchar[i-2]=str[i];
                    }
                }
                E->start=QString(temchar).toInt();

                str=is[2]->text();
                QChar temchar2[3]={'\0'};
                for(int i=0;i<str.length();i++)
                {
                    if(i>1)
                    {
                        temchar2[i-2]=str[i];
                    }
                }
                E->end=QString(temchar2).toInt();
            }
            else if(is[2]->checkState()==Qt::Checked)
            {
                QString  str=is[2]->text();
                QChar temchar[3]={'\0'};
                for(int i=0;i<str.length();i++)
                {
                    if(i>1)
                    {
                        temchar[i-2]=str[i];
                    }
                }
                E->start=QString(temchar).toInt();
                str=is[1]->text();
                QChar temchar2[3]={'\0'};
                for(int i=0;i<str.length();i++)
                {
                    if(i>1)
                    {
                        temchar2[i-2]=str[i];
                    }
                }
                E->end=QString(temchar2).toInt();
            }
            E->weight=E->distance=line->text().toInt();
            if(is[3]->checkState()==Qt::Checked)
            {
                E->carcondition=2;
            }
            else if(is[4]->checkState()==Qt::Checked)
            {
                E->carcondition=1;
            }
            else if(is[5]->checkState()==Qt::Checked)
            {
                E->carcondition=0;
            }
            if(is[6]->checkState()==Qt::Checked)
            {
                E->pathcondition=2;
            }
            else if(is[7]->checkState()==Qt::Checked)
            {
                E->pathcondition=1;
            }
            else if(is[8]->checkState()==Qt::Checked)
            {
                E->pathcondition=0;
            }
            //数据写入边，窗体响应
            btn->hide();
            temlabel[4]->setText(QString::number(E->weight));
            temlabel[4]->show();
            temlabel[5]->show();
           // qDebug()<<E->start<<E->end;
            if(E->start==E->end-4)//向下
            {
                temlabel[3]->show();
            }
            else if(E->end==E->start-4)//向上
            {
                temlabel[2]->show();
            }
            else if(E->start==E->end-1)
            {
                temlabel[1]->show();
            }
            else if(E->end==E->start-1)
            {
                temlabel[0]->show();
            }
            Parent_Widget->hide();
        }
        else
        {
            E->is_valid=false;
            btn->hide();
            Parent_Widget->hide();
        }
    });
    QString  QSS_WID="QWidget{border-style:solid;border-color:rgb(200,200,200);border-width:3px;background-color:rgb(255,100,0);}:";
    QString  QSS_QLINEEDIT="QLineEdit{background-color:rgb(255,255,255);}:";
    Parent_Widget->setStyleSheet(QSS_WID+QSS_QLINEEDIT);
    ChildWidLay->setColumnStretch(0,2);
    ChildWidLay->setColumnStretch(1,8);
    Child_Widget->setLayout(ChildWidLay);
    Child_Widget->show();
    Parent_Widget->show();
}

void MainWindow::on_pushButton_clicked()
{
    int start=ui->startV->text().toInt();
    int end=ui->end->text().toInt();
    ucb(start,end);
}
