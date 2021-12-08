#include "memoryfloor.h"
#include"ui_mainwindowyui.h"
#include<QCheckBox>
#include<QLabel>
#include<QHBoxLayout>
#include<QWidget>
#include<QVBoxLayout>

QCheckBox * ch;
memoryfloor::memoryfloor(QWidget *parent) :
    QWidget(parent)
{
    QVBoxLayout *v=new QVBoxLayout(this);
    QHBoxLayout *h=new QHBoxLayout[65];
    QLabel  a[2];
    a[0].setText("选择");
    a[1].setText("楼层名称");
    h[0].addWidget(&a[0]);
    h[0].addWidget(&a[1]);
    v->addLayout( &h[0]);
    ch=new QCheckBox[64];
    QString c="层";
    ql=new QLabel[64];

    for(int i=0;i<64;i++)
    {
        ch[i].setParent(this);
        connect(&ch[i],SIGNAL(clicked()),this,SLOT(dsad()));
        ql[i].setParent(this);
        ql[i].setText(QString::number(i+1)+c);
        ql[i].setStyleSheet("QLabel{background-color: rgb(255, 255, 255);font: 9px ""微软雅黑"";color: rgb(0, 0, 0);}");
        h[i+1].addWidget(&ch[i]);
        h[i+1].addWidget(&ql[i]);
        v->addLayout(&h[i+1]);
    }
    this->setLayout(v);
}

void memoryfloor::dsad()
{
    emit dsajdk();
}


