#include<stdio.h>
int main()
{

    int t,i,j,k,l,f,min,a[10];
    scanf("%d",&t);
    while(t--)
    {   min=10001;
        for(i=0;i<10;i++)
            scanf("%d",&a[i]);
        for(i=0;i<10;i++)
        {
            if(a[i]<min)
            {

                 min=a[i];
                f=i;
            }
        }
        if(f==0)
        {
                printf("1");
                for(i=0;i<=min;i++)
                printf("0");
                printf("\n");

        }
        else
        {
            for(i=0;i<=min;i++)
                printf("%d",f);
            printf("\n");
        }
    }
    return 0;
}
