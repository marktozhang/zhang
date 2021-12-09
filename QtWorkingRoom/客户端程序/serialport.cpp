#include "serialport.h"
#include<iostream>
using namespace std;
SerialPort::SerialPort(QObject *parent) :
    QObject(parent)
{
      init("COM18",1,1,1,1);
}

int  SerialPort::init(QString name, int baud, int checkbit, int databit, int stopbit)
{
    port.setPortName(name);
    if(port.open(QIODevice::ReadWrite))
    {
       qDebug()<<"打开串口";
       port.setBaudRate(QSerialPort::Baud9600);
       port.setDataBits(QSerialPort::Data8);
       port.setFlowControl(QSerialPort::NoFlowControl);//无流控制
       port.setParity(QSerialPort::NoParity);
       port.setStopBits(QSerialPort::OneStop);
       connect(&port,SIGNAL(readyRead()),this,SLOT(receiveData()));
       for(int i=0;i<5;i++)
       {
           char* Message="dddds";
           port.write(Message);
       }
       qDebug()<<"打开串口";
       return true;
    }
    return false;
}

void SerialPort::receiveData()
{

    QByteArray buffer=port.readAll();
    qDebug()<<"从串口接收到数据:"<<QString(buffer);
    char* Message="测试传输";
    port.write(Message);

}
