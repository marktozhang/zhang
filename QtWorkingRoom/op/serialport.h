#ifndef SERIALPORT_H
#define SERIALPORT_H

#include <QObject>
#include<QSerialPort>
#include<QSerialPortInfo>
#include<QDebug>
class SerialPort : public QObject
{
    Q_OBJECT
public:
    explicit SerialPort(QObject *parent = 0);
    int  init(QString name,int baud=QSerialPort::Baud9600,int checkbit=QSerialPort::NoParity,int databit=QSerialPort::Data8,int stopbit=QSerialPort::OneStop);
    QSerialPort port;
private:

public slots:
    void receiveData();
};

#endif // SERIALPORT_H
