#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>//数据库连接
#include <QSqlQuery>//数据库查询
#include<QDebug>
#include<QCoreApplication>
#include<QMessageBox>
#include <QContextMenuEvent>//右键菜单事件
#include<QMenu>
#include<QAction>
#include<QHeaderView>//表头视图
#include<QTableWidget>
#include<QTreeWidget>
#include<QLabel>
#include<QTextEdit>
#include<QMenu>
#include<QAction>
#include<QAbstractItemView>

#include<QDragEnterEvent>
#include<QDropEvent>
#include<QImage>
#include<QPixmap>
#include<QMimeData>
#include<QBuffer>
#include<QImageReader>
#include "textshow.h"
#include<QVariant>
#include<QSettings>
#include<QDir>
#define  wordWidth   2
#include<QEvent>
#include<QMouseEvent>
#include<QLineEdit>


/*
Qt自带有QODBC驱动，通过windows平台上提供的ODBC驱动访问支持ODBC的数据库，
如Ms Access、SQL Server等
(Windows XP 自带有Access和SQL Server的ODBC Driver)。
*/
#define  MAXLENGTH    10000
namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //数据库直接读写
    bool ConnectData();//初始化数据库连接
    void SaveInformation();//保存信息
    void SaveAllInformation();//保存所有
    int  SearchInformation(int type,QString str);//查询信息
    void DeleteInformation();
    QString  GetID(QTreeWidgetItem* item);//获取节点的ID
    void SaveImageForSQL();//将图片信息保存到数据库

    void SetAutoStartup(bool);//开机自启动
private:
    Ui::MainWindow *ui;
    QSqlDatabase db;//数据库连接
    QSqlQuery q;//查询结果

    void InitTreeWidget();//初始化treewidget
    void InitTableWidget();//初始化tablewidget
    void theme();//界面美化
    void TableWidgetShow();//tablewidegt界面更新
    void autoRowH(QTableWidgetItem* item);//自适应行高
    void treeMemory();//树的储存
    void ReadTree(QTreeWidgetItem* parentnode,QString parent);//树的读取
    void DelTree(QString parent);//树的删除
    QMenu *tMenu,*rMenu;
    QAction* tSave,*tDel,*tSaveAll;
    QString dcstr;//
    void  SetMenuBar();//设置菜单栏的信号



    bool isDrag;
    QPoint m_position;
protected:
    void  dragEnterEvent(QDragEnterEvent *event);
    void  dropEvent(QDropEvent *event);
    void mousePressEvent(QMouseEvent* e);
    void mouseMoveEvent(QMouseEvent* e );
    void mouseReleaseEvent(QMouseEvent*e);

public slots:
    void treeTable_node_slot();//节点响应函数
    void right_del();
    void right_save();
    void right_saveall();
    void AddNode();//增加节点
    void DeleteNode();//删除节点
    void reNameNode();//节点命名
    void bit_conversion();//菜单栏信号一进制转化
private slots:
    void on_tableWidget_customContextMenuRequested(QPoint pos);//显示菜单
    void on_treeWidget_customContextMenuRequested(QPoint pos);//显示菜单
    //查找按钮响应槽
    void on_pushButton_clicked();

};
//显示进制转化的窗体
class   ShowBitConversion:public QWidget
{
public:
    ShowBitConversion(int x,int y ,int w,int h);
private:
    QWidget *child;
    QTextEdit* edit;
    QLabel * QL_Txtnum;
    QLabel * QL_type;
    QLineEdit * QLE_num_txt;
    QLineEdit * QLE_type_txt;
    QPushButton *QPB_fig;
    QString result;
    void fig(int a ,int b);//计算函数


};

#endif // MAINWINDOW_H
