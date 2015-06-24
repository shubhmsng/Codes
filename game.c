#include<stdio.h>
#include<math.h>
long long int a[100001];
int main()
{
    long long int flag,j,sum,i,m,t,n,temp;
    scanf("%lld",&t);
    while(t--)
    {
        flag = 0,j=0,sum = 0;
        scanf("%lld",&n);

        for(i = 0; i < n; i++)
         scanf("%lld", &a[i]);
        while(!flag)
        {
                 for(i = 0; i < n+j; i++)
                 {
                     temp = abs (a[i]-a[n+i-1]);

                     for( m = 0; m < n+j; m++)
                     {
                         if (temp == a[i])
                            flag = 1;
                        }
                     if(!flag)
                     {
                         a[n+j] = temp;
                     }
                   printf("temp = %lld j = %lld",temp,j);
                 }
                j++;
            }
       for(i = n; i < n+j; i++)
       {

           sum += a[i];

       }
      // for(i = 0; i < n+j; i++)
      //      printf("%lld ",a[i]);

       // printf("\n");
       if(j%2==0)
       {
           printf("Joey %lld\n",sum);
       }
       else
        printf("Chandler %lld\n",sum);
    }
    return 0;
}
