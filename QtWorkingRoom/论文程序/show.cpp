#include "show.h"
#include "ui_show.h"
int t=20;
#include<QLabel>
showw::showw(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::show)
{
    ui->setupUi(this);
}

showw::~showw()
{
    delete ui;
}

void showw::recv_ss(QString* g,int n)
{
    for()
    {

    }

    t+=20;

}
