#include <iostream>

using namespace std;
int foo();
int main()
{
    cout << foo() << endl;
    return 0;
}


int   foo()
{
    int a=500;
    int b=5356;
    int x=0;
    int y=0;
    int result=0;
    //捕获列表  形参列表 返回类型 函数体 实参列表
    result=[](int a,int b)->int {return a+b;}(a,b);
    cout<<result<<endl;
    return result;
}

