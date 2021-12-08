#ifndef XIUGAIPASSWORD_H
#define XIUGAIPASSWORD_H

#include <QWidget>

namespace Ui {
class xiugaipassword;
}

class xiugaipassword : public QWidget
{
    Q_OBJECT

public:
    explicit xiugaipassword(QWidget *parent = 0);
    ~xiugaipassword();

private:
    Ui::xiugaipassword *ui;
public slots:
    void setQSS(QString );
    void showthis();
private slots:
    void on_pushButton_clicked();
    void on_checkBox_clicked();
};

#endif // XIUGAIPASSWORD_H
