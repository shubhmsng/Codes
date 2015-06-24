#include<stdio.h>

main(){
	long long int i,j,p=0,min,n;
		printf("enter size of array:");
		scanf("%lld",&n);
		long long int arr[n];
		printf("enter elements of the array:");
		
		for(i=0;i<n;i++)
		scanf("%lld",&arr[i]);
		
		for(i=0;i<n;i++)
		{	min=arr[i];
			for(j=i+1;j<n;j++)
			{	if(min>arr[j])
				{	min=arr[j];
					p=j;
				}
				
			}
		if(p!=0){
		arr[p]=arr[i];
		arr[i]=min;
		}
		p=0;
		}
		
		for(i=0;i<n;i++)
		printf("%lld\t",arr[i]);
		
return 0;
}
	