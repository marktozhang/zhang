#include "xiugaipassword.h"
#include "ui_xiugaipassword.h"

xiugaipassword::xiugaipassword(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xiugaipassword)
{
    ui->setupUi(this);
    this->setWindowTitle("修改密码");
}

xiugaipassword::~xiugaipassword()
{
    delete ui;
}

void xiugaipassword::setQSS(QString  arg1)
{
    if(arg1==QString("墨绿"))
        {
       this->setStyleSheet("\
    QWidget\
    {\
        background-color: rgb(20, 85, 10);\
        color: rgb(255, 255, 255);\
        font: 9pt \"微软雅黑\";\
    }\
    QPushButton:hover\
    {\
    border-style:solid;\
    border-width:2px;\
    background-color: rgb(255, 170, 127);\
    color: rgba(255, 255, 255, 255);\
    }\
    QPushButton:!hover\
    {\
    border-style:solid;\
    border-width:2px;\
    background-color:rgb(0, 85, 0);\
    color: rgba(255, 255, 255, 255);\
    }\
    QTabBar:tab:selected\
    {\
        background-color: rgb(255, 170, 127);\
    }\
    QTabBar:tab:!selected\
    {\
        background-color: rgb(0, 85, 0);\
    }\
    QLineEdit\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget::item\
    {\
        color: rgb(0, 0, 0);\
        border-style:none;\
        border-bottom-style:solid;\
        border-bottom-width:4px;\
        border-bottom-color:rgb(0, 85, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget::item:hover\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(85, 255, 255);\
    }\
    QListWidget::item:!hover\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget::item:selected\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 0, 0);\
    }\
    QComboBox\
    {\
        background-color: rgb(255, 255, 255);\
        color: rgb(0, 0, 0);\
    }\
    QMenuBar\
    {\
        background-color:transparent;\
    }\
    QMenuBar::item\
    {\
        background-color:transparent;\
    }\
    QMenu\
    {\
        background-color: rgba(255, 255, 255,0);\
    }\
    QMenu::item:!selected\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(238, 238, 238);\
        border:none rgb(255, 255, 255);\
        border-bottom:1px solid rgb(204, 204, 204);\
    }\
    QMenu::item:selected\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(170, 255, 255);\
        border:none rgb(255, 255, 255);\
        border-bottom:1px solid rgb(204, 204, 204);\
    }\
    QDateEdit\
    {\
        background-color: rgb(255, 255, 255);\
        color: rgb(0, 0, 0);\
    }\
    QSpinBox\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListView\
    {\
        background-color: rgb(255, 255, 255);\
        color: rgb(0, 0, 0);\
    }");

    }
    else if(arg1==QString("天蓝"))
        {
       this->setStyleSheet("\
    QWidget\
    {\
        background-color: rgb(85, 170, 255);\
        color: rgb(255, 255, 255);\
        font: 9pt \"微软雅黑\";\
    }\
    QPushButton:hover\
    {\
    border-style:solid;\
    border-width:2px;\
    background-color: rgb(60, 160, 255);\
    color: rgba(255, 255, 255, 255);\
    }\
    QPushButton:!hover\
    {\
    border-style:solid;\
    border-width:2px;\
    background-color: rgb(85, 170, 255);\
    color: rgba(255, 255, 255, 255);\
    }\
    QTabBar:tab:selected\
    {\
        background-color: rgb(255, 170, 127);\
    }\
    QTabBar:tab:!selected\
    {\
        background-color: rgb(85, 170, 255);\
    }\
    QLineEdit\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget::item\
    {\
        color: rgb(0, 0, 0);\
        border-style:none;\
        border-bottom-style:solid;\
        border-bottom-width:4px;\
        border-bottom-color:rgb(0, 85, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget::item:hover\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(85, 255, 255);\
    }\
    QListWidget::item:!hover\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListWidget::item:selected\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 0, 0);\
    }\
    QComboBox\
    {\
        background-color: rgb(255, 255, 255);\
        color: rgb(0, 0, 0);\
    }\
    QMenuBar\
    {\
        background-color:transparent;\
    }\
    QMenuBar::item\
    {\
        background-color:transparent;\
    }\
    QMenu\
    {\
        background-color: rgba(255, 255, 255,0);\
    }\
    QMenu::item:!selected\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(238, 238, 238);\
        border:none rgb(255, 255, 255);\
        border-bottom:1px solid rgb(204, 204, 204);\
    }\
    QMenu::item:selected\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(170, 255, 255);\
        border:none rgb(255, 255, 255);\
        border-bottom:1px solid rgb(204, 204, 204);\
    }\
    QDateEdit\
    {\
        background-color: rgb(255, 255, 255);\
        color: rgb(0, 0, 0);\
    }\
    QSpinBox\
    {\
        color: rgb(0, 0, 0);\
        background-color: rgb(255, 255, 255);\
    }\
    QListView\
    {\
        background-color: rgb(255, 255, 255);\
        color: rgb(0, 0, 0);\
    }");

    }

    else if(arg1==QString("粉红"))
    {



        this->setStyleSheet("\
     QWidget\
     {\
        background-color: rgb(255, 187, 226);\
         color: rgb(255, 255, 255);\
         font: 9pt \"微软雅黑\";\
     }\
     QPushButton:hover\
     {\
     border-style:solid;\
     border-width:2px;\
     background-color: rgb(60, 160, 255);\
     color: rgba(255, 255, 255, 255);\
     }\
     QPushButton:!hover\
     {\
     border-style:solid;\
     border-width:2px;\
     background-color: rgb(255, 187, 226);\
     color: rgba(255, 255, 255, 255);\
     }\
     QTabBar:tab:selected\
     {\
         background-color: rgb(255, 170, 127);\
     }\
     QTabBar:tab:!selected\
     {\
         background-color: rgb(255, 187, 226);\
     }\
     QLineEdit\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(255, 255, 255);\
     }\
     QListWidget\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(255, 255, 255);\
     }\
     QListWidget::item\
     {\
         color: rgb(0, 0, 0);\
         border-style:none;\
         border-bottom-style:solid;\
         border-bottom-width:4px;\
         border-bottom-color:rgb(0, 85, 0);\
         background-color: rgb(255, 255, 255);\
     }\
     QListWidget::item:hover\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(85, 255, 255);\
     }\
     QListWidget::item:!hover\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(255, 255, 255);\
     }\
     QListWidget::item:selected\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(255, 0, 0);\
     }\
     QComboBox\
     {\
         background-color: rgb(255, 255, 255);\
         color: rgb(0, 0, 0);\
     }\
     QMenuBar\
     {\
         background-color:transparent;\
     }\
     QMenuBar::item\
     {\
         background-color:transparent;\
     }\
     QMenu\
     {\
         background-color: rgba(255, 255, 255,0);\
     }\
     QMenu::item:!selected\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(238, 238, 238);\
         border:none rgb(255, 255, 255);\
         border-bottom:1px solid rgb(204, 204, 204);\
     }\
     QMenu::item:selected\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(170, 255, 255);\
         border:none rgb(255, 255, 255);\
         border-bottom:1px solid rgb(204, 204, 204);\
     }\
     QDateEdit\
     {\
         background-color: rgb(255, 255, 255);\
         color: rgb(0, 0, 0);\
     }\
     QSpinBox\
     {\
         color: rgb(0, 0, 0);\
         background-color: rgb(255, 255, 255);\
     }\
     QListView\
     {\
         background-color: rgb(255, 255, 255);\
         color: rgb(0, 0, 0);\
     }");

    }

}

void xiugaipassword::showthis()
{
    this->show();
}

void xiugaipassword::on_pushButton_clicked()
{
    this->hide();
}

void xiugaipassword::on_checkBox_clicked()
{
    if(ui->shihide->checkState()==Qt::Checked)
    {
        ui->hide1->hide();
        ui->hide2->hide();
    }
    else
    {
        ui->hide1->show();
        ui->hide2->show();
    }
}


