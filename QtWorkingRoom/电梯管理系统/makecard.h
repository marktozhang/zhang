#ifndef MAKECARD_H
#define MAKECARD_H

#include <QWidget>
#include<QMenuBar>

#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include<QMainWindow>
namespace Ui {
class makecard;
}

class makecard : public QWidget
{
    Q_OBJECT
public:
    explicit makecard(QWidget *parent = 0);
    ~makecard();
    QMenuBar * menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;

private slots:


    void on_onlyshowuserlist_clicked(bool checked);

    void on_add_showadd_clicked();

    void on_endadd_clicked();
    void on_pushButton_34_clicked();

public slots:
    void showthis();


private:
    Ui::makecard *ui;
};

#endif // MAKECARD_H
