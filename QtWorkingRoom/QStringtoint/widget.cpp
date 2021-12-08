#include "widget.h"
#include "ui_widget.h"
#include<typeinfo>
typedef struct A
{
    int dasd;
}AAA;
#include<QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    AAA  *A=new AAA;
    A->dasd=4845465;
    QString j = typeid(A).name();
    qDebug() << j;
    qDebug()<<A;
    qDebug()<<(void *)A;
    qDebug()<<(int)A;



}

Widget::~Widget()
{
    delete ui;
}
