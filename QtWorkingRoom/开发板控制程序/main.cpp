#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    window_main wm;
    wm.show();
    Message *das=new Message();
    das->start();
    thread_network *net=new thread_network();
    net->start();
    // MYTIME timee(net->socket_cnn);
    // QObject::connect(net,SIGNAL(send_netstation(int)),&w,SLOT(recv_netcnn_repaint_isonline(int)));//网络与主界面
    // QObject::connect(net,SIGNAL(send_netstation(int)),&f,SLOT(recv_show_isonline(int)));//网络与注册界面
    //主子界面交互
    // QObject::connect(&f,&Form::send_show_mainwondow,&w,&MainWindow::recv_showthis);
    //  QObject::connect(&w,&MainWindow::send_show_registwidget,&f,&Form::recv_showthis);
    //与界面交互
    //    QObject::connect(&wm,&window_main::send_changlongin,&w,&MainWindow::recv_showthis);
    // QObject::connect(&w,&MainWindow::send_show_registwidget,&f,&Form::recv_showthis);
    //  QObject::connect(&wm,&window_main::send_changlongin,&w,&MainWindow::recv_showthis);
    // QObject::connect(&w,&MainWindow::send_show_interface,&wm,&window_main::recv_showthis);
    QObject::connect(net,&thread_network::send_renew_userinfo,&wm,&window_main::recv_show_listwidget);
    return a.exec();
}
