#include<stdio.h>

int main()
{
    long long int t,n,i=0;
    scanf("%lld",&t);
    while(t--)
    {
       // scnaf("%d",&n);
        char a[100000];
        int b[10000];
        scanf("%s",a);

        scanf("%lld",&n);

        for(i=0;i<n;i++)
        scanf("%lld",&b[i]);
        i=0;
        while(a[i]!='\0')
        {
          printf("%c",a[i]);
          i++;
        }
        //printf("%s",a);
        printf("\n");

        }
   return 0;
}
