#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,i,j,k,l,m,n;
    scanf("%d",&n);
    char c[n][n];
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                cin>>c[i][j];
            }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        a[i][j]=c[i][j]-48;


    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>a[i][j+1]&&j!=n-1)
                printf("X");
            else
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
