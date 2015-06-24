#include<stdio.h>
#include<string.h>
long int pow(long int a,long int b)
{
    long int i=1,m=1;
    for(i=1;i<=b;i++)
    {
        m=m*a;
    }
    return m;
}

int main()
{
    long int t,i,a,b,n[10000],p[10000],m,q,c;
    char s[10001];
    scanf("%ld",&t);
    while(t--)
    {   long int j=0;
        q=1,c=0;
        i=0;
        scanf("%ld",&m);
        do{
            scanf("%c",&s[c]);
            c++;
        }while(s[c-1]!='\n');

        while(s[i]!='\0')
        {
            a=0;
            b=0;
            while(s[i]!='*')
            {
                a=a*10+(s[i]-48);
                i++;
            }
            i++;
            while(s[i]!='*')
            {
                b=b*10+(s[i]-48);
            }
            n[j]=pow(a,b);
            j++;
        }
        for(i=0;i<j;i++)
        {
           q=q*n[i];
        }
        printf("%ld\n",(q%m));
    }
    return 0;
}
