#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
#define  FNAME  "/tmp/out"
int main(void)
{
    int fd;
    close(1);
    fd=open(FNAME,0_WEO);


    if(fd<0)
    {


    }
    /*********/
    puts("testccccc");
    return 0;
}

