#include<stdio.h>
int main(void)
{
    long long int s,f,c,t,i,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&s);
        f=(n*(n+1))/2;
        if(s==n)
            c=n-1;
        else if(s==f)
            c=0;
        else
        {   c=0;
            s=s-n;
            for(i=1; i<n; i++)
            {
                s=s-i;
                if(s<0)
                    c++;
            }
        }
        printf("%lld\n",c);
    }
    return 0;
}
