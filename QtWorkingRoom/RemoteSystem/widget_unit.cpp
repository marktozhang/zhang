#include "widget_unit.h"
#include<QLabel>
#include<QCheckBox>
#include<QHBoxLayout>
#include<QVBoxLayout>
Widget_unit::Widget_unit(QWidget *parent) :
    QWidget(parent)
{

    QVBoxLayout *v1=new QVBoxLayout(this);
    QLabel*  dd=new QLabel(this);
    dd->setText("单元名称");
    QLabel*  das =new QLabel(this);
    das->setText("一单元");
    v1->addWidget(dd);
    v1->addWidget(das);
    this->setLayout(v1);
}
