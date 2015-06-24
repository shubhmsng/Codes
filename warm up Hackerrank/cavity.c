#include<stdio.h>
int main()
{
    int t,i,j,k,l,m,n;
    scanf("%d",&n);
    char c[n][n];
    int a[n][n];
    char ch='1';
    for(i=0;i<n;i++)
    {
        for(j=0;ch!='\n';j++)
            {
                scanf("%c",&c[i][j]);
                ch=c[i][j];
            }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
           a[i][j]=c[i][j]-48;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[i][j]>a[i][j+1])
                printf("X");
            else
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
