#include "espwidget.h"
#include"cnnNT.h"
#include"cnnNT.h"
#include<QPushButton>
#include<QLabel>
#include<QHBoxLayout>

extern SOCKET socket_z;
extern ListDeceive listdeced;
espwidget::espwidget(QWidget *parent,int i) :
    QWidget(parent)
{
     name=new QLabel(this);
     number=new QLabel(this);
     station=new QLabel(this);
     cq=new QPushButton(this);
     h=new QHBoxLayout(this);

     h->addWidget(name);
     h->addWidget(number);
     h->addWidget(station);
     h->addWidget(cq);
     name->setAlignment(Qt::AlignCenter);


      number->setAlignment(Qt::AlignCenter);
      name->setText((listdeced.strinfo[i][0]));
      number->setText(listdeced.strinfo[i][1]);
      uid=listdeced.strinfo[i][1];
      station->setAlignment(Qt::AlignCenter);
      if(listdeced.strinfo[i][2]=="1")
      {
         station->setText("在线");
      }
      else
      {
         station->setText("离线");
      }
      cq->setText("测试按钮-重启");
      //+指令+设备编号

      connect(cq,&QPushButton::clicked,[=]()
      {
          int len=0;
          int size=0;
          int cmd=4;
          ::send(socket_z,(char*)&cmd,sizeof(int),0);
          size=this->uid.length();
          len=::send(socket_z,(char*)&size,sizeof(int),0);
          qDebug()<<"按钮对应类的UID值"<<this->uid<<"发送标志"<<len;
          ::send(socket_z,this->uid.toUtf8().data(),this->uid.length(),0);
          QString chongqi="AT*RESTART#";
          size=chongqi.length();
          ::send(socket_z,(char*)&size,sizeof(int),0);
          ::send(socket_z,chongqi.toUtf8().data(),chongqi.length(),0);
      });
}
