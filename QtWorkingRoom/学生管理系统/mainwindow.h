#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QContextMenuEvent>
#include <QProcess>
#include <QTableView>
#include <QModelIndex>
#include<QTreeWidget>
#include<QDebug>
#include<QMessageBox>
#include<QTableWidget>
#include<QMenu>
#include<QAction>
#include<QLabel>
#include<QHeaderView>

#define MAXLENGTH  100

typedef struct
{
    QString student_school;//学生的学校
    QString  student_class;//学生班级
    QString  student_name;//学生名字
    QString  student_age;//学生年龄
    QString  student_sex;//学生性别
    QString  student_high;//学生身高
    QString student_weight;//学生体重
    QString student_detail;//学生描述

}Struct_Table;//行信息
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void treeTable();//树形结构
    void treeTable_node(QTreeWidgetItem* parent,QString str);//树形结构调用方法_添加节点
    Struct_Table *TableHeader;//表头
    void tableWidgetShow();//查找对应信息并显示
    void tableWidgetInit();//表格初始化 包含右键菜单初始化
    void theme();//界面美化
private:
    Ui::MainWindow *ui;
    QMenu *menu;
    QAction *action[4];
    QMenu *menusort;
    QAction *actionSort[6];
public slots:
    void treeTable_node_slot();//树形结构_节点_被点击响应函数
    void rightmouse_add();//鼠标右键响应函数
    void rightmouse_del();//鼠标右键响应函数
    void rightmouse_revise();//鼠标右键响应函数
    void rightmouse_renew();
    void rightmouse_search();//关键字查找
    void sort(int a,int b);//升序参数是升降  那一列
    void update();//更新表数据
private slots:
    void on_tableWidget_customContextMenuRequested(QPoint pos);//ui_tablewidget设置传统文本菜单策略 的点击响应函数
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
