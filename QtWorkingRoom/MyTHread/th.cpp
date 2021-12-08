#include "th.h"
#include<QDebug>
th::th()
{
    a++;
}

void th::run()
{
    while (true)
    {
        qDebug()<<a;
    }
}
