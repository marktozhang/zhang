
#include <QApplication>
#include"esp8266.h"
#include"login.h"
#include"mainwindowyui.h"

#include"formasd.h"
//#include"memoryfloor.h"
#include"device_duiyingdelouceng.h"
#include"unitmanage.h"
#include"add_device.h"
#include"floormanage.h"
#include"devicewithunit.h"
#include"manageforrenyuan.h"
#include"addcaozuorenyuan.h"
#include"xiugaipassword.h"
#include"devicewithunit.h"
#include"canshuset.h"
#include"showguanyu.h"
#include"scdata.h"
#include"addpeople.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //scdata sc;
    kehu esp;
    esp.hide();
    cnnNT *k=new cnnNT();
    k->start();
    login log;
    log.show();
   Formasd  fasd;
    fasd.hide();

    MainWindowyui  mainW;
    mainW.show();
    ADD_device add_d;
    add_d.hide();

    device_duiyingdelouceng  device_dui;
    device_dui.hide();
    unitManage  udint;
    udint.hide();
    floormanage  fllodr;
   fllodr.hide();

   devicewithunit  deveice_unit;

   manageforrenyuan  caozuo;//操作人员界面
    addcaozuorenyuan  addpeoddple;//添加人员信息

    xiugaipassword  xiugai;//修改密码
    xiugai.setParent(&mainW);
    canshuset  canshu;//参数设置
    addpeople  newpp;//添加新用户
    showguanyu  gunyu;//关于的什么
    QObject::connect(k,&cnnNT::show_renew,&esp,&kehu::show_renew,Qt::QueuedConnection);
    QObject::connect(k,&cnnNT::tomain,&esp,&kehu::showthis,Qt::QueuedConnection);
    QObject::connect(k,&cnnNT::tomain,&log,&login::hidethis,Qt::QueuedConnection);
    QObject::connect(k,&cnnNT::badtomain,&log,&login::warnup,Qt::QueuedConnection);
    QObject::connect(k,&cnnNT::addresult,&esp,&kehu::addresult,Qt::QueuedConnection);
    QObject::connect(k,&cnnNT::renew,&esp,&kehu::showrenew,Qt::QueuedConnection);
    QObject::connect(k,&cnnNT::rq,&esp,&kehu::recvrq,Qt::QueuedConnection);
    QObject::connect(k,&cnnNT::recvlistwc,&esp,&kehu::showlist,Qt::QueuedConnection);
    QObject::connect(&log,&login::showmakecard,&fasd,&Formasd::showthis);
    QObject::connect(&fasd,&Formasd::showmakecard,&mainW,&MainWindowyui::showthis);

    QObject::connect(&mainW,&MainWindowyui::actiondevicemanager,&device_dui,&device_duiyingdelouceng::showthis);
    QObject::connect(&device_dui,&device_duiyingdelouceng::showtoadd,&add_d,&ADD_device::showthis);


    QObject::connect(&mainW,&MainWindowyui::actiondevicemanager,&device_dui,&device_duiyingdelouceng::showthis);
    QObject::connect(&mainW,&MainWindowyui::actionunitmanager,&udint,&unitManage::showthis);

    //主界面显示楼层管理界面
    QObject::connect(&mainW,&MainWindowyui::actionacfloormanagr,&fllodr,&floormanage::showthis);


    //主界面关闭返回登录
    QObject::connect(&mainW,&MainWindowyui::acretomian,&fasd,&Formasd::showthis);

    //主界面显示装置与单元界面
    QObject::connect(&mainW,&MainWindowyui::actiondeivcewithunit,&deveice_unit,&devicewithunit::showthis);

    //显示操作人员界面
     QObject::connect(&mainW,&MainWindowyui::showcaozuorenyuan,&caozuo,&manageforrenyuan::showthis);


    //连接人员管理与添加人员
     QObject::connect(&caozuo,&manageforrenyuan::addaccount,&addpeoddple,&addcaozuorenyuan::showthis);
     QObject::connect(&mainW,&MainWindowyui::xiugaipassword,&xiugai,&xiugaipassword::showthis);


    QObject::connect(&mainW,&MainWindowyui::showcanshu,&canshu,&canshuset::showthis);

   //连接关于功能
    QObject::connect(&mainW,&MainWindowyui::showguanyu,&gunyu,&showguanyu::showthis);

    //更新人员界面数据
    QObject::connect(&addpeoddple,&addcaozuorenyuan::gengxinrenyuan,&caozuo,&manageforrenyuan::gengxinrenyuan);


    //写完数据更新设备管理
    QObject::connect(&add_d,&ADD_device::xiewanl,&device_dui,&device_duiyingdelouceng::recvxiewwan);

    //完成添加
    QObject::connect(&add_d,&ADD_device::okadddevice,&device_dui,&device_duiyingdelouceng::showthis);
    QObject::connect(&add_d,&ADD_device::okadddevice,&device_dui,&device_duiyingdelouceng::recvxiewwan);

    //修改设备信息
    //返回主界面
    QObject::connect(&device_dui,&device_duiyingdelouceng::wancde,&mainW,&MainWindowyui::showthis);
    QObject::connect(&device_dui,&device_duiyingdelouceng::xxxggg,&add_d,&ADD_device::xxx);
    //添加newpp
    QObject::connect(&newpp,&addpeople::addnew,&mainW,&MainWindowyui::showthis);
     QObject::connect(&mainW,&MainWindowyui::showaddnpp,&newpp,&addpeople::showthis);



     //用户信息的发送
    QObject::connect(&newpp,&addpeople::cliinfo,&mainW,&MainWindowyui::showclient);
    //用户信息未发卡信息的修改
    QObject::connect(&mainW,&MainWindowyui::changdatas,&newpp,&addpeople::xiushowthis);
//添加用户信息
    QObject::connect(&newpp,&addpeople::signal_addstr,&mainW,&MainWindowyui::slot_addstr);
//修改完信息后发送给主界面
    QObject::connect(&newpp,&addpeople::newcliinfo,&mainW,&MainWindowyui::slot_recvchangstr);

  //其他界面的主题
    QObject::connect(&mainW,&MainWindowyui::themechang,&add_d,&ADD_device::setQSS);//装置添加
    QObject::connect(&mainW,&MainWindowyui::themechang,&device_dui,&device_duiyingdelouceng::setQSS);
    QObject::connect(&mainW,&MainWindowyui::themechang,&udint,&unitManage::setQSS);
    QObject::connect(&mainW,&MainWindowyui::themechang,&fllodr,&floormanage::setQSS);
    QObject::connect(&mainW,&MainWindowyui::themechang,&newpp,&addpeople::setQSS);

    QObject::connect(&mainW,&MainWindowyui::themechang,&canshu,&canshuset::setQSS);
    QObject::connect(&mainW,&MainWindowyui::themechang,&xiugai,&xiugaipassword::setQSS);
    QObject::connect(&mainW,&MainWindowyui::themechang,&gunyu,&showguanyu::setQSS);

    //
    return a.exec();
}


