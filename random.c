#include<stdlib.h>
#include<stdio.h>

main()
{		
	int i,j;
		i=rand();
		printf("%d",i);
		for(j=0;j<i;j++)
		{	i=rand();
			printf("%d\n",i);
			if(i%2==0)
			printf("even");
			else
			printf("odd");
			printf("\n");
			}
	return 0;
}