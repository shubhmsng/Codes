#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
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
        cin>>s;

        while(s[i]!='\0')
        {
            a=0;
            b=0;
            while((s[i]>=47&&s[i]<58))
            {
                a=a*10+(s[i]-'0');
                i++;
            }

            while(s[i]=='*')
            {

                i++;
            }

            while((s[i]>=47&&s[i]<58))
            {
                b=b*10+(s[i]-'0');
                i++;
            }


            n[j]=pow(a,b);
            j++;
            i++;
        }
        for(i=0;i<j;i++)
        {
           q=q*n[i];
        }
        printf("%ld\n",(q%m));
    }
    return 0;
}
