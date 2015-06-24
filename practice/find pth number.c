#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k,n,p;
    scanf("%d",&t);
    while(t--)
    {   char s[5];
        scanf("%d%s%d",&n,s,&p);
        if(s[0]=='e')
        {
            printf("%d\n",2*p-1);
        }
        else
            printf("%d\n",2*p);
    }

    return 0;
}
