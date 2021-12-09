#ifndef ADDCAOZUORENYUAN_H
#define ADDCAOZUORENYUAN_H

#include <QWidget>
#include"scdata.h"
namespace Ui {
class addcaozuorenyuan;
}

class addcaozuorenyuan : public QWidget
{
    Q_OBJECT

public:
    explicit addcaozuorenyuan(QWidget *parent = 0);
    ~addcaozuorenyuan();

    void dataoperator(QString sql);//数据库语句执行 并更新缓冲

private:
    Ui::addcaozuorenyuan *ui;

public slots:
    void showthis();

    void setQSS(QString );
private slots:
    void on_pushButton_clicked();
    void on_showpassword_clicked();
    void on_pushButton_2_clicked();
    void updata(QSSS aaq,QString n,QString ll);
signals:
    void gengxinrenyuan();
    void xiewanl();




};
#endif // ADDCAOZUORENYUAN_H
