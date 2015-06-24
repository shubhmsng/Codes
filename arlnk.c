#include<stdio.h>

main()
{
	int *link[100],info[100],i,j=0,n;
	printf("enter no. of nodes:");
	scanf("%d",&n);
	printf("\nenter the elements of the nodes:");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&info[i]);
		link[i]=&info[i];
	}
	link[i]=NULL;

	printf("\n");
	
	while(link[j]!=NULL)
	{
		printf("%d-->",*link[j]);
		
		j++;
	}
	printf("NULL");	
	return 0;

	}
		
		
		
	
	
	

	