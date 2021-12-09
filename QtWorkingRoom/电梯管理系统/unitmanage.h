#ifndef UNITMANAGE_H
#define UNITMANAGE_H

#include <QWidget>
#include<QHBoxLayout>
#include<QCheckBox>
#include<QLineEdit>
namespace Ui {
class unitManage;
}

class unitManage : public QWidget
{
    Q_OBJECT

public:
    explicit unitManage(QWidget *parent = 0);
    ~unitManage();

    void  setQSS(QString );
    QHBoxLayout  *du;
    QWidget*  wid;

private slots:


    void on_pushButton_clicked();



    void on_delete_2_clicked();





    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::unitManage *ui;

    QCheckBox *jk;
    QLineEdit  *line;
    int nownum;


public slots:
    void showthis();
};

#endif // UNITMANAGE_H
