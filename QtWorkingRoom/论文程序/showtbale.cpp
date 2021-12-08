#include "showtbale.h"
#include "ui_showtbale.h"

showTbale::showTbale(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::showTbale)
{
    ui->setupUi(this);
}

showTbale::~showTbale()
{
    delete ui;
}
