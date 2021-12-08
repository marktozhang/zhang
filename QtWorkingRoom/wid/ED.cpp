#include "ED.h"
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QDir>
#include<QLineEdit>
#include<QCheckBox>
#include<qdebug.h>
ED::ED(QWidget *parent)
{
    ;
}

ED::ED(int a, int b,int w,int h)
{
    this->setWindowFlags(Qt::FramelessWindowHint);
    for(int i=0;i<2;i++)
    {
        ShowValue[i]=new QLabel(this);
        ShowValue[i]->hide();
    }
    ShowValue[1]->setStyleSheet("background-color:rgb(255,255,255);");
    cen=new QPushButton(this);
    QPixmap* L[4]={nullptr};
    QString Str[4]={"left.png","right.png","up.png","down.png"};
    int size=20;
    for(int i=0;i<4;i++)
    {
        L[i]=new QPixmap(size,size);
        L[i]->load(QDir::currentPath()+"/"+Str[i]);
    }
    for(int i=0;i<4;i++)
    {
        bord[i]=new QLabel(this);
        bord[i]->setPixmap(*L[i]);
        bord[i]->setScaledContents(true);
        bord[i]->hide();
    }
    int x=a%4*(w+h);
    int y=a/4*(w+h);
    if(a==b-4)
    {
        bord[2]->setGeometry(0,0,this->width(),this->width());
        bord[3]->setGeometry(0,this->height()-this->width(),this->width(),this->width());
        ShowValue[1]->setGeometry(this->width()/3,0,this->width()/3,this->height());
        ShowValue[0]->setGeometry(0,this->height()/2-this->width()/2,this->width(),this->width());
        cen->setGeometry(this->width(),this->height(),size,size);
        this->setGeometry(x,y+h,h,w);
    }
    else if(a==b-1)
    {
        bord[1]->setGeometry(0,0,this->height(),this->height());
        bord[0]->setGeometry(this->width()-this->height(),0,this->height(),this->height());
        ShowValue[1]->setGeometry(this->height()/3,0,this->width(),this->height()/3);
        ShowValue[0]->setGeometry(0,this->width()/2-this->height()/2,this->height(),this->height());
        cen->setGeometry(this->width(),this->height(),size,size);
        this->setGeometry(x+h,y,w,h);
    }

    this->setStyleSheet("background-color:rgb(255,0,0);");
    connect(cen,&QPushButton::clicked,this,&ED::Btn_slot);
}

void ED::ShowValueFunc()
{

    for(int i=0;i<4;i++)
    {
        bord[i]->hide();
    }
    weight=0;
    ShowValue[0]->hide();
    if(is_valid)
    {
        this->show();
        ShowValue[1]->show();
        if(start==end-4)
        {
            bord[4]->show();
            weight=distance;
            ShowValue[0]->setText(QString::number(weight));
            ShowValue[0]->show();

        }
        else if(end==start-4)
        {
            bord[3]->show();
            weight=distance;
            ShowValue[1]->setText(QString::number(weight));
            ShowValue[0]->show();
        }
        else if(start==end-1)
        {
            bord[1]->show();
            weight=distance;
            ShowValue[1]->setText(QString::number(weight));
            ShowValue[0]->show();
        }
        else if(end==start-1)
        {
            bord[0]->show();
            weight=distance;
            ShowValue[0]->setText(QString::number(weight));
            ShowValue[0]->show();
        }
    }
    else
    {
         this->hide();
    }
}

void ED::Btn_slot()
{
    QWidget* Parent_Widget=new QWidget;
    QWidget* Child_Widget=new QWidget(Parent_Widget);
    Child_Widget->setWindowFlags(Qt::FramelessWindowHint);
    int wid_width=350;
    QPushButton *btn=cen;
    Parent_Widget->setGeometry(btn->x()+this->x(),btn->y()+this->y(),wid_width,wid_width);
    Child_Widget->setGeometry(0,0,wid_width,wid_width);
    if(btn->y()>this->height()*0.7)
    {
        Parent_Widget->setGeometry(btn->x()+this->x(),btn->y()+this->y()-300,wid_width,wid_width);
        Child_Widget->setGeometry(0,0,wid_width,wid_width);
    }
    QGridLayout * ChildWidLay=new QGridLayout(Child_Widget);
    //设置文字选项
    QString strV[10];
    strV[0]=QString::number(start);
    strV[1]=QString::number(end);
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
    is[1]->setText("顶点"+strV[0]);
    ChildWidLay->addWidget(is[2],1,2);
    is[2]->setText("顶点"+strV[1]);

    is[3]->setText("好");
    ChildWidLay->addWidget(is[3],3,1);
    is[4]->setText("中");
    ChildWidLay->addWidget(is[4],3,2);
    is[5]->setText("坏");
    ChildWidLay->addWidget(is[5],3,3);
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
        int pos=btn->text().toInt();
        if(is[0]->checkState()==Qt::Checked)
        {
            is_valid=true;
            if(is[1]->checkState()==Qt::Checked)
            {
                start=is[1]->text().toInt();
                end=is[2]->text().toInt();
            }
            else if(is[2]->checkState()==Qt::Checked)
            {
                start=is[2]->text().toInt();
                end=is[1]->text().toInt();
            }
            distance=line->text().toInt();
            if(is[3]->checkState()==Qt::Checked)
            {
                carcondition=2;
            }
            else if(is[4]->checkState()==Qt::Checked)
            {
                carcondition=1;
            }
            else if(is[5]->checkState()==Qt::Checked)
            {
                carcondition=0;
            }
            if(is[6]->checkState()==Qt::Checked)
            {
                pathcondition=2;
            }
            else if(is[7]->checkState()==Qt::Checked)
            {
                pathcondition=1;
            }
            else if(is[8]->checkState()==Qt::Checked)
            {
                pathcondition=0;
            }
            ShowValueFunc();
        }
        else
        {
            this->hide();
            is_valid=false;
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


