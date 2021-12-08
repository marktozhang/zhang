#include "widget.h"
#include <QApplication>
#include"form.h"
int main(int argc, char *argv[])
{
    QApplication a(argc,argv);
    Widget w;
    w.show();
    Form  F;

    QObject::connect(&w,&Widget::qita,&F,&Form::receive);
    QObject::connect(&F,&Form::re,&w,&Widget::receive);



    return a.exec();
}
