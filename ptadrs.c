#include<stdio.h>

main()
{
int *p[5];
int q;
int i;
for(i=0;i<5;i++)
{
scanf("%d",&q);
p[i]=&q;
}
printf("adress of q:%d",&q);
printf("adress are:");
for(i=0;i<5;i++)
printf("%d  ",&p[i]);

return 0;

}



