#include<stdio.h>
int main()
{
    int *p,i;
    int a[10]={12,23,56,1,65,67,87,34,6,23};
    p=a;
    for(i=0;i<10;i++)
    {
        printf("%d  ",(p+i));
    }
    return 0;

}
