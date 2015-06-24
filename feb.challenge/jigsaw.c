#include<stdio.h>
#include<math.h>
int main()
{
    int h,w,i,j,k,p,x,y;
    scanf("%d%d%d",&h,&w,&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&p);
        for(j=0;j<p;j++)
        scanf("%d",&x,&y);
    }
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
            printf("%d ",rand()%9);
        printf("\n");
    }
    return 0;
}
