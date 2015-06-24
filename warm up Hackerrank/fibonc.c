#include<stdio.h>
int i=0;
long long int a[1000001];

void fibonaci()
{   a[0]=0;
    a[1]=1;
    i=2;
    while(a[i-1]<10000000001)
    {
        a[i]=a[i-1]+a[i-2];
        i++;
    }

}


int main()
{
    fibonaci();
  int j,t,n,k;

   for(j=0;j<i;j++)
        printf("%lld ",a[j]);



  return 0;
}
