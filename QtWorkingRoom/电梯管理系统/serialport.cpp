#include "serialport.h"
#include<QDebug>
Serialport::Serialport(QObject *parent) :
    QObject(parent)
{
}

void Serialport::CNNserialport(QString name)
{
    port.setPortName(name);
    if(port.open(QIODevice::ReadWrite))
    {
        port.setBaudRate(QSerialPort::Baud9600);
        port.setDataBits(QSerialPort::Data8);
        port.setFlowControl(QSerialPort::NoFlowControl);//设置控制流
        port.setParity(QSerialPort::NoParity);//设置校验位
        port.setStopBits(QSerialPort::OneStop);//设置停止位
        //准备读取的信号
        connect(&port,SIGNAL(readyRead()),this,SLOT(receiveData()));
    }
    else
    {
        qDebug()<<"串口打开失败";
    }
}


//向串口发送数据
void Serialport::send_to_SerialPort()
{
    ;
}


/*
接受串口的字节数据并打印字符串
*/
void Serialport::receiveData()
{
   QByteArray  buffer=port.readAll();
   qDebug()<<"收到串口数据"<<QString(buffer);
}
