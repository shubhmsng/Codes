#include<stdio.h>
#include<string.h>
int plndrm(char s[],int l)
{       int i,c=0,j,k,a,b;
        for(i=0;i<l/2;i++)
        {
            if(s[i]!=s[l-i-1])
            {
                j=s[i];
                k=s[l-i-1];

                if(j>k)
                {
                    c=c+j-k;
                }
                else
                    c=c+k-j;
            }
        }
    return c;
}


int main()
{
        int i,t,n,j,k,l;
        char s[10001];
        scanf("%d",&t);
        while(t--)
        {

            scanf("%s",s);
            l=strlen(s);

            printf("%d\n",plndrm(s,l));
        }
        return 0;

}
