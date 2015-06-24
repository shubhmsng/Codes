#include<stdio.h>
int main()
{
    int t,n,i,j,k,l,m;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        if(n==1||n==2||n==0||n==4||n==7||n==8)
            printf("-1\n");
        else if(n%3==0)
        {
            for(i=0;i<n;i++)
                printf("5");
            printf("\n");
        }
        else if(n%5==0)
        {
            for(i=0;i<n;i++)
           printf("5");
           printf("\n");
        }
        else
        {
            i=0;
            m=n-i;
            i++;
            while(m>=0)
            {
                m=n-(5*i);
                if(m%3==0)
                    break;
                i++;
            }
            if(m==0)
            printf("-1");
            else
            {
                l=n-m;
                for(i=0;i<m;i++)
                printf("5");

                for(i=0;i<l;i++)
                printf("3");

            }

            printf("\n");
        }
    }

    return 0;

}
