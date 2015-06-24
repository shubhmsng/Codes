#include<stdio.h>
int fact(int n)
{
        if(n==1)
        return 1;
        else
        return n*fact(n-1);
}

int main()
{
    int i,m,n,f,sum=0,fsum=0,j;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        fsum=0;
        for(j=1;j<=a[i];j++)
        {
            f=j*(fact(j)+a[i]);
            fsum=fsum+f;

        }

        sum=sum+fsum;

    }
    printf("%d",(sum%m));
    return 0;
}
