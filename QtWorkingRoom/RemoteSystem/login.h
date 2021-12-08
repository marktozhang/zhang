#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include<QMouseEvent>
namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_closeWindow_clicked();

    void on_showmin_clicked();

    void on_loginStart_clicked();

    void on_checkBox_clicked();

    void on_pushButton_5_clicked();

protected:
    void mousePressEvent(QMouseEvent *event);//窗体事件
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
public slots:
    void hidethis();
    void warnup();
signals:
    void showmakecard();
private:
    Ui::login *ui;

    bool         m_bDrag;
    QPoint      mouseStartPoint;
    QPoint      windowTopLeftPoint;
};

#endif // LOGIN_H
