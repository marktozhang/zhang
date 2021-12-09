#ifndef FORMASD_H
#define FORMASD_H

#include <QWidget>

namespace Ui {
class Formasd;
}

class Formasd : public QWidget
{
    Q_OBJECT

public:
    explicit Formasd(QWidget *parent = 0);
    ~Formasd();

private:
    Ui::Formasd *ui;

signals:
    void showmakecard();

public  slots:
    void  showthis();
private slots:
    void on_pushButton_2_clicked();
};

#endif // FORMASD_H
