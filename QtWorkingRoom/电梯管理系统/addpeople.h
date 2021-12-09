#ifndef ADDPEOPLE_H
#define ADDPEOPLE_H

#include <QWidget>

namespace Ui {
class addpeople;
}

class addpeople : public QWidget
{
    Q_OBJECT

public:
    explicit addpeople(QWidget *parent = 0);
    ~addpeople();

private slots:
    void on_pushButton_2_clicked();





    void on_bumen_currentTextChanged(const QString &arg1);
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_wanchengxiugai_clicked();

    void on_adduser_clicked();

signals:
    void addnew();

    void cliinfo(QString,QString,QString,QString,QString,QString,QString,QString);
    void newcliinfo(QString* );

    void signal_addstr(QString *);
private:
    Ui::addpeople *ui;
public slots:
    void showthis();

    void xiushowthis(QString *);

    void setQSS(QString );
};

#endif // ADDPEOPLE_H
