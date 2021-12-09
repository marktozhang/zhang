#include <iostream>
#include<vector>
using namespace std;

template<class T>
void mpSort(vector<T> &object)
{
    int i = 0, j = 0,temp;
    for (i; i < object.size()-1; i++)
    {
        for (j; j < object.size()-1; j++)
        {
            if (object[j] > object[j+1])
            {
                temp = object[j];
                object[j] = object[j + 1];
            }
        }
    }
}


int main()
{
    vector<int>  Arr;

    Arr[0] = 1;
    Arr[1] = 45;
    Arr[2] = 6;
    Arr[3] = 484;
    Arr[4] = 2;
    Arr[5] = 112;
    Arr[6] = 100;
    Arr[7] = 2;
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", Arr[i]);

    }
    //mpSort(Arr);
    /*std::vector<int>::iterator  iter ;
    for (iter = Arr.begin(); iter != Arr.end(); iter++)
    {
        printf("%d\n", *iter);
        printf("%d\n", iter);
    }*/


}

