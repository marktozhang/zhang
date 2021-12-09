#ifndef DEVICEWITHUNIT_H
#define DEVICEWITHUNIT_H

#include <QWidget>

namespace Ui {
class devicewithunit;
}

class devicewithunit : public QWidget
{
    Q_OBJECT

public:
    explicit devicewithunit(QWidget *parent = 0);
    ~devicewithunit();

private:
    Ui::devicewithunit *ui;

public  slots:
    void showthis();
    void setQSS(QString );
};

#endif // DEVICEWITHUNIT_H
