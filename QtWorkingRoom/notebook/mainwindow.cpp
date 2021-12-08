#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"ImageDelegate.h"
#include<QApplication>
#include<QDebug>
#define REG_RUN  "HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ConnectData();
    InitTableWidget();
    InitTreeWidget();
    theme();
    TableWidgetShow();
    this->setWindowTitle("苹果笔记本");
    this->setAcceptDrops(true);
    SetMenuBar();
    // SetAutoStartup(true);
    //this->setWindowFlags(Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}

bool MainWindow::ConnectData()
{
    QString path=QCoreApplication::applicationDirPath();
    QString name=path+"/note.accdb";
    if(db.isValid())
    {
        //存在则退出
        //防止重复连接
        return true;
    }
    //添加连接
    //数据库文件必须使用程序所在路径
    db = QSqlDatabase::addDatabase("QODBC");
    QString information ="DRIVER={Microsoft Access Driver (*.mdb, *.accdb)}; FIL={MS Access};DBQ="+name;
    //设置数据库名
    db.setDatabaseName(information);
    //打开数据库连接
    if(db.open())
    {
        //结果集关联数据连接
        q=QSqlQuery(db);
    }
    else
    {
        QMessageBox::information(this,"提示","数据库打开失败");
        return false;
    }
}

void MainWindow::SaveInformation()
{
    //检查是否有效选取
    int NowRow=ui->tableWidget->currentRow();
    QTableWidgetItem *now=ui->tableWidget->item(NowRow,0);
    QString IDnum=ui->tableWidget->item(NowRow,1)->text();
    qDebug()<<IDnum;
    if(!now)
    {
        QMessageBox::information(this,"提示","请选择准确的行来保存");
        return;
    }
    QString nowstr=now->text();
    QPixmap pixmap=now->data(Qt::DisplayRole).value<QPixmap>();
    QString type=ui->treeWidget->currentItem()->text(0);//获取信息类型
    if(nowstr.length()==0&&pixmap.isNull())
    {
        QMessageBox::information(this,"提示","无效操作");
        return;
    }
    else if(nowstr.length()!=0&&pixmap.isNull())
    {
        if(IDnum.length()==0)
        {
            q.prepare("insert into biji (类型,txt) values(?,?)");
            q.addBindValue(type);
            q.addBindValue(nowstr);
            if(q.exec())
            {
                 //QMessageBox::information(this,"提示","保存成功");
            }
            else
            {
                QMessageBox::information(this,"提示","保存失败");
            }
        }
        else
        {
            q.prepare("update biji set txt=? where ID=?");
            q.addBindValue(nowstr);
            q.addBindValue(IDnum);
            if(q.exec())
            {
                 //QMessageBox::information(this,"提示","更新成功");
            }
            else
            {
                QMessageBox::information(this,"提示","更新失败");
            }
        }
     }
    else if(nowstr.length()==0&&!pixmap.isNull())
    {
            if(IDnum.length()==0)
            {
                QByteArray bytedata;
                QBuffer buffer(&bytedata);
                buffer.open(QIODevice::WriteOnly);
                pixmap.save(&buffer,"PNG");
                QVariant  var(bytedata);
                q.prepare("insert into biji (类型,txt,parentID,photo) values (?,?,?,?)");
                q.addBindValue(type);
                q.addBindValue("");
                q.addBindValue("0");
                q.addBindValue(var);
                if(q.exec())
                {
                    // QMessageBox::information(this,"提示","保存成功");
                }
                else
                {
                    QMessageBox::information(this,"提示","保存失败");
                }
            }
            else
            {
                QByteArray bytedata;
                QBuffer buffer(&bytedata);
                buffer.open(QIODevice::WriteOnly);
                pixmap.save(&buffer,"PNG");
                QVariant  var(bytedata);
                q.prepare("update biji set txt=? where ID=?");
                q.addBindValue(var);
                q.addBindValue(IDnum);
                if(q.exec())
                {
                    // QMessageBox::information(this,"提示","更新成功");
                }
                else
                {
                    QMessageBox::information(this,"提示","更新失败");
                }
            }
    }

    TableWidgetShow();

}

void MainWindow::SaveAllInformation()
{
    int  sign;
    QString nowstr;
    QString num;
    QString type;
    for(int i=0;i<MAXLENGTH;i++)
    {
        sign=i;
        //有记录信息-更新
        if(ui->tableWidget->item(sign,1)->text().length()!=0)
        {
            nowstr=ui->tableWidget->item(sign,0)->text();//获取信息
            if(nowstr.length()==0)
            {
                QMessageBox::information(this,"提示","存在无效更新");
                return;
            }
            num=ui->tableWidget->item(sign,1)->text();
            QString end=QString("update biji set txt = \'")+nowstr+"\' where ID = "+num;
            if(q.exec(end))
            {
                QMessageBox::information(this,"提示","更新成功");
            }
            else
            {
                QMessageBox::information(this,"提示","更新失败");
            }
        }
        else if(ui->tableWidget->item(sign,1)->text().length()==0&&ui->tableWidget->item(sign,0)->text().length()!=0)//无记录信息-插入
        {

                type=ui->treeWidget->currentItem()->text(0);//获取信息类型
                QString end=QString("insert into biji (类型,txt) values(\'")+type+"\',\'"+nowstr+"\')";
                qDeBug()<<end;
                if(q.exec(end))
                {
                    QMessageBox::information(this,"提示","插入成功");
                    return;
                }
                else
                {
                    QMessageBox::information(this,"提示","插入失败");
                    return;
                }


        }
    }

}
/* 参数 关键字字符串
 * 功能 查找含关键字数据库信息条的数量
 * 成功 返回条数 至少一条 0-n
 * 失败 返回false 执行失败
*/
int MainWindow::SearchInformation(int type,QString str)
{
    QString strr;
    if(!type)  strr="select * from biji where 类型 like \'%"+str+"%\'";
    else  strr="select * from biji where txt like \'%"+str+"%\'";
    //清理之前信息
    q.clear();
    //执行
    if(!q.exec(strr))
    {
        QMessageBox::information(this,"提示","查找异常");
        return false;
    }
    int num=0;
    while(q.next())
    {
        num++;
    }
    //定位到第一条s
    q.first();
    return num;
}

void MainWindow::DeleteInformation()
{
    //item有效无内容 有效有内容  无效无内容 无效有内容
    //有效选取 无效选取
    int num=ui->tableWidget->currentRow();
    if(num<0)
    {
        QMessageBox::information(this,"提示","无效删除操作");
        return ;
    }

    QTableWidgetItem * item=ui->tableWidget->item(ui->tableWidget->currentRow(),0);
    QPixmap pixmap=item->data(Qt::DisplayRole).value<QPixmap>();
    QString str=item->text();
    QString ID=ui->tableWidget->item(ui->tableWidget->currentRow(),1)->text();
    if(str.length()==0&&pixmap.isNull())
    {
        QMessageBox::information(this,"提示","无效删除操作");
        return ;
    }
    else//有效信息
    {
            QString p="delete from biji where ID="+ID;
            if(q.exec(p))
            {
                 textshow *a=new textshow;
                 QMessageBox::information(this,"提示","删除成功");
            }
            else
            {
                QMessageBox::information(this,"提示","删除失败");
            }   
     }
     TableWidgetShow();
}

QString MainWindow::GetID(QTreeWidgetItem *item)
{
    QTreeWidgetItem *p=item;
    QString tem[500];
    int pos=0;
    while(true)
    {
        if(p->text(0)=="root")
        {
            break;
        }
        tem[pos]=p->text(0);
        pos++;
        p=p->parent();
    }
}
#define REG_RUN  "HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run"
void MainWindow::SetAutoStartup(bool is_auto)
{
    QString applicationName=QApplication::applicationName();
    QString path= QApplication::applicationFilePath();
    qDebug()<<"applicationName"<<applicationName;
    qDebug()<<"path"<<path;
    QSettings *reg=new QSettings(REG_RUN,QSettings::NativeFormat);
    if(is_auto)
    {
        reg->setValue(applicationName,path.replace('/','\\'));
    }
    else
    {
        reg->remove(applicationName);
    }
    delete reg;
}



void MainWindow::AddNode()
{
    QTreeWidgetItem*now =ui->treeWidget->currentItem();
    if(now->text(0)=="新建节点")
    {
        QMessageBox::information(this,"提示","上级不可名为\"新建节点\",\n使上下级同名,请更改上级名后继续操作");
        return;
    }
    QString a,b,c;
    a="select * from NODE where 类型 = \'"+now->text(0)+"\'";
    q.clear();
    if(!q.exec(a))
    {
        QMessageBox::information(this,"提示","添加节点失败1");
        return;
    }
    q.next();
    b=q.value(0).toString();
    c="insert into NODE (类型,parent) values (\'新建节点\',"+b+")";
    if(!q.exec(c))
    {
        QMessageBox::information(this,"提示","添加节点失败2");
        return;
    }
    QTreeWidgetItem* d=new QTreeWidgetItem(now,QStringList("新建节点"));
    now->addChild(d);
}

void MainWindow::DeleteNode()
{
    QTreeWidgetItem*now =ui->treeWidget->currentItem();
    QString a=now->text(0);
    if(a=="root")
    {
       QMessageBox::information(this,"提示","根节点不可删除");
       return;
    }
    QString b="select * from NODE where 类型 = \'"+a+"\'";
    q.clear();
    if(!q.exec(b))
    {
        QMessageBox::information(this,"提示","删除节点失败1");
        return;
    }
    q.next();
    QString c=q.value(0).toString();
    DelTree(c);
    /*
    QString d="delete from NODE where 类型 = \'"+a+"\'";
    if(!q.exec(d))
    {
        QMessageBox::information(this,"提示","删除节点失败4");
    }*/
    delete now;
    TableWidgetShow();
}

void MainWindow::reNameNode()
{

}

void MainWindow::InitTreeWidget()
{
    dcstr="";
    //设置列数
    ui->treeWidget->setColumnCount(1);
    //设置列标头
    ui->treeWidget->setHeaderLabel("笔记分类");
    //设置节点
    //设置根节点
    QTreeWidgetItem* a=new QTreeWidgetItem(ui->treeWidget,QStringList("root"));
    QString str="select * from NODE where  类型 = \'root\'";
    q.clear();
    if(!q.exec(str))
    {
        QMessageBox::information(this,"提示","根节点初始化失败");
        return;
    }
    //定位
    q.next();
    //递归读取
    ReadTree(a,q.value(2).toString());
   // QTreeWidgetItem* b=new QTreeWidgetItem(ui->treeWidget,QStringList("Qt"));
    //QTreeWidgetItem* c=new QTreeWidgetItem(ui->treeWidget,QStringList("ddQt"));
    ui->treeWidget->expandAll();
    //设置右键菜单
    ui->treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    rMenu=new QMenu(ui->treeWidget);
    QAction* edit=new QAction("重命名",this);
    QAction* add=new QAction("增加节点",this);
    QAction* del=new QAction("删除节点",this);
   // rMenu->addAction(edit);
    rMenu->addAction(add);
    rMenu->addAction(del);
    //设置菜单响应函数
    connect(ui->treeWidget,&QTreeWidget::clicked,this,&MainWindow::treeTable_node_slot);
  //  connect(edit,&QAction::triggered,this,&MainWindow::reNameNode);
    connect(add,&QAction::triggered,this,&MainWindow::AddNode);
    connect(del,&QAction::triggered,this,&MainWindow::DeleteNode);
    //节点双击响应函数
    //文本改变之前
    connect(ui->treeWidget,&QTreeWidget::itemDoubleClicked,this,[=](QTreeWidgetItem *item, int column)
    {
        dcstr=item->text(0);
        if(dcstr=="root")
        {
            QMessageBox::information(this,"提示","根节点不可更名");
            return;
        }
        ui->treeWidget->currentItem()->setFlags(ui->treeWidget->currentItem()->flags()|Qt::ItemIsEditable);
        //根节点不可更名
    });
    //节点改名响应
    //文本改变之后
    connect(ui->treeWidget,&QTreeWidget::itemChanged,this,[=](QTreeWidgetItem *item, int column)
    {
        if(dcstr!=item->text(0))
        {
            //完成修改
            //更新树表
            QString aa="update NODE set 类型  = \'"+item->text(0)+"\' where 类型 = \'"+dcstr+"\'";

            if(q.exec(aa))
            {
                QMessageBox::information(this,"提示","已更新");
            }
            else
            {
                QMessageBox::information(this,"提示","更新失败");
            }
            TableWidgetShow();
        }
    });

}

void MainWindow::InitTableWidget()
{
    //设置行数
    ui->tableWidget->setRowCount(MAXLENGTH);
    ui->tableWidget->setColumnCount(2);
    //隐藏信息条编号第二列
    ui->tableWidget->setColumnHidden(1,true);
    //设置标头
    ui->tableWidget->setHorizontalHeaderLabels(QStringList("内容"));
    //设置自适应列宽
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //设置滚动条滚动策略
    ui->tableWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    //初始化item
    for(int i=0;i<MAXLENGTH;i++)
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(""));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(""));
    }
    //设置菜单
    ui->tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    tMenu=new QMenu(ui->tableWidget);
    tSave=new QAction("保存",this);
    tDel=new QAction("删除",this);
    //tSaveAll=new QAction("保存所有",this);
    tMenu->addAction(tSave);
    tMenu->addAction(tDel);
   // tMenu->addAction(tSaveAll);
    connect(ui->tableWidget,&QTableWidget::itemDoubleClicked,this,[=](QTableWidgetItem *item)
    {
        dcstr=item->text();
    });
    connect(ui->tableWidget,&QTableWidget::itemChanged,this,[=](QTableWidgetItem *item)
    {
        if(dcstr!=item->text())
        {
            SaveInformation();
        }
    });
    connect(tSave,&QAction::triggered,this,&MainWindow::right_save);
    connect(tDel,&QAction::triggered,this,&MainWindow::right_del);
   // connect(tSaveAll,&QAction::triggered,this,&MainWindow::right_saveall);
    //第一列设置委托
    textshow* deleagater=new textshow;
    ui->tableWidget->setItemDelegateForColumn(0,deleagater);
}
//treewidget节点响应函数
void MainWindow::treeTable_node_slot()
{
    TableWidgetShow();
}

void MainWindow::right_del()
{
    DeleteInformation();
}

void MainWindow::right_save()
{
    SaveInformation();
}

void MainWindow::right_saveall()
{

}


void MainWindow::theme()
{
        this->setStyleSheet("\
                            QWidget\
                            {\
                            background-color: rgb(212, 208, 200);\
                            font: 75 12pt \"华文细黑\";\
                            color: rgba(100, 100, 100, 255);\
                            }\
                            QPushButton\
                            {\
                            border-style:outset;\
                            border-width:4px;\
                            border-radius:10px;\
                            border-color:rgba(255,255,255,255);\
                            background-color: rgb(0, 170, 255);\
                            font: 75 12pt \"华文细黑\";\
                            color: rgba(255, 255, 255, 255);\
                             }\
                            QPushButton:hover\
                            {\
                            border-style:outset;\
                            border-width:4px;\
                            border-radius:10px;\
                            border-color:rgba(255,255,255,255);\
                            background-color: rgba(0, 170, 255,200);\
                            font: 75 12pt \"华文细黑\";\
                            }\
                            QPushButton:pressed\
                            {\
                            border-style:outset;\
                            border-width:4px;\
                            border-radius:10px;\
                            border-color:rgba(255,255,255,255);\
                             background-color:rgb(204 , 228 , 247);\
                            font: 75 12pt \"华文细黑\";\
                            color: rgba(255, 255, 255, 255);\
                            }\
                            QLabel\
                            {\
                            font: 75 12pt \"华文细黑\";\
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
                            QTextEdit\
                            {\
                            font: 75 12pt \"华文细黑\";\
                            color: rgba(100, 100, 100, 255);\
                            background-color: rgb(255, 255, 255);\
                            }\
                            ");
}

void MainWindow::TableWidgetShow()
{
    disconnect(ui->tableWidget,&QTableWidget::itemChanged,0,0);
    //重置界面
    QString NULLstr="";
    for(int i=0;i<MAXLENGTH;i++)
    {
         ui->tableWidget->item(i,1)->setText(NULLstr);
         ui->tableWidget->item(i,0)->setText(NULLstr);
         ui->tableWidget->setRowHeight(i,30);
    }
    QTreeWidgetItem * now=ui->treeWidget->currentItem();
    QString  nowstr;
    if(now==nullptr)
    {
        nowstr=="root";
    }
    else nowstr=now->text(0);
    if(nowstr=="root")//全查找
    {
        QString K="select * from biji";
        q.clear();
        if(!q.exec(K))
        {
            QMessageBox::information(this,"提示","笔记初始化失败");
            return;
        }
         int i=0;
         while(q.next())
         {
             ui->tableWidget->item(i,0)->setText(q.value(2).toString());
             ui->tableWidget->item(i,1)->setText(q.value(0).toString());


             autoRowH(ui->tableWidget->item(i,0));
             i++;
         }
         return;
    }
    else
    {
        int num=SearchInformation(0,nowstr);
        for(int i=0;i<num;i++)
        {
           if(q.value(2).toString()==0)
           {
               ui->tableWidget->item(i,1)->setText(q.value(0).toString());//第二列保持类型设置为文本委托，第一列记录信息的数据库编号
               QByteArray ByteArray=q.value(4).toByteArray();
               QBuffer buffer(&ByteArray);
               buffer.open(QIODevice::ReadOnly);
               QImageReader reader(&buffer,"PNG");
               QImage img = reader.read();
               QPixmap pixmap;
               pixmap=QPixmap::fromImage(img);
               //第一列设置图像数据
               ui->tableWidget->item(i,0)->setData(Qt::DisplayRole, QVariant::fromValue<QPixmap>(pixmap));
           }
           else
           {
               //第一列设置文字数据
               ui->tableWidget->item(i,0)->setText(q.value(2).toString());
               ui->tableWidget->item(i,1)->setText(q.value(0).toString());
           }
           autoRowH(ui->tableWidget->item(i,0));
           q.next();
        }
    }

    connect(ui->tableWidget,&QTableWidget::itemChanged,this,[=](QTableWidgetItem *item)
    {
        if(dcstr!=item->text())
        {
           SaveInformation();
        }
    });

}

void MainWindow::autoRowH(QTableWidgetItem *item)
{
    QString str=item->text();

    if(str.length()!=0)
    {
        QLabel tem;
        //获取列宽
        int w=ui->tableWidget->columnWidth(0);
        //限定宽度
        tem.setMaximumWidth(w);
        tem.setMinimumWidth(w);
        //设置样式表 影响行间距
        tem.setStyleSheet("QLabel{font: 75 12pt \"华文细黑\"}");
        //设置内容
        tem.setText(str);
        //设置文字可以换行
        tem.setWordWrap(true);
        //设置组件更具内容自动调整调整大小
        tem.adjustSize();
        //获取到高度
        int h=tem.height();
        //设定对应行高
        if(h<26)h=36;
        ui->tableWidget->setRowHeight(item->row(),h+10);
    }
    else
    {
        QPixmap  pixmap=item->data(Qt::DisplayRole).value<QPixmap>();
        if(!pixmap.isNull())
        {
            int w=pixmap.width();
            int h=pixmap.height();
            int item_h=ui->tableWidget->columnWidth(0)*h/w;
            ui->tableWidget->setRowHeight(item->row(),item_h);
        }
    }
}

void MainWindow::treeMemory()
{
;
}


/*
 * //子节点储存父节点的标号
    //找根节点
    QString  str="select *  from   biji   where    类型 =  root";
*/
void MainWindow::ReadTree(QTreeWidgetItem* parentnode,QString parent)
{
    QTreeWidgetItem* p;
    QString  str="select * from NODE where parent = "+parent;

    //搜索孩子
    //必须用临时变量避免相互改变
    //每一层各有各的变量
    QSqlQuery result=QSqlQuery(db);
    if(!result.exec(str))
    {
        QMessageBox::information(this,"提示","子节点读取失败");
        return;
    }
    /*
     * 节点不会相同
    //对孩子集去重
    int num=0;
    while(result.next())
    {
        num++;
    }
    QString tem[2][num];
    result.first();
    int fannum=0;
    int is=0;
    for(int i=0;i<num;i++)
    {
        //检查是否有
        is=0;
        for(int j=0;j<num;j++)
        {

            if(tem[1][j]==result.value(1).toString())
            {
                 is=1;
                 break;
            }
        }
        //没有则插入
        if(!is)
        {
            if(result.value(0).toString()!=result.value(3).toString())
            {
                tem[0][fannum]=result.value(0).toString();
                tem[1][fannum]=result.value(1).toString();
                fannum++;
            }
        }
        result.next();
    }
    for(int i=0;i<fannum;i++)
    {
        //添加孩子
        p=new QTreeWidgetItem(parentnode,QStringList(tem[1][i]));
        parentnode->addChild(p);
        //传递自身的标号 递归
        treeRead(p,tem[0][i]);
    }*/

    while(result.next())
    {
        //在一层
        if(result.value(0).toString()==result.value(2).toString())
        {
            continue;
        }
        p=new QTreeWidgetItem(parentnode,QStringList(result.value(1).toString()));
        parentnode->addChild(p);
        //传递自身的标号 递归
        ReadTree(p,result.value(0).toString());
    }
}

void   MainWindow::DelTree(QString parent)
{
    QString a="select * from NODE where  parent ="+parent;
    QSqlQuery result=QSqlQuery(db);
    if(!result.exec(a))
    {
        QMessageBox::information(this,"提示","删除节点失败2");
        return ;
    }
    int is=0;
    while(result.next())
    {
        DelTree(result.value(0).toString());
        is++;
    }
    if(!is)
    {//无孩子节点
        //删除关联表
        QString aa="select * from NODE  where  ID ="+parent;
        result.clear();
        if(!result.exec(aa))
        {
            QMessageBox::information(this,"提示","删除节点失败3.1");
            return ;
        }
        result.next();
        QString bb=result.value(1).toString();
        QString cc="delete * from biji  where  类型 =\'"+bb+"\'";
        if(!result.exec(cc))
        {
            QMessageBox::information(this,"提示","删除节点失败3.2");
            return ;
        }
        QString d="delete  from NODE  where  ID ="+parent;
        if(!result.exec(d))
        {
            QMessageBox::information(this,"提示","删除节点失败3.3");
            return ;
        }
    }
    else
    {
        //删除关联表
        QString aa="select * from NODE  where  ID ="+parent;
        result.clear();
        if(!result.exec(aa))
        {
            QMessageBox::information(this,"提示","删除节点失败3.1");
            return ;
        }
        result.next();
        QString bb=result.value(1).toString();
        QString cc="delete * from biji  where  类型 =\'"+bb+"\'";
        if(!result.exec(cc))
        {
            QMessageBox::information(this,"提示","删除节点失败3.2");
            return ;
        }
        QString d="delete  from NODE  where  ID ="+parent;
        if(!result.exec(d))
        {
            QMessageBox::information(this,"提示","删除节点失败3.3");
            return ;
        }
    }
}

void MainWindow::SetMenuBar()
{
     connect(ui->bit_conversion,&QAction::triggered,this,&MainWindow::bit_conversion);
}

void MainWindow::bit_conversion()
{
    qDebug()<<"d";
    ShowBitConversion* sbc=new ShowBitConversion(this->pos().x()+this->width()*0.35,this->pos().y()+this->height()*0.35,300,200);




}

void MainWindow::on_tableWidget_customContextMenuRequested(QPoint pos)
{
    tMenu->exec(QCursor::pos());
}

void MainWindow::on_treeWidget_customContextMenuRequested(QPoint pos)
{
    rMenu->exec(QCursor::pos());
}


void MainWindow::on_pushButton_clicked()
{
    disconnect(ui->tableWidget,&QTableWidget::itemChanged,0,0);
    QString cd;
    QTreeWidgetItem *now=ui->treeWidget->currentItem();
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(30);
    if(!now)//全查找
    {
        QString  cd2=ui->searchcondition->text();
        if(cd2.length()==0)
        {
            QMessageBox::information(this,"提示","无效查找1");
            connect(ui->tableWidget,&QTableWidget::itemChanged,this,[=](QTableWidgetItem *item)
            {
                if(dcstr!=item->text())
                {
                    SaveInformation();
                }
            });
            return;
        }
        QString K =QString("select * from  biji where txt like")+"\'%"+cd2+"%\'";
        q.clear();
        if(!q.exec(K))
        {
            QMessageBox::information(this,"提示","查找失败");
            connect(ui->tableWidget,&QTableWidget::itemChanged,this,[=](QTableWidgetItem *item)
            {
                if(dcstr!=item->text())
                {
                    SaveInformation();
                }
            });
            return;
        }
        //ui->tableWidget->clearContents();//清空所以选项
         for(int i=0;i<MAXLENGTH;i++)
         {
             ui->tableWidget->item(i,0)->setText("");
             ui->tableWidget->item(i,1)->setText("");
         }
        //信息条显示
         int i=0;
         while(q.next())
         {
             ui->tableWidget->setItem(i,0,new QTableWidgetItem(q.value(2).toString()));
             //编号列设置
             ui->tableWidget->setItem(i,1,new QTableWidgetItem(q.value(0).toString()));
             autoRowH(ui->tableWidget->item(i,0));
             i++;
         }
    }
    else
    {
        cd=now->text(0);//
        if(cd=="root")//全查找
        {
            QString  cd2=ui->searchcondition->text();
            if(cd2.length()==0)
            {
                QMessageBox::information(this,"提示","无效查找2");
                connect(ui->tableWidget,&QTableWidget::itemChanged,this,[=](QTableWidgetItem *item)
                {
                    if(dcstr!=item->text())
                    {
                        SaveInformation();
                    }
                });
                return;
            }
            QString K =QString("select * from  biji where txt like")+"\'%"+cd2+"%\'";
            q.clear();
            if(!q.exec(K))
            {
                QMessageBox::information(this,"提示","查找失败");
                connect(ui->tableWidget,&QTableWidget::itemChanged,this,[=](QTableWidgetItem *item)
                {
                    if(dcstr!=item->text())
                    {
                        SaveInformation();
                    }
                });
                return;
            }
            //ui->tableWidget->clearContents();//清空所以选项
             for(int i=0;i<MAXLENGTH;i++)
             {
                 ui->tableWidget->item(i,0)->setText("");
                 ui->tableWidget->item(i,1)->setText("");
             }
            //信息条显示
             int i=0;
             while(q.next())
             {
                 ui->tableWidget->setItem(i,0,new QTableWidgetItem(q.value(2).toString()));
                 //编号列设置
                 ui->tableWidget->setItem(i,1,new QTableWidgetItem(q.value(0).toString()));
                 autoRowH(ui->tableWidget->item(i,0));
                 i++;
             }

        }
        else
        {
            QString  cd2=ui->searchcondition->text();
            if(cd2.length()==0)
            {
                QMessageBox::information(this,"提示","无效查找3");
                return;
            }
            QString K =QString("select * from  biji where  类型 =\'")+cd+"\' and txt like"+"\'%"+cd2+"%\'";
            q.clear();
            if(!q.exec(K))
            {
                QMessageBox::information(this,"提示","查找失败");
                connect(ui->tableWidget,&QTableWidget::itemChanged,this,[=](QTableWidgetItem *item)
                {
                    if(dcstr!=item->text())
                    {
                        SaveInformation();
                    }
                });
                return;
            }
            //ui->tableWidget->clearContents();//清空所以选项
             for(int i=0;i<MAXLENGTH;i++)
             {
                 ui->tableWidget->item(i,0)->setText("");
                 ui->tableWidget->item(i,1)->setText("");
             }
            //信息条显示
             int i=0;
             while(q.next())
             {
                 ui->tableWidget->setItem(i,0,new QTableWidgetItem(q.value(2).toString()));
                 //编号列设置
                 ui->tableWidget->setItem(i,1,new QTableWidgetItem(q.value(0).toString()));
                 autoRowH(ui->tableWidget->item(i,0));
                 i++;
             }

        }
    }

    connect(ui->tableWidget,&QTableWidget::itemChanged,this,[=](QTableWidgetItem *item)
    {
        if(dcstr!=item->text())
        {
            SaveInformation();
        }
    });
}


void  MainWindow::dragEnterEvent(QDragEnterEvent *event)
{
    event->acceptProposedAction();//接受拖拽信号
}

void  MainWindow::dropEvent(QDropEvent *event)
{
     QList<QUrl> urls = event->mimeData()->urls();
     if (urls.isEmpty())
     {
         QMessageBox::information(this,"提示","资源无效");
         return ;
     }
     QString path = urls.first().toLocalFile();
     QImage image(path); // QImage对I/O优化过, QPixmap对显示优化
     QPoint po=event->pos();
     if (!image.isNull())
     {
         QPixmap pixmap=QPixmap::fromImage(image);
         QTableWidgetItem *now=ui->tableWidget->currentItem();
         QPixmap  pix=now->data(Qt::DisplayRole).value<QPixmap>();
         if(pix.isNull()==false)
         {
            QMessageBox::information(this,"提示","图片信息无法更新");
            return;
         }
         now->setData(Qt::DisplayRole, QVariant::fromValue<QPixmap>(pixmap));
         SaveInformation();
     }
     else
     {
          QMessageBox::information(this,"提示","图片资源无效");
     }
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
            isDrag=true;
            m_position=e->globalPos() - this->pos();
            e->accept();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    if(isDrag&&(e->buttons()&&Qt::LeftButton))
    {
            move(e->globalPos()-m_position);
            e->accept();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
            isDrag=false;
}




ShowBitConversion::ShowBitConversion(int x, int y, int w, int h)
{

    child=new QWidget(this);
    edit=new QTextEdit(child);
    QL_Txtnum=new QLabel(child);
    QL_type=new QLabel(child);
    QLE_num_txt=new QLineEdit(child);
    QLE_type_txt=new QLineEdit(child);
    this->setGeometry(x,y,w,h);
    child->setGeometry(0,0,this->width(),this->height());
    edit->setGeometry(0,0.2*child->height(),child->width(),child->height()*0.7);
    QL_Txtnum->setGeometry(0,0.1*child->height(),50,0.1*child->height());
    QL_Txtnum->setText("数值");
    QLE_num_txt->setGeometry(50,0.1*child->height(),50,0.1*child->height());
    QL_type->setGeometry(100,0.1*child->height(),150,0.1*child->height());
    QL_type->setText("想要转换的类型");
    QLE_type_txt->setGeometry(250,0.1*child->height(),50,0.1*child->height());
    QPB_fig =new QPushButton(child);
    QPB_fig->setText("转换");
    QPB_fig->setGeometry(child->width()*0.45,0.9*child->height(),70,0.1*child->height());
    connect(QPB_fig,&QPushButton::clicked,[=]()
    {
        int a=QLE_num_txt->text().toInt();
        int b =QLE_type_txt->text().toInt();
        fig(a,b);
        edit->append("\n");
        edit->append("结果是：\n");
        edit->append(result);
        result.clear();
    });
    this->show();
}

void ShowBitConversion::fig(int a, int b)
{
    if(a<b)
        result+=QString::number(a);
    else
    {
        fig(a/b,b);
        result+=QString::number(a%b);
    }
}


