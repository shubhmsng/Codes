#include<stdio.h>

int main()
{

    long long int t,n,r,s,i;
    scanf("%lld",&t);
    while(t--)
    {
        s=0;
        r=0;
        int p=0;
        scanf("%lld",&n);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            s=s+a[i];
            if(a[i]>0)
                r++;
            if(a[i]>100)
                p=1;

        }
        if(p==1)
        {
            printf("NO\n");
            continue;
        }
        if(s<100)
        {
            printf("NO\n");

        } else if (s<100+r)
            printf("YES\n");

        else
            printf("NO\n");
    }

    return 0;
}


