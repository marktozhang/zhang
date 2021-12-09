#ifndef TH_H
#define TH_H
#include<Thread>
class th :  Thread
{
public:
    th();
    static int a=0;
protected:
    void run();
};

#endif // TH_H
