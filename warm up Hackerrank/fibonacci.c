#include<stdio.h>
int i=0;
long int a[100001];

void fibonaci()
{   a[0]=0;
    a[1]=1;
    i=2;
    while(a[i-1]<1000001)
    {
        a[i]=a[i-1]+a[i-2];
        i++;
    }

}


int main()
{
    fibonaci();
  int j,t,n,k;
  scanf("%d",&t);
  while(t--)
  {  j=0;
     scanf("%d",&n);

    for(k=0;k<50;k++)
    {
        if(a[k]==n)
        {   j=1;
            break;
        }
    }

    if(j==1)
        printf("IsFibo\n");
    else
       printf("IsNotFibo\n");

  }
  return 0;
}
