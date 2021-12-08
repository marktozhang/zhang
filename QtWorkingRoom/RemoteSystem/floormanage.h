#ifndef FLOORMANAGE_H
#define FLOORMANAGE_H

#include <QWidget>

namespace Ui {
class floormanage;
}

class floormanage : public QWidget
{
    Q_OBJECT

public:
    explicit floormanage(QWidget *parent = 0);
    ~floormanage();

private:
    Ui::floormanage *ui;

private slots:

    void on_pushButton_clicked();

    void on_delete_2_clicked();


    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_add_clicked();

    void on_xiugai_clicked();

public slots:
    void showthis();

    void  setQSS(QString );
};

#endif // FLOORMANAGE_H
