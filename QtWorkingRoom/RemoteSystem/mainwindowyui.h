#ifndef MAINWINDOWYUI_H
#define MAINWINDOWYUI_H

#include <QMainWindow>
#include<QDate>
#include<QLabel>
namespace Ui {
class MainWindowyui;
}

class MainWindowyui : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowyui(QWidget *parent = 0);
    ~MainWindowyui();
    QString QSSbuffer_blue;
    QString QSSbuffer_pink;
    QString QSSbuffer_green;
    void  initmaindeviecelist();
    void  initmainunitlist();
    void  initmainfloorlist();


    void showlistclient();//显示用户列表的函数

    int nowcurrentselected_num;

    QLabel *showpoint;
    int * LISTOPERORINDEX;


    void deviceLITSINIT();


    void searchResult(QString*);//查找结果


    void  QSSINIT();





private slots:


    void on_onlyshowuserlist_3_clicked(bool checked);

    void on_add_showadd_2_clicked();

    void on_endadd_2_clicked();



    void on_checkBox_6_clicked(bool checked);

    void on_checkBox_6_clicked();

    void on_pushButton_72_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_47_clicked();

    void on_onlyshowuserlist_3_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_49_clicked();

    void on_oneyeqr_clicked();

    void on_twoyear_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_69_clicked();

    void on_pushButton_70_clicked();

    void on_pushButton_5_clicked();

    void on_list_xg_clicked();

    void on_list_del_clicked();

    void on_list_delall_clicked();

    void on_comboBox_24_currentTextChanged(const QString &arg1);

    void on_ob_add_clicked();

    void on_ob_xiugai_clicked();

    void on_comboBox_24_activated(const QString &arg1);

    void on_main_changbumen_currentIndexChanged(const QString &arg1);

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_theme_currentTextChanged(const QString &arg1);

   // void on_theme_activated(const QString &arg1);

    //void on_pushButton_52_clicked();

public slots:
    void showthis();
    void loucenglistqcheckboxi64chang();
    void chchhhcc(bool);

    void  checkddddd();

    void showclient(QString,QString,QString,QString,QString,QString,QString,QString);

    void dataUpdate(QString* old,QString *fnew);


    void slot_addstr(QString *);
    void slot_recvchangstr(QString*);

private:
    Ui::MainWindowyui *ui;
    QDateTime  nonohh;

signals:
    void actionlgin();
    void actiondevicemanager();
    void actionunitmanager();
    void actiondeivcewithunit();
    void actionrecnn();
    void actionexit();
    void actionacfloormanagr();
    void aczhuangzhiyudanyuan();

    void acretomian();
    void showcaozuorenyuan();
    void xiugaipassword();
    void showcanshu();

    void showguanyu();

    void  showaddnpp();

    void xiugaishju();//修改用户数据

    void changdata();

    void changdatas(QString *);//发送修改信息


    void themechang(QString );
};


#endif // MAINWINDOWYUI_H
