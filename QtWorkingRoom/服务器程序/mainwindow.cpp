#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    s=new QTimer(this);
    s->start(1000);
    ServerSocket=INVALID_SOCKET;
    scData *scd=new scData();
    scd->read();
}
MainWindow::~MainWindow()
{
    delete ui;
}

//启动服务器
void MainWindow::on_openserver_clicked()
{
    if(INVALID_SOCKET != ServerSocket)
        return;
    //请求版本号
    WSAStartup(0x202, &wsadata);//连接动态库
    if(HIBYTE(wsadata.wVersion)!=2||LOBYTE(wsadata.wVersion)!=2)
    {
        ui->receivetxt->append("请求版本号 ");
        return ;//请求失败
    }
    //创建socket
    char host[255];
    if(gethostname(host,sizeof(host))==SOCKET_ERROR)
    {
         ui->receivetxt->append("无法获取主机名");
    }
    else
    {
        ui->receivetxt->append(host);
    }
    char*  nip;//内网ip
    struct hostent *p=gethostbyname(host);
    if(p==0)
    {

         ui->receivetxt->append("无法获取计算机主机名及IP");
      }
      else
      {
         for(int i=0;p->h_addr_list[i]!=0;i++)
         {
               struct in_addr in;
               memcpy(&in,p->h_addr_list[i],sizeof(struct in_addr));
               nip=inet_ntoa(in);

         }
      }

      ServerSocket=::socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
      if(ServerSocket==INVALID_SOCKET)
      {
          qDebug()<<"socket无效";
          ui->receivetxt->append("serversocket error");
          return;
      }
      //创建地址族
      //SOCKADDR_IN
      sockaddr_in service;
      service.sin_family=PF_INET;

      service.sin_addr.S_un.S_addr=htonl(INADDR_ANY);

      ui->nip->setText("服务器的内网ip:"+QString(nip));
      service.sin_port=htons(8848);

      if(::bind(ServerSocket,(sockaddr*)&service,sizeof(sockaddr_in))==SOCKET_ERROR)
      {
          return;
      }
      //监听
      int ret = listen(ServerSocket,SOMAXCONN);
      if( ret == SOCKET_ERROR)
      {
          qDebug()<<"4";
           return ;
      }
      ui->Servertxt->append("服务器已启动");
      ser=new Server(ServerSocket);
      connect(ser,SIGNAL(send_info(QString)),this,SLOT(receive_info(QString)));
      connect(this,SIGNAL(To_Remote(QString)),ser,SLOT(test(QString)));
      ser->start();
      connect(s,&QTimer::timeout,[=]()
      {
          ui->showinfo->setText(ser->newuser);
      });
}

//关闭服务器
void MainWindow::on_closeserver_clicked()
  {
      ui->Servertxt->setText("关闭服务器");
      ::closesocket(ServerSocket);
      WSACleanup();
  }

  void MainWindow::receive_info(QString str)
  {

      ui->receivetxt->append(str);
  }

void MainWindow::on_sendinfo_clicked()
{
    QString str=ui->sendtxt->toPlainText();
    emit To_Remote(str);
}
