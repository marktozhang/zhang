#ifndef PRINTER_H
#define PRINTER_H

#include <QObject>
#include<QPrinter>
#include<QPainter>
class printer : public QObject
{
    Q_OBJECT
public:
    explicit printer(QObject *parent = 0);
    void Print();//
signals:

public slots:

};

#endif // PRINTER_H
