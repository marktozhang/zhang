#include "widget_device.h"
#include<QLabel>
#include<QCheckBox>
#include<QHBoxLayout>
#include<QVBoxLayout>
Widget_device::Widget_device(QWidget *parent) :
    QWidget(parent)
{
    QVBoxLayout *h=new QVBoxLayout(this);
    QHBoxLayout *v1=new QHBoxLayout(this);
    QHBoxLayout *v2=new QHBoxLayout(this);
    QLabel *dd=new QLabel[5];
    QCheckBox*ds =new QCheckBox(this);
    dd[0].setText("选择");
    dd[1].setText("编码");
    dd[2].setText("电梯名称");
    dd[3].setText("1");
    dd[4].setText("1#电梯");
    v1->addWidget(&dd[0]);
    v1->addWidget(&dd[1]);
    v1->addWidget(&dd[2]);
    v2->addWidget(ds);
    v2->addWidget(&dd[3]);
    v2->addWidget(&dd[4]);
    for(int i=0;i<5;i++)
    {
        dd[i].setParent(this);
    }
    h->addLayout(v1);
    h->addLayout(v2);
    this->setLayout(h);
}
