#include "widget.h"
#include "ui_widget.h"
#include<QLabel>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QLabel *uuu=new QLabel(this);
    uuu->hide();
    uuu->setGeometry();

}

Widget::~Widget()
{
    delete ui;
}
