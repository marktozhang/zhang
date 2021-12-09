#ifndef SHOWGUANYU_H
#define SHOWGUANYU_H

#include <QWidget>

namespace Ui {
class showguanyu;
}

class showguanyu : public QWidget
{
    Q_OBJECT

public:
    explicit showguanyu(QWidget *parent = 0);
    ~showguanyu();
public slots:
    void showthis();
    void setQSS(QString );
private slots:
    void on_pushButton_clicked();

private:
    Ui::showguanyu *ui;
};

#endif // SHOWGUANYU_H
