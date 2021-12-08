#ifndef CANSHUSET_H
#define CANSHUSET_H

#include <QWidget>

namespace Ui {
class canshuset;
}

class canshuset : public QWidget
{
    Q_OBJECT

public:
    explicit canshuset(QWidget *parent = 0);
    ~canshuset();

private slots:
    void on_pushButton_3_clicked();

    void on_widget_destroyed();

    void on_pushButton_4_clicked();

private:
    Ui::canshuset *ui;


public  slots:
    void showthis();
    void setQSS(QString );
};

#endif // CANSHUSET_H
