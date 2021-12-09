#ifndef SERIALPORT_H
#define SERIALPORT_H

#include <QObject>
#include<QSerialPort>
#include<QSerialPortInfo>
class Serialport : public QObject
{
    Q_OBJECT
public:
    explicit Serialport(QObject *parent = 0);

    void CNNserialport(QString name);

    void send_to_SerialPort();


private:
    QSerialPort  port;
signals:

public slots:
    void receiveData();

};

#endif // SERIALPORT_H
