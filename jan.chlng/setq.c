#include<stdio.h>
typedef long long int L;
 int i=0;
int substr(L c[],L low,L high)
{
     int p;
    if(low==high)
        return c[high];
    else
        p=(c[low]+substr(c,low+1,high));
    return p;
}
int main( )
{
    L j,k,n,q,d=0;
    scanf("%lld%lld",&n,&q);
    char c[n+1];
    L s[n+1];
    L p[n][n];
    scanf("%s",c);
    for(j=0; j<n; j++)
        s[j]=c[j]-48;
     for(j=0; j<n; j++)
           {    i=0;
                for(k=0; j+k<n; k++)
                {
                    p[j][i]=substr(s,k,j+k);
                    i++;
                }
           }


    while(q--)
    {   if(d==1){
        for(j=0; j<n; j++)
           {    i=0;
                for(k=0; j+k<n; k++)
                {
                    p[j][i]=substr(s,k,j+k);
                    i++;
                }
           }
    }
        L t,l,r,x=0,y=0;
        scanf("%lld%lld%lld",&t,&l,&r);
        if(t==1)
        {
            s[l-1]=r;
            d=1;
        }
        if(t==2)
        {    for(j=0;j<=r-l;j++)
        {
                for(k=l-1;k<r-j;k++)
                {
                    if(p[j][k]%3==0)
                        y++;
                }

        }

            d=0;
            printf("%lld\n",y);
        }

    }
    return 0;

}
