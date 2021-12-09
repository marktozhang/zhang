#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->setupUi(this);
    initMAP();
    initUI();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::initUI()
{
    this->setWindowFlags(Qt::FramelessWindowHint);
    int stp=(this->height())/3;
    step=stp-20;
    int num=0;
    int size=20;
    int size1=1.5*size;
    //const QString css= "min-width: 20px; min-height: 20px;max-width:20px; max-height: 20px;border-radius: 10px;  border:1px solid black;background:yellow";
    const QString  bss="background-color:rgb(0,0,0);color:rgb(255,0,0);border-radius:4px";
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
            ED *a=new ED(this,temp.x(),temp.y(),step-size1,size1);

            G->E[sign]=a;
            sign++;

        }
    }
}


void Widget::initMAP()
{
    root=new UCBNODE;
    root->child=nullptr;
    root->father=nullptr;
    root->sims=0;
    isPressFlag=false;
    G=new MAP;
    G->num_edge=24;
    G->num_vertex=16;
}

void Widget::ucb()
{
    UCBNODE* now=root;
    Expand(now);//初始化节点
    int pro=0;
    while(true)
    {
        //恢复指向点
        now=root;
        now=BestChild(now);//最好孩子
        while(true)
        {
            if (!now->child)
            {
                if (now->sims >= 200)
                {
                    Expand(now);
                    now=BestChild(now);
                }
                Simnode(now);
                Backup(pro, now);
                break;
            }
            else
            {
                now=BestChild(now);
            }
        }
        if(root->sims>10000)
        {
            break;
        }
    }
}



UCBNODE* Widget::BestChild(UCBNODE *node)
{
   UCBNODE* tem= node->child;
   UCBNODE* bestnode=nullptr;
   float winpro=0;//通过率
   float temucb=0;
   float bestucb=-1000;
   if (tem==NULL)
   {
       return node;
   }
   while (tem!= NULL)
   {
       if (tem->sims > 0)
       {
           winpro = (float)tem->wins / (float)tem->sims;
           temucb = winpro + UCTK * sqrt((float)log((float)tem->father->sims) / (float)tem->sims);
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

void Widget::Expand(UCBNODE *node)
{
   UCBNODE *first=nullptr;
   UCBNODE *tmp;
   for(int i=0;i<MAXPATH;i++)
   {
       if(G->E[i]->start=node->edge->start)
       {
           tmp=new UCBNODE;
           tmp->edge=G->E[i];
           tmp->father=node;
           tmp->child=nullptr;
           tmp->sims=0;
           tmp->brother=nullptr;
           if(first)
           {
               first->brother=tmp;
           }
           first=tmp;
       }
   }
}

int Widget::Simnode(UCBNODE *node)
{
    return 1;
}

bool  Widget::Backup(bool iswin, UCBNODE *node)
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


void Widget::mouseMoveEvent(QMouseEvent *e)
{
    if(isPressFlag)
    {
        QPoint dis=e->globalPos()-InitMouPos;
        this->move(InitWidPos+dis);
    }
}

void Widget::mousePressEvent(QMouseEvent *e)
{

    if(e->button()==Qt::LeftButton)
    {
        isPressFlag=true;
        InitWidPos=this->frameGeometry().topLeft();
        InitMouPos= e->globalPos();
    }
}

void Widget::mouseReleaseEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        isPressFlag=false;
    }
}



