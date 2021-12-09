#include "formasd.h"
#include "ui_formasd.h"

Formasd::Formasd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Formasd)
{
    ui->setupUi(this);
    this->setWindowTitle("用户登录");
    //this->setWindowFlags(Qt::FramelessWindowHint);//无边框
}

Formasd::~Formasd()
{
    delete ui;
}

void Formasd::showthis()
{
    this->show();
}

void Formasd::on_pushButton_2_clicked()
{
    emit showmakecard();
    this->hide();
}
