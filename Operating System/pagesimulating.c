#include<stdio.h>
#include<stdlib.h>

int main()
{
	int np,ps,i;
	printf("enter how many pages\n");
	scanf("%d",&np);
	printf("enter the page size \n");
	scanf("%d",&ps);
	int sa[np];
	for(i=0;i<np;i++)
	{
		sa[i]=(int)malloc(ps);
		printf("page%d\t address %u\n",i+1,sa[i]);
	}
	return 0;
}


