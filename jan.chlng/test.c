#include<stdio.h>

int substr(int c[],int low,int high)
{   int p;
    if(low==high)
    return c[high];
    else
    p=(c[low]+substr(c,low+1,high));
    return p;
}

int main()
{
    int j,k,q,x;
      scanf("%d",&q);
    char s[q];
    int c[q];
        scanf("%s",s);
        for(j=0;j<q;j++)
        {
            c[j]=s[j]-48;
          //  printf("%d",c[j]);
        }

    for(j=0;j<q;j++)
    {
        for(k=0;j+k<q;k++)
        {
            x=substr(c,k,j+k);
           printf("%d\n",x);

        }
    }

    return 0;

}
