#ifndef MANAGEFORRENYUAN_H
#define MANAGEFORRENYUAN_H

#include <QWidget>

namespace Ui {
class manageforrenyuan;
}

class manageforrenyuan : public QWidget
{
    Q_OBJECT

public:
    explicit manageforrenyuan(QWidget *parent = 0);
    ~manageforrenyuan();

private:
    Ui::manageforrenyuan *ui;


public slots:
    void showthis();

    void renyuan();


    void gengxinrenyuan();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_det_clicked();

signals:
void addaccount();



};

#endif // MANAGEFORRENYUAN_H
