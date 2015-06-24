#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    int *p[6];
    scanf("%d%d%d",&i,&j,&k);
    p[0]=&i;printf("  %d\n",&i);
    p[1]=&j;printf("  %d\n",&j);
    p[2]=&k;printf("  %d\n",&k);
    for(m=0;m<3;m++)
        printf("%d ",p[m]);
    return 0;
}
