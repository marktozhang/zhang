#include "widget.h"
#include "ui_widget.h"
#include<stdio.h>
#include<stdlib.h>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    puts("hello");
    exit(0);
}

Widget::~Widget()
{
    delete ui;
}
