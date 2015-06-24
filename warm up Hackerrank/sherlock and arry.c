#include<stdio.h>


int main()
{
    int t,n,k,i,j,m,n;
    scanf("%d",&t);
    while(t--)
    {
        int p=0;
        scanf("%d",&n);
        int a[n];
        int l[n];
        int r[n];

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        l[1]=a[0];
        r[n-2]=a[n-1];
        for(i=2;i<=n-2;i++)
            l[i]=l[i-1]+a[i-1];
        for(i=n-3;i>=1;i--)
            r[i]=r[i+1]+a[i+1];
        for(i=1;i<=n-2;i++)
        {
            if(l[i]==r[i])
            {
              p=1;
              break;
            }
        }
        if(p)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;

}
