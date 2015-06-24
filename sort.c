#include<stdio.h>
#include<stdlib.h>
main() 
{ 		
		int i,j,l,temp3,temp4,n,p,temp;
		
		printf("enter size of the array:");
		scanf("%d",&n);
		long long int count=0,k=0;
		int a[n];
			l=1;

		for(i=0;i<n;i++)
		a[i]=rand();
		
		printf("elements of the array:");
		
		for(i=0;i<n;i++)
		printf("%d   ",a[i]);
		temp=n;
		printf("\nelements of the array after sorting:\n");
		while(l==1){
		k=n;
		j=n-1;

		for(i=0;i<temp/2;i++)
		{
			if(a[i]>a[j])
			{
				temp3=a[i];
				a[i]=a[j];
				a[j]=temp3;
			
			}
			j--;
			count ++;
			
			
		}
		
		l=0;
	
		for(i=0;i<=k-2;i++)
		{
			if(a[i]>a[i+1])
			{
				temp4=a[i];
				a[i]=a[i+1];
				a[i+1]=temp4;
				l=1;
				
			}
			count++;
		}
		k--;
		
		temp--;
	
		}
		
		
		for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		printf("\n");
		printf("\nno->%lld",count);
		return 0;
}




		