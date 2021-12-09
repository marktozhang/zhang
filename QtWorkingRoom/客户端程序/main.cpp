

#include <QApplication>
#include"serialport.h"
#include"printer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // printer  p;
    SerialPort sp;
    return a.exec();
}
