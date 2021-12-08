#ifndef MEMORYFLOOR_H
#define MEMORYFLOOR_H

#include <QObject>
#include<QCheckBox>
#include<QLabel>
#include<QWidget>
class memoryfloor : public QWidget
{
    Q_OBJECT
public:
    explicit memoryfloor(QWidget *parent = 0);

    QLabel  *ql;
signals:
 void dsajdk();
public slots:

    void dsad();

};

#endif // MEMORYFLOOR_H
