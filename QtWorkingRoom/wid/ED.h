#ifndef ED_H
#define ED_H

#include <QWidget>
#include<QLabel>
#include<QPushButton>

class ED : public QWidget
{
    Q_OBJECT
public:
    int  pathcondition;
    int  carcondition;
    int distance;
    int weight;
    int start;
    int end;
    bool is_search;
    bool is_valid;
    explicit ED(QWidget *parent = 0,int start=0,int end=0,int w=0,int h=0);
    QLabel *ShowValue[3];
    QPushButton* cen;
    QLabel* bord[4];
    void init(int a,int b,int c,int d,int e);
    void setdata();
    void ShowValueFunc();
signals:

public slots:
    void Btn_slot();

};

#endif // ED_H
