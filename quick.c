#include<stdio.h>
int c=0;
int split(int*,int,int);
main()
{	
	int i,n;
		
		printf("how many elements u want in array:");
		scanf("%d",&n);
		int count=0;
		int arr[n];
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
		void quicksort(int*,int,int);
		quicksort(arr,0,n-1);
		
		for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
		
		printf("\n");
		printf("loop->%d",c);
		
		return 0;
}

void quicksort(int z[],int lower,int upper)
{
	int i;
	if(upper>lower)
	{
		
		i=split(z,lower,upper);
		quicksort(z,lower,i-1);
		quicksort(z,i+1,upper);
		
	}
}

int split(int z[],int lower,int upper)
{

int i,a,b,t;
a=lower+1;
b=upper;
i=z[lower];
while(b>=a)
{
	while(z[a]<i)
		{a++;
			c++;
			}
		while(z[b]>i){
		
		b--;
		c++;
		}
		if(b>a)
		{
			t=z[a];
			z[a]=z[b];
			z[b]=t;
			}
	c++;
	}
	t=z[lower];
	z[lower]=z[b];
	z[b]=t;
	return b;
}








