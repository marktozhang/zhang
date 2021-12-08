#ifndef SHOW_H
#define SHOW_H

#include <QWidget>

namespace Ui {
class show;
}

class showw : public QWidget
{
    Q_OBJECT

public:
    explicit showw(QWidget *parent = 0);
    ~showw();
    public slots:
    void recv_ss(QString *);


private:
    Ui::show *ui;
};

#endif // SHOW_H
