#include<stdio.h>
int main()
{
    int t,n,k,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        int b[k];
        int s=0,sum=0;
        for(i=0;i<k;i++)
        {
            scanf("%d",&b[i]);
            sum=sum+b[i];
        }
        for(i=1;i<=n;i++)
        {
            s=s+i;
        }

        if((s-sum)%2==0)
            printf("Chef\n");
        if((s-sum)%2!=0)
            printf("Mom\n");

    }
    return 0;
}
