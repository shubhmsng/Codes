#include <stdio.h>
int main()
{
    int i,j,n,m,l,x=0,p;
    int max=0,y=0;
    int k[100000];
    scanf("%d%d",&n,&m);
    char s[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%c",&s[i][j]);
        }
    }
    for(i=0; i<n-1; i++)
    {
        for(l=i+1; l<n; l++)
        {
             p=0;
            for(j=0; j<m; j++)
            {
                if((s[i][j]=='1')||(s[l][j]=='1'))
                    p++;
            }
            k[x]=p;
            x++;
        }
    }

    for(i=0; i<x; i++)
    {
        if(k[i]>max)
            max=k[i];
    }
    for(i=0; i<x; i++)
    {
        if(k[i]==max)
            y++;
    }
    printf("%d\n%d",max,y);
    return 0;
}
