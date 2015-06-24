#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j,k;
    scanf("%d",&t);
    char s[100001],ch,ch1;
    while(t--)
    {   int f=0,c=0;
        scanf("%s",s);
        k=strlen(s);
        ch='+';
        ch1='-';
        for(i=0;i<k;i++)
        {
            if(i%2==0)
            {
                if(s[i]!=ch1)
                c++;
            }
            else
            {
                if(s[i]!=ch)
                c++;
            }
        }
        for(i=0;i<k;i++)
        {
            if(i%2==0)
            {
                if(s[i]!=ch)
                    f++;
            }
            else
            {
                if(s[i]!=ch1)
                    f++;
            }
        }
        if(c>f)
            printf("%d\n",f);
        else
            printf("%d\n",c);
    }
    return 0;
}
