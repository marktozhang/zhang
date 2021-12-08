#ifndef SHOWTBALE_H
#define SHOWTBALE_H

#include <QWidget>

namespace Ui {
class showTbale;
}

class showTbale : public QWidget
{
    Q_OBJECT

public:
    explicit showTbale(QWidget *parent = 0);
    ~showTbale();

private:
    Ui::showTbale *ui;
};

#endif // SHOWTBALE_H
