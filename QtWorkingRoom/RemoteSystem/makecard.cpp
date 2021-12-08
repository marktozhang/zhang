#include "makecard.h"
#include "ui_makecard.h"
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include<QMainWindow>
makecard::makecard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::makecard)
{
    ui->setupUi(this);
    ui->two_11->hide();
    ui->endadd->hide();
    ui->add_getnum->hide();
    this->setWindowTitle("梯控管理系统");
}

makecard::~makecard()
{
    delete ui;
}


void makecard::on_onlyshowuserlist_clicked(bool checked)
{
    if(checked)
    {

        ui->devicewithunit->hide();
        ui->flooreithunit->hide();
    }
    else
    {
        ui->devicewithunit->show();
        ui->flooreithunit->show();


    }
}

void makecard::on_add_showadd_clicked()
{
    ui->two_11->show();
    ui->endadd->show();
    ui->add_getnum->show();
}

void makecard::on_endadd_clicked()
{
    ui->endadd->hide();
    ui->two_11->hide();
    ui->add_getnum->hide();
}

void makecard::showthis()
{
    this->show();
}

void makecard::on_pushButton_34_clicked()
{

}
