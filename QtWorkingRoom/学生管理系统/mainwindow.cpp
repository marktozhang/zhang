#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    treeTable();//初始树形结构
    TableHeader=nullptr;
    TableHeader=new Struct_Table[MAXLENGTH];//表空间初始化
    if(!TableHeader)QMessageBox::information(this,"","内存初始化失败");
    tableWidgetInit();
    theme();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::treeTable()
{
    ui->treeWidget->setColumnCount(1);
    ui->treeWidget->setHeaderLabel("学生信息");
    QTreeWidgetItem* school[3];
    for(int i=0;i<3;i++)
    {
        QString school_name="学校"+QString::number(i+1);
        school[i]=new QTreeWidgetItem(ui->treeWidget,QStringList(school_name));
        for(int j=0;j<3;j++)
        {
            QString class_name="班级"+QString::number(j+1);
            treeTable_node(school[i],class_name);
        }
    }
    ui->treeWidget->expandAll();
    connect(ui->treeWidget,&QTreeWidget::clicked,this,&MainWindow::treeTable_node_slot);
}
//传入节点为其添加子节点
void MainWindow::treeTable_node(QTreeWidgetItem* parent,QString str)
{
    QTreeWidgetItem* child=new QTreeWidgetItem(parent,QStringList(str));
    parent->addChild(child);
}
/*
关键字匹配
*/
void MainWindow::tableWidgetShow()
{
   ui->tableWidget->clearContents();
   QString str=ui->treeWidget->currentItem()->text(0);
   int pos=0;
   int  memory[MAXLENGTH]={0};//记录有关键字的行数
   //对前两列进行匹配
   for(int i=0;i<MAXLENGTH;i++)
   {
       if(str==TableHeader[i].student_school)//学校
       {
           ui->tableWidget->setItem(pos,0,new QTableWidgetItem(TableHeader[i].student_name));
           ui->tableWidget->setItem(pos,1,new QTableWidgetItem(TableHeader[i].student_sex));
           ui->tableWidget->setItem(pos,2,new QTableWidgetItem(TableHeader[i].student_age));
           ui->tableWidget->setItem(pos,3,new QTableWidgetItem(TableHeader[i].student_high));
           ui->tableWidget->setItem(pos,4,new QTableWidgetItem(TableHeader[i].student_weight));
           ui->tableWidget->setItem(pos,5,new QTableWidgetItem(TableHeader[i].student_detail));
           pos++;
       }
       else if(str==TableHeader[i].student_class)//班级
       {
           ui->tableWidget->setItem(pos,0,new QTableWidgetItem(TableHeader[i].student_name));
           ui->tableWidget->setItem(pos,1,new QTableWidgetItem(TableHeader[i].student_sex));
           ui->tableWidget->setItem(pos,2,new QTableWidgetItem(TableHeader[i].student_age));
           ui->tableWidget->setItem(pos,3,new QTableWidgetItem(TableHeader[i].student_high));
           ui->tableWidget->setItem(pos,4,new QTableWidgetItem(TableHeader[i].student_weight));
           ui->tableWidget->setItem(pos,5,new QTableWidgetItem(TableHeader[i].student_detail));
           pos++;
       }
   }
}

void MainWindow::tableWidgetInit()
{
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Interactive);
    QStringList str={"姓名","性别","年龄","身高","体重","描述"};
    ui->tableWidget->setHorizontalHeaderLabels(str);
    ui->tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    menu=new QMenu(ui->tableWidget);
    action[0]=new QAction("刷新界面",this);
    action[1]=new QAction("删除信息",this);
    action[2]=new QAction("保存修改",this);
    action[3]=new QAction("退出查找",this);
    for(int i=0;i<4;i++)
    {
        menu->addAction(action[i]);
    }
    connect(action[0],&QAction::triggered,this,&MainWindow::rightmouse_add);
    connect(action[1],&QAction::triggered,this,&MainWindow::rightmouse_del);
    connect(action[2],&QAction::triggered,this,&MainWindow::rightmouse_revise);
    connect(action[3],&QAction::triggered,this,&MainWindow::rightmouse_renew);
    //排序菜单
    menusort=new QMenu("排序",ui->tableWidget);
    menu->addMenu(menusort);
    actionSort[0]=new QAction("身高升序",this);
    actionSort[1]=new QAction("身高降序",this);
    actionSort[2]=new QAction("体重升序",this);
    actionSort[3]=new QAction("体重降序",this);
    actionSort[4]=new QAction("年龄升序",this);
    actionSort[5]=new QAction("年龄降序",this);
    for(int i=0;i<6;i++)
    {
        menusort->addAction(actionSort[i]);
    }
    connect(actionSort[0],&QAction::triggered,this,[=](){sort(1,3);});
    connect(actionSort[1],&QAction::triggered,this,[=](){sort(-1,3);});
    connect(actionSort[2],&QAction::triggered,this,[=](){sort(1,4);});
    connect(actionSort[3],&QAction::triggered,this,[=](){sort(-1,4);});
    connect(actionSort[4],&QAction::triggered,this,[=](){sort(1,2);});
    connect(actionSort[5],&QAction::triggered,this,[=](){sort(-1,2);});
}

void MainWindow::theme()
{
    this->setStyleSheet("\
                        QWidget\
                        {\
                        background-color: rgb(212, 208, 200);\
                        font:  12pt \"隶书\";\
                        color: rgba(100, 100, 100, 255);\
                        }\
                        QPushButton\
                        {\
                        border-style:outset;\
                        border-width:4px;\
                        border-radius:10px;\
                        border-color:rgba(255,255,255,255);\
                        background-color: rgb(0, 170, 255);\
                        font:  12pt \"隶书\";\
                        color: rgba(255, 255, 255, 255);\
                         }\
                        QPushButton:hover\
                        {\
                        border-style:outset;\
                        border-width:4px;\
                        border-radius:10px;\
                        border-color:rgba(255,255,255,255);\
                        background-color: rgba(0, 170, 255,200);\
                        font:  14pt \"隶书\";\
                        }\
                        QPushButton:pressed\
                        {\
                        border-style:outset;\
                        border-width:4px;\
                        border-radius:10px;\
                        border-color:rgba(255,255,255,255);\
                         background-color:rgb(204 , 228 , 247);\
                        font:  14pt\"隶书\";\
                        color: rgba(255, 255, 255, 255);\
                        }\
                        QLabel\
                        {\
                        font:  11pt \"隶书\";\
                        color: rgba(100, 100, 100, 255);\
                        border-style:solid;\
                        border-color:rgb(32, 255, 39);\
                        border-width:1px;\
                        }\
                        QLineEdit\
                        {\
                        font: 75 12pt \"华文细黑\";\
                        border-top-style: none;\
                        border-bottom-style: solid;\
                        border-bottom-width: 2px;\
                        border-bottom-color: rgb(232, 232, 232);\
                            background-color: rgb(255, 255, 255);\
                        border-left-style: none;\
                        border-right-style: none;\
                        }\
                        QLineEdit:hover\
                        {\
                        border-top-style: none;\
                        border-bottom-style: solid;\
                        border-bottom-width: 2px;\
                        border-bottom-color: rgb(200, 20, 200);\
                            background-color: rgb(255, 255, 255);\
                        border-left-style: none;\
                        border-right-style: none;\
                        }\
                        QTableWidget\
                        { \
                            background-color: rgb(255, 255, 255);\
                        }\
                        QTreeWidget\
                        {\
                            background-color: rgb(255, 255, 255);\
                        }\
                        QMenu::item:!selected\
                        {\
                            color: rgb(0, 0, 0);\
                            background-color: rgb(238, 238, 238);\
                            border:none rgb(255, 255, 255);\
                            border-bottom:1px solid rgb(204, 204, 204);\
                        }\
                        QMenu::item:selected\
                        {	\
                            color: rgb(0, 0, 0);\
                            background-color: rgb(170, 255, 255);\
                            border:none rgb(255, 255, 255);\
                            border-bottom:1px solid rgb(204, 204, 204);\
                        }\
                        ");
}


void MainWindow::treeTable_node_slot()
{
    ui->tableWidget->setRowCount(MAXLENGTH);

    tableWidgetShow();
}

void MainWindow::rightmouse_add()
{
    //update();
    tableWidgetShow();
}

void MainWindow::rightmouse_del()
{
    int num=ui->tableWidget->currentRow();


    //记录当前行并在界面清除当前行
    QString pp[6];
    for(int i=0;i<6;i++)
    {
        if(ui->tableWidget->item(num,i)!=nullptr)
        {
            pp[i]=ui->tableWidget->item(num,i)->text();
            ui->tableWidget->item(num,i)->setText("");
        }
    }

    //删除对应信息的索引
    for(int i=0;i<MAXLENGTH;i++)
    {
        if(TableHeader[i].student_name==pp[0]&&TableHeader[i].student_sex==pp[1]&&TableHeader[i].student_age==pp[2]&&\
                TableHeader[i].student_high==pp[3]&&TableHeader[i].student_weight==pp[4]&&TableHeader[i].student_detail==pp[5])
        {
             TableHeader[i].student_class="";
             TableHeader[i].student_school="";
        }
    }
    //更新界面
    tableWidgetShow();


      /*  for(int i=0;i<5;i++)
        {
           qDebug()<<TableHeader[i].student_school<<" "<<TableHeader[i].student_class<<" "<<TableHeader[i].student_name;
        }*/
}

void MainWindow::rightmouse_revise()
{
    update();
    tableWidgetShow();
}

void MainWindow::rightmouse_renew()
{
    if(ui->tableWidget->rowCount()==0)//行数检查
    {
        QMessageBox::information(this,"","无具体信息");
        return;
    }
    for(int i=0;i<MAXLENGTH;i++)
    {
        ui->tableWidget->setRowHidden(i,false);
    }
    tableWidgetShow();
}

void MainWindow::rightmouse_search()
{
    if(ui->tableWidget->rowCount()==0)//行数检查
    {
        QMessageBox::information(this,"","无具体信息");
        return;
    }
    QString information[5];
    information[0]=ui->name->text();
    information[1]=ui->sex->text();
    information[2]=ui->age->text();
    information[3]=ui->high->text();
    information[4]=ui->weight->text();
    int no[MAXLENGTH]={0};//记录无关键字的行数
    int num=0;//无关键字的行
    int is=0;
    for(int i=0;i<MAXLENGTH;i++)
    {
        is=0;
        for(int j=0;j<5;j++)
        {
                if(ui->tableWidget->item(i,j)!=nullptr)
                {
                    if(information[j]==ui->tableWidget->item(i,j)->text()&&ui->tableWidget->item(i,j)->text().length()!=0)
                    {
                        is=1;
                        break;
                    }
                }
        }
        if(is==0)
        {
            no[num]=i;
            num++;
        }
    }
    for(int i=0;i<num;i++)
    {
        ui->tableWidget->setRowHidden(no[i],true);
    }
}

void MainWindow::sort(int a, int b)
{
    int num=0;
    if(a==1)//升序
    {
        //
        for(int i=0;i<MAXLENGTH;i++)
        {
            if(ui->tableWidget->item(i,b)!=nullptr)
            {
                if(ui->tableWidget->item(i,b)->text().length()==0)
                {
                    break;
                }
                num++;
            }
        }

        int **tem=new int*[2];
        for(int i=0;i<2;i++)
        {
            tem[i]=new int[num];
        }
        //记录数据与行号
        for(int i=0;i<num;i++)
        {
            if(ui->tableWidget->item(i,b)!=nullptr)
            {
                tem[0][i]=ui->tableWidget->item(i,b)->text().toInt();
                tem[1][i]=i;
            }
        }

        //排序

        for(int i=0;i<num;i++)
        {
           for(int j=0;j<num-1;j++)
           {
               if(tem[0][j]>tem[0][j+1])
               {
                   int a,b;
                   a=tem[0][j];
                   b=tem[1][j];
                   tem[0][j]=tem[0][j+1];
                   tem[0][j+1]=a;

                   tem[1][j]=tem[1][j+1];
                   tem[1][j+1]=b;
               }
           }
        }
        QString  temTable[num][6];
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<6;j++)
            {
                if(ui->tableWidget->item(i,j)!=nullptr)
                {
                    temTable[i][j]=ui->tableWidget->item(tem[1][i],j)->text();
                }
            }
        }
        ui->tableWidget->clearContents();
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<6;j++)
            {
                ui->tableWidget->setItem(i,j,new QTableWidgetItem(temTable[i][j]));
            }
        }
    }
    if(a==-1)//降序序
    {
        for(int i=0;i<MAXLENGTH;i++)
        {
            if(ui->tableWidget->item(i,b)!=nullptr)
            {
                if(ui->tableWidget->item(i,b)->text().length()==0)
                {
                    break;
                }
                num++;
            }
        }

        int **tem=new int*[2];
        for(int i=0;i<2;i++)
        {
            tem[i]=new int[num];
        }
        //记录数据与行号
        for(int i=0;i<num;i++)
        {
            if(ui->tableWidget->item(i,b)!=nullptr)
            {
                tem[0][i]=ui->tableWidget->item(i,b)->text().toInt();
                tem[1][i]=i;
            }
        }

        //排序
        for(int i=0;i<num;i++)
        {
           for(int j=0;j<num-1;j++)
           {
               if(tem[0][j]<tem[0][j+1])
               {
                   int a,b;
                   a=tem[0][j];
                   b=tem[1][j];
                   tem[0][j]=tem[0][j+1];
                   tem[0][j+1]=a;

                   tem[1][j]=tem[1][j+1];
                   tem[1][j+1]=b;
               }
           }
        }
        QString  temTable[num][6];
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<6;j++)
            {
                if(ui->tableWidget->item(i,j)!=nullptr)
                {
                    temTable[i][j]=ui->tableWidget->item(tem[1][i],j)->text();
                }
            }
        }
        ui->tableWidget->clearContents();
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<6;j++)
            {
                ui->tableWidget->setItem(i,j,new QTableWidgetItem(temTable[i][j]));
            }
        }
    }


}

void MainWindow::update()
{
    int size=0;//记录有效信息行数
    int m[MAXLENGTH]={0};//记录有效信息行号
    int ALL=0;//记录当有效信息数
    int sign=0;//记录是否有不完整信息
    //检验当前临时信息
    for(int i=0;i<MAXLENGTH;i++)
    {
        ALL=0;
        //当前行是否存在信息
        for(int j=0;j<6;j++)
        {
            if(ui->tableWidget->item(i,j)!=nullptr)
            {
                if(ui->tableWidget->item(i,j)->text().length()!=0)
                {
                    ALL++;
                }
            }
            if(j==6)
            {
                //item(i,j）每次都要检查是否超过120字
                if(ui->tableWidget->item(i,5)!=nullptr)
                {
                    if(ui->tableWidget->item(i,5)->text().length()>120)
                    {
                        QMessageBox::information(this,"","描述不可超过240字");
                        return ;
                    }
                }
            }
        }
        if(ALL<6&&ALL>0)
        {
            //有且不完整
            sign=1;
            size++;
        }
        else if(ALL==6)
        {
            size++;
            m[i]=1;
        }

    }
    //对不完整信息的提示
    if(sign)
    {
        /*QMessageBox:: StandardButton result= QMessageBox::information(NULL, "提示", "存在不完整信息，无法录入",QMessageBox::Yes|QMessageBox::No);
        switch (result)
        {
            case QMessageBox::Yes:
                break;
            case QMessageBox::No:
                return ;
        }*/
        QMessageBox::information(this,"","存在不完整信息，无法录入");
        return;
    }
    //无有效信息
    if(size==0)
    {
        QMessageBox::information(this,"","无信息");
        return ;
    }
    //【判断信息头】
    QString str=ui->treeWidget->currentItem()->text(0);

    QTreeWidgetItem *now=ui->treeWidget->currentItem();
    //校级节附加所有子节点保存
   /* qDebug()<<"now"<<now;
    qDebug()<<"now"<<now->text(0);
    qDebug()<<"子"<<now->child(0);
    qDebug()<<"父"<<now->parent();*/


    if(now->child(0)!=nullptr)//父节点无法确定信息
    {
        QMessageBox::information(this,"","请选择具体班级,无法保存无效信息");
        return;
    }
    QString pstr=now->parent()->text(0);
    QString endTable[size][6];
    int pos=0;
    for(int i=0;i<MAXLENGTH;i++)
    {
        //之前的旧信息索引头（两个）删除
        if(TableHeader[i].student_class==str&&TableHeader[i].student_school==pstr)
        {
           TableHeader[i].student_class="";
           TableHeader[i].student_school="";
        }
        //记录新信息
        if(m[i])
        {
            for(int j=0;j<6;j++)
            {
                if(ui->tableWidget->item(i,j)!=nullptr)
                {
                    endTable[pos][j]=ui->tableWidget->item(i,j)->text();
                }
            }
            pos++;
        }
    }
    //写入新信息
    int pos1=0;
    for(int i=0;i<MAXLENGTH;i++)
    {
        //寻找空索引头
        if(TableHeader[i].student_school.length()==0)
        {
            TableHeader[i].student_school=pstr;
            TableHeader[i].student_class=str;
            TableHeader[i].student_name=endTable[pos1][0];
            TableHeader[i].student_sex=endTable[pos1][1];
            TableHeader[i].student_age=endTable[pos1][2];
            TableHeader[i].student_high=endTable[pos1][3];
            TableHeader[i].student_weight=endTable[pos1][4];
            TableHeader[i].student_detail=endTable[pos1][5];
            pos1++;
            if(pos1>=pos)
            {
                break;
            }
        }
    }
    QMessageBox::information(this,"","已保存");
/*
    for(int i=0;i<5;i++)
    {
       qDebug()<<TableHeader[i].student_school<<" "<<TableHeader[i].student_class<<" "<<TableHeader[i].student_name;
    }*/
}

void MainWindow::on_tableWidget_customContextMenuRequested(QPoint pos)
{
    menu->exec(QCursor::pos());
}

void MainWindow::on_pushButton_clicked()
{
    rightmouse_search();
}
