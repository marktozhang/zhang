#include<stdio.h>
#define BUFSIZE 1024
void _sprintf()
{
    char  str[80]="1234";
    sprintf(str,"abcd");
    printf("%s\n",str);
    char buffer[50]="123456";
    sprintf(str,"abcdef%d",buffer);
    printf("%s\n",str);
    char buffer1[50];
    buffer1[0]='A';
    //buffer1[1]='\0';
    sprintf(str,"%c",buffer1[0]);
    printf("%s\n",str);


}
void _fprintf()
{
    FILE *fp;
    fp=fopen("fprintf.txt","w+");
    char  str[80]="1234";
    fwrite(str,1,4,fp);
    fprintf(fp,str);
    fprintf(fp,"%s",str);
    fclose(fp);
}
void IO()
{
    FILE * fpx=NULL,*fpd=NULL;
    fpd=fopen("a.txt","r+");
    fpx=fopen("c.txt","w");
    if(fpd&&fpx)
    {
        int n=0;
        char buffer[BUFSIZE];
        while(n=fread(buffer,1,1,fpd)>0)//实际的读取数量
        {
            fwrite(buffer,1,n,fpx);
            printf("%s\n",buffer);
        }
        fclose(fpd);
        fclose(fpx);
    }
}


int main()
{
_fprintf();
    return 0;
}
