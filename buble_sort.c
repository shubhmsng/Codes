#include<stdio.h>
#include<stdlib.h>
main()
{
	int b,i,j,k,n;
	
	printf("enter no. of nodes:");
	scanf("%d",&n);
	int a[n];
	printf("\n");
	for(i=0;i<n;i++)
	a[i]=rand();
	
	
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	
		printf("\narray after sorting:\n");
for(i=0;i<n;i++)
{
			for(j=0;j<n-1;j++)
			
			{	if(a[j]>a[j+1])
				{	k=a[j];
					a[j]=a[j+1];
					a[j+1]=k;
					}
			}
}
for(i=0;i<n;i++)
	printf("%d  ",a[i]);

	return 0;
	
	
	}	
	
	
	
	






