#include "mainwindowyui.h"
#include "ui_mainwindowyui.h"
#include"memoryfloor.h"
#include<QDebug>
#include"memoryfloor.h"
#include"widget_device.h"
#include<widget_unit.h>
#include<QListWidget>
#include<QListWidgetItem>
#include"scdata.h"
#include<QDateTime>
#include"sql.h"

extern TABLEALL  tALL;//所有表信息的缓存

QString *keystr;
QCheckBox * loucenglistqcheckboxi64;
MainWindowyui::MainWindowyui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowyui)
{
    ui->setupUi(this);
    ui->two_12->hide();
    ui->endadd_2->hide();
    ui->add_getnum_2->hide();
    this->setWindowTitle("梯控管理系统");
    keystr=new QString[9];
    keystr[0]="卡号";
    keystr[1]="姓名";
    keystr[2]="楼号";
    keystr[3]="单元";
    keystr[4]="房间";
    keystr[5]="部门";
    keystr[6]="电话";
    keystr[7]="卡类型";
    keystr[8]="状态";
    //全局时间
    nonohh=QDateTime::currentDateTime();

    /* memoryfloor *k=new memoryfloor(this);
    connect(k,&memoryfloor::dsajdk,[=]()
    {
        QString dsad;
        int num=0;
        for(int i=0;i<64;i++)
        {
            if(ch[i].isChecked())
            {
                dsad=dsad+QString::number(i)+"层";
                num++;
            }
        }
        dsad+="总计：【"+QString::number(num)+"】层";
        ui->floorisable->setText(dsad);
    });*/
    ui->hezi_zhida->setMaxVisibleItems(8);//设置最大下拉项超过使用滚动条拖动
    for(int  i=0;i<64;i++ )
    {
        ui->hezi_zhida->addItem((QString::number(i+1)+"层"));
    }
    connect(ui->aclogin,&QAction::triggered,[=]()
    {
        emit  actionlgin();
    });

    connect(ui->acdevicemanager,&QAction::triggered,[=]()
    {
        qDebug()<<"action信号";
        emit  actiondevicemanager();
    });

    connect(ui->acunitmanager,&QAction::triggered,[=]()
    {
        emit  actionunitmanager();
    });

    connect(ui->acfloormanagr,&QAction::triggered,[=]()
    {
        emit  actionacfloormanagr();
    });

    connect(ui->acrecnn,&QAction::triggered,[=]()
    {
        emit  actionrecnn();
    });

    connect(ui->acreturn,&QAction::triggered,[=]()
    {
        emit  acretomian();

    });

    connect(ui->acdeivcewithunit,&QAction::triggered,[=]()
    {

        emit  aczhuangzhiyudanyuan();
    });

    connect(ui->actionTuichu,&QAction::triggered,[=]()
    {
        QApplication::exit();
    });

    connect(ui->caozuorenyuanguanli,&QAction::triggered,[=]()
    {

         emit  showcaozuorenyuan();
    });

    connect(ui->xiugaipass,&QAction::triggered,[=]()
    {
         emit  xiugaipassword();
    });

    connect(ui->canshu,&QAction::triggered,[=]()
    {
         emit  showcanshu();
    });

    connect(ui->guanyu,&QAction::triggered,[=]()
    {
         emit  showguanyu();
    });

    connect(ui->user,&QAction::triggered,[=]()
    {
         ui->tabWidget->setCurrentIndex(0);
    });
    connect(ui->set,&QAction::triggered,[=]()
    {
            ui->tabWidget->setCurrentIndex(1);
    });
    connect(ui->guashi,&QAction::triggered,[=]()
    {
            ui->tabWidget->setCurrentIndex(2);
    });




    deviceLITSINIT();
    initmainfloorlist();//主界面初始化
    /*QDateTime  datatime=QDateTime::currentDateTime();
    QString current_date =datatime.toString("yyyy/MM/dd");
    qDebug()<<"系统时间"<<current_date;*/
    ui->currrentdateEdit->setDisplayFormat("yyyy/MM/dd");
    ui->currrentdateEdit->setDateTime(QDateTime::currentDateTime());
/*
   //截止时间
    QString stoptime =ui->dateEdit->text();
    qDebug()<<"截止时间"<<stoptime;
    showlistclient();
    connect();
*/
    //用户列表初始化
    nowcurrentselected_num=0;
    showlistclient();
    // 用户列表的增删操
    connect(ui->listWidget_clientlist,&QListWidget::clicked,[=]()
    {
        nowcurrentselected_num=ui->listWidget_clientlist->currentRow();
        if(nowcurrentselected_num<0)
        {
            return ;
        }
    });

    LISTOPERORINDEX=new int[1000];
}

MainWindowyui::~MainWindowyui()
{
    delete ui;
}

void MainWindowyui::initmaindeviecelist()
{

}

void MainWindowyui::initmainunitlist()
{

}

void MainWindowyui::initmainfloorlist()
{
    QWidget* chaungti=new QWidget[64];
    loucenglistqcheckboxi64=new   QCheckBox[64];
    QLabel *ql=new QLabel[64];
    QHBoxLayout * shuipinghezi=new QHBoxLayout[64];
    QListWidgetItem * ds22jk=new QListWidgetItem[64];
    for(int i=0;i<64;i++)
    {
        chaungti[i].setStyleSheet("#QWidget{background-color:rgb(255,255,255);color:rgb(0,0,0);border-style:none;border-bottom-style:solid;border-bottom-width:4px;border-bottom-color:rgb(0, 85, 0);}");
        ql[i].setText(QString::number(i+1)+"层");
        ql[i].setStyleSheet("QLabel{background-color:rgb(255,255,255);color:rgb(0,0,0);}");

        shuipinghezi[i].addWidget(&loucenglistqcheckboxi64[i]);
        loucenglistqcheckboxi64[i].setText(" ");
        loucenglistqcheckboxi64[i].setStyleSheet("QCheckBox{background-color:rgb(255,255,255);}");
        loucenglistqcheckboxi64[i].resize(20,20);
        shuipinghezi[i].addWidget(&ql[i]);
        shuipinghezi[i].setStretchFactor(&loucenglistqcheckboxi64[i],1);
        shuipinghezi[i].setStretchFactor(&ql[i],10);

        ds22jk[i].setSizeHint(QSize(180,50));
        chaungti[i].setLayout(&shuipinghezi[i]);
        chaungti[i].setParent(ui->quanxuan_floor);

        connect(&loucenglistqcheckboxi64[i],SIGNAL(clicked()),this,SLOT(loucenglistqcheckboxi64chang()));
        ui->quanxuan_floor->addItem(&ds22jk[i]);
        ui->quanxuan_floor->setItemWidget(&ds22jk[i],&chaungti[i]);
    }
}

void MainWindowyui::showlistclient()
{

    int   num=ui->listWidget_clientlist->count();
    int ww=this->width();
    for(int l=0;l<num;l++)
    {
        QListWidgetItem* item=ui->listWidget_clientlist->takeItem(0);
        QWidget* reWW= ui->listWidget_clientlist->itemWidget(item);

        delete reWW;
        delete item;

    }

    QWidget* a;
        QLabel**c;
        QListWidgetItem* d;
        QHBoxLayout* box;


        qDebug()<<"s是数量"<<tALL.client.row;
        for(int e=0;e<tALL.client.row;e++)
        {
                c=new QLabel*[14];
                a=new QWidget(ui->listWidget_clientlist);
                // a->setGeometry(0,0,ww,45);
                d=new QListWidgetItem(ui->listWidget_clientlist);
                box=new QHBoxLayout(a);

                for(int i=0;i<14;i++)
                {
                    c[i]=new QLabel(a);
                    c[i]->setText(tALL.client.s[e][i]);
                    box->addWidget(c[i]);
                  //  c[i]->setGeometry(ww*i/14,0,ww/14,45);
                    box->setStretchFactor(c[i],1);
                    QSizePolicy sizePolicy = c[i]->sizePolicy();
                    sizePolicy.setHorizontalPolicy(QSizePolicy::Ignored);
                    c[i]->setSizePolicy(sizePolicy);

                    if(c[i]->text()==QString("已过期"))
                    {
c[i]->setStyleSheet("QLabel{color: rgb(170, 170, 255);border-bottom-style:solid;border-bottom-width:1px;border-bottom-color:rgb(0,85,0);border-right-style:solid;border-right-width:1px;border-right-color:rgb(0,85,0);}");

                    }
                    else if(c[i]->text()==QString("未发卡"))
                    {
c[i]->setStyleSheet("QLabel{color: rgb(255, 0, 0);border-bottom-style:solid;border-bottom-width:1px;border-bottom-color:rgb(0,85,0);border-right-style:solid;border-right-width:1px;border-right-color:rgb(0,85,0);}");
                    }
                    else if(c[i]->text()==QString("已发卡"))
                    {

c[i]->setStyleSheet("QLabel{color: rgb(0, 255, 0);border-bottom-style:solid;border-bottom-width:1px;border-bottom-color:rgb(0,85,0);border-right-style:solid;border-right-width:1px;border-right-color:rgb(0,85,0);}");
                    }
                    else
                    {
                    c[i]->setStyleSheet("QLabel{color:rgb(0,0,0);border-bottom-style:solid;border-bottom-width:1px;border-bottom-color:rgb(0,85,0);border-right-style:solid;border-right-width:1px;border-right-color:rgb(0,85,0);}");
                    }
                    a->setStyleSheet("QWidget{background-color:rgba(255,255,255,0)}");
                }
                box->setStretchFactor(c[0],1);
                box->setStretchFactor(c[1],3);
                box->setStretchFactor(c[2],2);
                box->setStretchFactor(c[3],2);
                box->setStretchFactor(c[4],1);
                box->setStretchFactor(c[5],2);
                box->setStretchFactor(c[6],1);
                box->setStretchFactor(c[7],3);
                box->setStretchFactor(c[8],3);
                box->setStretchFactor(c[9],1);
                box->setStretchFactor(c[10],3);
                box->setStretchFactor(c[11],4);
                box->setStretchFactor(c[12],4);
                box->setStretchFactor(c[13],4);
                a->setLayout(box);
                d->setSizeHint(QSize(ww,45));
                ui->listWidget_clientlist->addItem(d);
                ui->listWidget_clientlist->setItemWidget(d,a);
        }
}
//主界面的装置列表
void MainWindowyui::deviceLITSINIT()
{
    int cou=ui->listWidget_device->count();
    for(int i=0;i<cou;i++)
    {
        QListWidgetItem *it= ui->listWidget_device->takeItem(0);
        delete it;
    }
    QWidget *dad;
    QHBoxLayout *box;
    QCheckBox  * ch;
    QLabel *asd;
    QListWidgetItem *item;
    int ww=ui->label_149->width();
    for(int j=0;j<tALL.deviceinfo.row;j++)
    {
        dad=new QWidget(ui->listWidget_device);
        dad->setObjectName("widget_deviece");
        ch=new QCheckBox(dad);
        ch->setStyleSheet("QCheckBox::indicator {width: 13px;height: 13px;}");
        asd=new QLabel(dad);
        asd->setText(tALL.deviceinfo.s[j][1]);
        box=new QHBoxLayout(dad);
        box->addWidget(ch);
        box->addWidget(asd);
        dad->setLayout(box);
        dad->setStyleSheet("QWidget{background-color:rgba(255,255,02,0);color:rgb(0,0,0)}");
        item=new QListWidgetItem(ui->listWidget_device);
        item->setSizeHint(QSize(ww,50));
        ui->listWidget_device->addItem(item);
        ui->listWidget_device->setItemWidget(item,dad);
        connect(ch,SIGNAL(clicked(bool)),this,SLOT(chchhhcc(bool)));
    }
}

void MainWindowyui::searchResult(QString* A)
{




}

void MainWindowyui::QSSINIT()
{


}

void MainWindowyui::on_onlyshowuserlist_3_clicked(bool checked)
{
    if(checked)
    {
        showlistclient();
        ui->devicewithunit_3->hide();
        ui->flooreithunit_list->hide();
    }
    else
    {
        showlistclient();
        ui->devicewithunit_3->show();
        ui->flooreithunit_list->show();
    }
}

void MainWindowyui::on_endadd_2_clicked()
{
    ui->endadd_2->hide();
    ui->two_12->hide();
    ui->add_getnum_2->hide();
}

void MainWindowyui::showthis()
{
    this->show();
}

void MainWindowyui::loucenglistqcheckboxi64chang()
{
    QString showfloorinfo;//展示楼层信息
    int num=0;
    for(int i=0;i<64;i++)
    {
        if(loucenglistqcheckboxi64[i].checkState()== Qt::Checked)
        {
            showfloorinfo+=QString::number(i+1)+"层/";
            num++;
        }
    }
    showfloorinfo+="共计：【"+QString::number(num)+"】层";
    ui->yuxuzhidaoluceng->setText(showfloorinfo);
}
//检查所有装置列表的checkbox值
void MainWindowyui::chchhhcc(bool  dd)
{
    ui->abletodevice->setText("");
    QString qq;
    int k=0;
    QList<QWidget*>   bn=ui->listWidget_device->findChildren<QWidget*>("widget_deviece");
  /*  QList<QCheckBox*>   bn1=ui->listWidget_device->findChildren<QCheckBox*>();
    QList<QLabel*>   bn2=ui->listWidget_device->findChildren<QLabel*>();
    qDebug()<<"w孩子数"<<bn.count();
    qDebug()<<"c孩子数"<<bn1.count();
    qDebug()<<"q孩子数"<<bn2.count();
*/
    foreach(QWidget* u,bn)
    {
        //qDebug()<<"cishu"<<k;
        //qDebug()<<"cishu"<<u;
        QList<QCheckBox*>  ch=u->findChildren<QCheckBox*>();
         //qDebug()<<"cishu"<<ch.at(0);
        QList<QLabel*>  ql=u->findChildren<QLabel*>();
        //qDebug()<<"cishu"<<ql.at(0);
        if(ch.at(0)->checkState()==Qt::Checked)
        {
             k++;
             qq+="设备:"+ql.at(0)->text();
        }
    }
    qq+="总计"+QString::number(k)+"套";
    ui->abletodevice->setText(qq);
}

void MainWindowyui::checkddddd()
{
;


}

void MainWindowyui::showclient(QString card, QString name, QString floor , QString unit, QString  room, QString  bumen, QString  telnum, QString  type)
{
    QString charu="insert into  表_用户 (卡号,姓名,楼号,单元,房间,部门,电话,卡类型,状态";

/*
    for(int i=1;i<16;i++)
    {
        charu+=","+QString("设备")+QString::number(i);
    }
    for(int i=1;i<16;i++)
    {
        charu+=","+QString("地址")+QString::number(i)+",";
    }
    //剩余次数
    QString shengyucishu=ui->shengyucishu->text();
    //  起始时间
    QDateTime  datatime=QDateTime::currentDateTime();
    QString current_date =datatime.toString("yyyy/MM/dd");
    qDebug()<<"系统时间"<<current_date;
   //截止时间
    //z直达楼层
    QString  zzzsdd;
    if(ui->zhidaisss->checkState()==Qt::Checked)
    {
          zzzsdd=ui->hezi_zhida->currentText();
    }
    else
    {
        zzzsdd="无直达";
    }

    QString stoptime =ui->dateEdit->text();
    qDebug()<<"截止时间"<<stoptime;
    */

    charu+=QString(") values (\'")+card+"\',\'"+name+"\',\'"+floor+"\',\'"+unit+"\',\'"+room+"\',\'"+bumen+"\',\'"+telnum+"\',\'"+type+"\',\'"+QString("未发卡")+QString("\'")+QString(")");
    qDebug()<<"用户信息插入语句"<<charu;
    sql CR(this,charu);
    showlistclient();
}

void MainWindowyui::dataUpdate(QString* old,QString *fnew)
{
/*
    QString  del="deletee from 表_用户  where  ";
    QString charu="insert into  表_用户 (卡号,姓名,楼号,单元,房间,部门,电话,卡类型,状态";


    for(int i=1;i<16;i++)
    {
        charu+=","+QString("设备")+QString::number(i);
    }
    for(int i=1;i<16;i++)
    {
        charu+=","+QString("地址")+QString::number(i)+",";
    }
    //剩余次数
    QString shengyucishu=ui->shengyucishu->text();
    //  起始时间
    QDateTime  datatime=QDateTime::currentDateTime();
    QString current_date =datatime.toString("yyyy/MM/dd");
    qDebug()<<"系统时间"<<current_date;
   //截止时间
    //z直达楼层
    QString  zzzsdd;
    if(ui->zhidaisss->checkState()==Qt::Checked)
    {
          zzzsdd=ui->hezi_zhida->currentText();
    }
    else
    {
        zzzsdd="无直达";
    }

    QString stoptime =ui->dateEdit->text();
    qDebug()<<"截止时间"<<stoptime;


    charu+=QString(") values (\'")+card+"\',\'"+name+"\',\'"+floor+"\',\'"+unit+"\',\'"+room+"\',\'"+bumen+"\',\'"+telnum+"\',\'"+type+"\',\'"+QString("未发卡")+QString("\'")+QString(")");
    qDebug()<<"用户信息插入语句"<<charu;
    sql CR(this,charu);
    showlistclient();

*/
}


//完成添加
void MainWindowyui::slot_addstr(QString *A)
{
    this->show();
    QString charu="insert into  表_用户 (卡号,姓名,楼号,单元,房间,部门,电话,卡类型,状态) values ("+QString("\'")+A[0]+"\'";
    for(int i=1;i<8;i++)
    {
        charu+=",\'"+A[i]+QString("\'");
    }
    charu+=QString(",\'未发卡\'")+")";
    qDebug()<<"添加语句"<<charu;
    sql cc(this,charu);
    showlistclient();
}



//修改数据的函数
void MainWindowyui::slot_recvchangstr(QString *A)
{

    QList<QListWidgetItem*>   ceshi=ui->listWidget_clientlist->selectedItems();
    int coun=ceshi.count();
    if(!coun)
    {
        QMessageBox::information(this,"提示","请选中具体信息后再修改");
        return;
    }
    int isable=0;
     QString *j123k;
    foreach(QListWidgetItem * u,ceshi)
    {
        QWidget*  mubiao=ui->listWidget_clientlist->itemWidget(u);
        QList<QLabel*>  qll=mubiao->findChildren<QLabel*>();
        if(qll.at(8)->text()==QString("未发卡"))
        {
           j123k=new QString[8];
           for(int i=0;i<8;i++)
           {
                j123k[i]=qll.at(i)->text();
           }
        }
    }
    //先删除zai添加
    QString charu="delete from  表_用户 where ";
    for(int i=0;i<8;i++)
    {
         if(i==7)
        {
            charu+=keystr[i]+"=\'"+j123k[i]+"\'";
        }
         else if(i==0)
         {

    charu+=keystr[i]+"="+j123k[i];
         }
        else
        {
            charu+=keystr[i]+"=\'"+j123k[i]+QString("\' and ");
        }
    }
    qDebug()<<"z之前删除"<<charu;
    sql jk(charu);

    QString addss="insert into 表_用户 (卡号";
    for(int i=1;i<8;i++)
    {
        addss+=","+keystr[i];
    }
    addss+=",状态) values (\'"+A[0]+QString("\'");
    for(int i=1;i<8;i++)
    {
addss+=",\'"+A[i]+"\'";
     }

    addss+=",\'未发卡\')";

        qDebug()<<"修改最终语句"<<addss;
          sql   addssr(this,addss);
         showlistclient();




}


void MainWindowyui::on_add_showadd_2_clicked()
{
    ui->two_12->show();
    ui->endadd_2->show();
    ui->add_getnum_2->show();
}

//全选楼层
void MainWindowyui::on_checkBox_6_clicked(bool checked)
{   
    if(checked)
    {
        QString all;
        for(int i=0;i<64;i++)
        {

            all=all+QString::number(i)+"层/";
            loucenglistqcheckboxi64[i].setChecked(true);
        }
        all+="共计：【64】层";
        ui->yuxuzhidaoluceng->setText(all);
    }
    else
    {
        ui->yuxuzhidaoluceng->setText("");
        for(int i=0;i<64;i++)
        {
            loucenglistqcheckboxi64[i].setChecked(false);
        }
    }
}
//
void MainWindowyui::on_checkBox_6_clicked()
{




}




















void MainWindowyui::on_pushButton_72_clicked()
{
    QApplication::exit();
}

void MainWindowyui::on_pushButton_44_clicked()
{


    this->hide();
    emit showaddnpp();
}

void MainWindowyui::on_pushButton_47_clicked()
{


        nonohh=nonohh.addYears(1);

        ui->currrentdateEdit->setDisplayFormat("yyyy/MM/dd");
        ui->currrentdateEdit->setDateTime(nonohh);
}

void MainWindowyui::on_onlyshowuserlist_3_clicked()
{

}

void MainWindowyui::on_pushButton_48_clicked()
{

    nonohh=nonohh.addYears(1);
   // QString yesr=hh.toString("yyyy/MM/dd");
    ui->currrentdateEdit->setDisplayFormat("yyyy/MM/dd");
    ui->currrentdateEdit->setDateTime(nonohh);

}

void MainWindowyui::on_pushButton_49_clicked()
{

    nonohh=nonohh.addDays(3);
   // QString yesr=hh.toString("yyyy/MM/dd");
    ui->currrentdateEdit->setDisplayFormat("yyyy/MM/dd");
    ui->currrentdateEdit->setDateTime(nonohh);
}

void MainWindowyui::on_oneyeqr_clicked()
{
    nonohh=nonohh.addYears(1);
   // QString yesr=hh.toString("yyyy/MM/dd");
    ui->currrentdateEdit->setDisplayFormat("yyyy/MM/dd");
    ui->currrentdateEdit->setDateTime(nonohh);
}

void MainWindowyui::on_twoyear_clicked()
{
    nonohh=nonohh.addYears(2);
   // QString yesr=hh.toString("yyyy/MM/dd");
    ui->currrentdateEdit->setDisplayFormat("yyyy/MM/dd");
    ui->currrentdateEdit->setDateTime(nonohh);
}

void MainWindowyui::on_pushButton_43_clicked()
{



    showlistclient();
}

void MainWindowyui::on_pushButton_42_clicked()
{
    ui->search_cardid->setText("");
    ui->search_room->setText("");
    ui->search_telnumber->setText("");

    ui->search_num->setText("");
    ui->search_name->setText("");
}
//查找按钮的
void MainWindowyui::on_pushButton_41_clicked()
{
    QString search_num=ui->search_num->text();
    QString search_name=ui->search_name->text();
    QString search_floor=ui->search_floor->currentText();
    QString search_unit=ui->search_unit->currentText();
    QString search_room=ui->search_room->text();
    QString search_cardid=ui->search_cardid->text();
    QString search_bumen=ui->search_bumen->currentText();
    QString search_telnumber=ui->search_telnumber->text();
    QString search_cardtype=ui->search_cardtype->currentText();
    QString search_st  =ui->search_st->currentText();
   /* QString *selectsql=new  QString[10];

   selectsql[0]=search_num;
    selectsql[1]=search_name;
    selectsql[2]=search_floor;
    selectsql[3]=search_unit;
    selectsql[4]=search_room;

    selectsql[5]=search_cardid;
    selectsql[6]=search_bumen;
    selectsql[7]=search_telnumber;
    selectsql[8]=search_cardtype;
    selectsql[9]=search_st;

    searchResult();*/
    QString selectsql="select * from  表_用户  where ";
    int iss=0;
    if(search_num.length())
    {
        selectsql+="卡号="+search_num;
        iss=1;
    }

    if(search_name.length())
    {
        if(iss)
        {
            selectsql+="  and ";
        }
        selectsql+=QString("姓名=")+"\'"+search_name+"\'";
        iss=1;

    }

    if(search_floor.length())
    {
        if(iss)
        {
            selectsql+="  and ";
        }
        selectsql+="楼号=\'"+search_floor+QString("\'");
        iss=1;

    }

    if(search_unit.length())
    {
        if(iss)
        {
            selectsql+="  and ";
        }
        selectsql+="单元=\'"+search_unit+QString("\'");
        iss=1;

    }

    if(search_room.length())
    {
        if(iss)
        {
            selectsql+="  and ";
        }
        selectsql+="房间=\'"+search_room+QString("\'");
        iss=1;

    }

    if(search_bumen.length())
    {
        if(iss)
        {
            selectsql+="  and ";
        }
        selectsql+="部门=\'"+search_bumen+QString("\'");
        iss=1;

    }

    if(search_telnumber.length())
    {
        if(iss)
        {
            selectsql+="  and ";
        }
        selectsql+=QString("电话=\'")+search_telnumber+QString("\'");
        iss=1;

    }

    if(search_cardtype.length())
    {
        if(iss)
        {
            selectsql+="  and ";
        }
        selectsql+="卡类型=\'"+search_cardtype+QString("\'");
        iss=1;

    }
    if(search_st.length())
    {
        if(iss)
        {
            selectsql+="  and ";
        }
        selectsql+="状态=\'"+search_st+QString("\'");
        iss=1;

    }
    qDebug()<<"查找语句"<<selectsql;
    QSqlDatabase db;
    //再次连接数数据库
    if(QSqlDatabase::contains("qt_sql_default_connection"))//查看数据库连接列表包含连接名称
      db = QSqlDatabase::database("qt_sql_default_connection");//静态函数可直接调用
    else
      db=QSqlDatabase::addDatabase("QODBC");//这个函数是设置底层驱动的，参数为要连接的数据库类型
    QSqlQuery* q8787=new QSqlQuery(db);
    if(q8787->exec(selectsql))
    {
        qDebug()<<"查找语句成功";
    }
    q8787->first();

    int   n232um=ui->listWidget_clientlist->count();
     int ww=this->width();
     for(int l=0;l<n232um;l++)
      {
            QListWidgetItem* item=ui->listWidget_clientlist->takeItem(0);
            QWidget* reWW= ui->listWidget_clientlist->itemWidget(item);
            delete reWW;
            delete item;

     }

    QWidget* a;
    QLabel**c;
    QListWidgetItem* d;
    QHBoxLayout* box;
    c=new QLabel*[14];
    a=new QWidget(ui->listWidget_clientlist);
    d=new QListWidgetItem(ui->listWidget_clientlist);
    box=new QHBoxLayout(a);

    for(int i=0;i<14;i++)
    {
        c[i]=new QLabel(a);
        c[i]->setText(q8787->value(i+1).toString());
        box->addWidget(c[i]);
      //  c[i]->setGeometry(ww*i/14,0,ww/14,45);
        box->setStretchFactor(c[i],1);
        QSizePolicy sizePolicy = c[i]->sizePolicy();
        sizePolicy.setHorizontalPolicy(QSizePolicy::Ignored);
        c[i]->setSizePolicy(sizePolicy);

        if(c[i]->text()==QString("已过期"))
        {
c[i]->setStyleSheet("QLabel{color: rgb(170, 170, 255);border-bottom-style:solid;border-bottom-width:1px;border-bottom-color:rgb(0,85,0);border-right-style:solid;border-right-width:1px;border-right-color:rgb(0,85,0);}");

        }
        else if(c[i]->text()==QString("未发卡"))
        {
c[i]->setStyleSheet("QLabel{color: rgb(255, 0, 0);border-bottom-style:solid;border-bottom-width:1px;border-bottom-color:rgb(0,85,0);border-right-style:solid;border-right-width:1px;border-right-color:rgb(0,85,0);}");
        }
        else if(c[i]->text()==QString("已发卡"))
        {

c[i]->setStyleSheet("QLabel{color: rgb(0, 255, 0);border-bottom-style:solid;border-bottom-width:1px;border-bottom-color:rgb(0,85,0);border-right-style:solid;border-right-width:1px;border-right-color:rgb(0,85,0);}");
        }
        else
        {
        c[i]->setStyleSheet("QLabel{color:rgb(0,0,0);border-bottom-style:solid;border-bottom-width:1px;border-bottom-color:rgb(0,85,0);border-right-style:solid;border-right-width:1px;border-right-color:rgb(0,85,0);}");
        }
        a->setStyleSheet("QWidget{background-color:rgba(255,255,255,0)}");
    }
    box->setStretchFactor(c[0],1);
    box->setStretchFactor(c[1],2);
    box->setStretchFactor(c[2],2);
    box->setStretchFactor(c[3],2);
    box->setStretchFactor(c[4],1);
    box->setStretchFactor(c[5],2);
    box->setStretchFactor(c[6],3);
    box->setStretchFactor(c[7],3);
    box->setStretchFactor(c[8],3);
    box->setStretchFactor(c[9],1);
    box->setStretchFactor(c[10],3);
    box->setStretchFactor(c[11],4);
    box->setStretchFactor(c[12],4);
    box->setStretchFactor(c[13],4);
    a->setLayout(box);
    d->setSizeHint(QSize(ww,45));
    ui->listWidget_clientlist->addItem(d);
    ui->listWidget_clientlist->setItemWidget(d,a);
    while(q8787->next())
    {
                    c=new QLabel*[14];
                    a=new QWidget(ui->listWidget_clientlist);
                    d=new QListWidgetItem(ui->listWidget_clientlist);
                    box=new QHBoxLayout(a);

                    for(int i=0;i<14;i++)
                    {
                        c[i]=new QLabel(a);
                        c[i]->setText(q8787->value(i+1).toString());
                        box->addWidget(c[i]);
                      //  c[i]->setGeometry(ww*i/14,0,ww/14,45);
                        box->setStretchFactor(c[i],1);
                        QSizePolicy sizePolicy = c[i]->sizePolicy();
                        sizePolicy.setHorizontalPolicy(QSizePolicy::Ignored);
                        c[i]->setSizePolicy(sizePolicy);

                        if(c[i]->text()==QString("已过期"))
                        {
    c[i]->setStyleSheet("QLabel{color: rgb(170, 170, 255);border-bottom-style:solid;border-bottom-width:1px;border-bottom-color:rgb(0,85,0);border-right-style:solid;border-right-width:1px;border-right-color:rgb(0,85,0);}");

                        }
                        else if(c[i]->text()==QString("未发卡"))
                        {
    c[i]->setStyleSheet("QLabel{color: rgb(255, 0, 0);border-bottom-style:solid;border-bottom-width:1px;border-bottom-color:rgb(0,85,0);border-right-style:solid;border-right-width:1px;border-right-color:rgb(0,85,0);}");
                        }
                        else if(c[i]->text()==QString("已发卡"))
                        {

    c[i]->setStyleSheet("QLabel{color: rgb(0, 255, 0);border-bottom-style:solid;border-bottom-width:1px;border-bottom-color:rgb(0,85,0);border-right-style:solid;border-right-width:1px;border-right-color:rgb(0,85,0);}");
                        }
                        else
                        {
                        c[i]->setStyleSheet("QLabel{color:rgb(0,0,0);border-bottom-style:solid;border-bottom-width:1px;border-bottom-color:rgb(0,85,0);border-right-style:solid;border-right-width:1px;border-right-color:rgb(0,85,0);}");
                        }
                        a->setStyleSheet("QWidget{background-color:rgba(255,255,255,0)}");
                    }
                    box->setStretchFactor(c[0],1);
                    box->setStretchFactor(c[1],2);
                    box->setStretchFactor(c[2],2);
                    box->setStretchFactor(c[3],2);
                    box->setStretchFactor(c[4],1);
                    box->setStretchFactor(c[5],2);
                    box->setStretchFactor(c[6],3);
                    box->setStretchFactor(c[7],3);
                    box->setStretchFactor(c[8],3);
                    box->setStretchFactor(c[9],1);
                    box->setStretchFactor(c[10],3);
                    box->setStretchFactor(c[11],4);
                    box->setStretchFactor(c[12],4);
                    box->setStretchFactor(c[13],4);
                    a->setLayout(box);
                    d->setSizeHint(QSize(ww,45));
                    ui->listWidget_clientlist->addItem(d);
                    ui->listWidget_clientlist->setItemWidget(d,a);
     }
     db.close();



}






void MainWindowyui::on_pushButton_69_clicked()
{
    emit  acretomian();
}

void MainWindowyui::on_pushButton_70_clicked()
{
    emit  actiondevicemanager();
}

void MainWindowyui::on_pushButton_5_clicked()
{

    ;



}
//修改userlist
void MainWindowyui::on_list_xg_clicked()
{
    QList<QListWidgetItem*>   ceshi=ui->listWidget_clientlist->selectedItems();
    int coun=ceshi.count();
    if(!coun)
    {
        QMessageBox::information(this,"提示","请选中具体信息后再修改");
        return;
    }
    int isable=0;
    foreach(QListWidgetItem * u,ceshi)
    {
        QWidget*  mubiao=ui->listWidget_clientlist->itemWidget(u);
        QList<QLabel*>  qll=mubiao->findChildren<QLabel*>();
        foreach (QLabel* dd, qll)
        {
              if(dd->text()==QString("未发卡"))
              {
                  this->hide();
                  emit xiugaishju();
              }
        }
    }
    if(!coun)
    {
        QMessageBox::information(this,"提示","只有未发卡的数据可以被修改");
        return;
    }







}

void MainWindowyui::on_list_del_clicked()
{
    int  count=ui->listWidget_clientlist->count();
    if(!count)
    {
        QMessageBox::information(this, "提示", "空空如也~");
        return;
    }
    QList<QListWidgetItem*>   ceshi=ui->listWidget_clientlist->selectedItems();
    int coun=ceshi.count();
    if(!coun)
    {
        QMessageBox::information(this,"提示","请选中具体信息后再删除");
        return;
    }
    int isable=0;
    foreach(QListWidgetItem * u,ceshi)
    {
        QWidget*  mubiao=ui->listWidget_clientlist->itemWidget(u);
        QList<QLabel*>  qll=mubiao->findChildren<QLabel*>();
        foreach (QLabel* dd, qll)
        {
            //发送要删除的信息
             //emit ;
        }
    }













}

void MainWindowyui::on_list_delall_clicked()
{
    int  count=ui->listWidget_clientlist->count();
    if(!count)
    {
        QMessageBox::information(this, "提示", "空空如也~");
        return;
    }
    int r=QMessageBox::question(this, "提示", "删除全部?", QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
    if(r==QMessageBox::No)
    {
        return;
    }
    int isabledel=0;
    for(int i=0;i<ui->listWidget_clientlist->count();i++)
    {
         QListWidgetItem * item=ui->listWidget_clientlist->item(i);
         QWidget* wdwd=ui->listWidget_clientlist->itemWidget(item);
         QList <QLabel*>   uu=wdwd->findChildren<QLabel*>();
         QString  query="delete from 表_用户 where ";
         for(int j=0;j<9;j++)
         {
             if(uu.at(j)->text()=="已发卡")
             {
                   isabledel=1 ;
                   break;
             }
             if(j==0)
             {
                    query+=keystr[j]+"="+uu.at(j)->text()+" and ";
             }
             else if(j==8)
             {
                    query+=keystr[j]+"="+"\'"+uu.at(j)->text()+"\'";
             }
             else
             {
                    query+=keystr[j]+"="+"\'"+uu.at(j)->text()+"\'"+" and ";
             }

         }
         //query-=QString(",and");
         if(isabledel)
         {
             isabledel=0;
             continue;
         }
         sql qu(query);
          qDebug()<<"删除语句"<<query;

    }

    QMessageBox::information(this,"提示","完成");
    showlistclient();
}

void MainWindowyui::on_comboBox_24_currentTextChanged(const QString &arg1)
{

}

void MainWindowyui::on_ob_add_clicked()
{

    emit showaddnpp();
}

//完成数据的修改  对应修改
void MainWindowyui::on_ob_xiugai_clicked()
{
        QList<QListWidgetItem*>   ceshi=ui->listWidget_clientlist->selectedItems();
        int coun=ceshi.count();
        if(!coun)
        {
            QMessageBox::information(this,"提示","请选中具体信息后再修改");
            return;
        }
        int isable=0;
        foreach(QListWidgetItem * u,ceshi)
        {
            QWidget*  mubiao=ui->listWidget_clientlist->itemWidget(u);
            QList<QLabel*>  qll=mubiao->findChildren<QLabel*>();
            if(qll.at(8)->text()==QString("未发卡"))
            {
               QString *jk=new QString[8];
               for(int i=0;i<8;i++)
               {
                    jk[i]=qll.at(i)->text();
               }
               emit changdatas(jk);
            }
            else
            {
                QMessageBox::information(this,"提示","只有未发卡的数据可以被修改");
                return;
            }
        }

}

void MainWindowyui::on_comboBox_24_activated(const QString &arg1)
{

}

void MainWindowyui::on_main_changbumen_currentIndexChanged(const QString &arg1)
{

}

void MainWindowyui::on_comboBox_currentTextChanged(const QString &arg1)
{




}
//设置主题风格的按钮
void MainWindowyui::on_theme_currentTextChanged(const QString &arg1)
{
    if(arg1==QString("墨绿"))
        {

        emit  themechang(QString("墨绿"));
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

        emit  themechang(QString("天蓝"));
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

emit  themechang(QString("粉红"));

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
     background-color: rgb(200, 160, 255);\
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

/*void MainWindowyui::on_theme_activated(const QString &arg1)
{

}
//向卡写入信息的槽

//检查串口

//信息 写入
*/
/*void MainWindowyui::on_pushButton_52_clicked()
{
    QList<QListWidgetItem*>   list_item=ui->listWidget_clientlist->selectedItems();
    int coun=ceshi.count();
    if(!coun)
    {
        QMessageBox::information(this,"提示","请选中具体信息后");
        return;
    }
    //是否直达
    QString  DirectFLloor;
    if(ui->zhidaisss->checkState()==Qt::Checked)
    {
        ;
    }
    else
    {
        ;
    }











}
*/
