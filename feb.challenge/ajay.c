#include<stdio.h>

long int fact(long int x)
{
    if(x>1)
     return x*fact(x-1);
	else
     return 1;
}
long int F(long int x,long int n)
{   if(x>0)
     return x*(fact(x)+n)+F(x-1,n);
    else
     return 0;
}
int main()
{ long int n,m,a[10000],i,j,sum=0;
scanf("%ld %ld",&n,&m);
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
n=0;
while(n<i)
{
 sum=sum+F(a[n],a[n]);
 //printf("sum=%d\n",sum);
 n++;
}
m=sum%m;
printf("%ld",m);
return 0;
}
