#include<stdio.h>

int main()
{
	long long int t,n,i,j,k;
	scanf("%lld",&t);
	
	for(i=0;i<t;i++){
			
			scanf("%lld",&n);
			long long int a[n];
			
			for(j=0;j<n;j++){
				scanf("%lld",&a[j]);
			/*	if(j%2!=0 && j!=0){
					if(a[j-1]>a[j]){
					k=a[j];
					a[j]=a[j-1];
					a[j-1]=k;
					}
				
				}*/
			}
			
		 for(j=1;j<n;j+=2)
		{   k=0;
				if(a[j]<a[j-1])
				{ k=a[j];
                a[j]=a[j-1];
                a[j-1]=k;
				}
			if(a[j]<a[j+1])
               { k=a[j];
                  a[j]=a[j+1];
                  a[j+1]=k;
               }
           printf("%lld %lld ",a[j-1],a[j]);
       } 
	   if(n%2!=0) 
	   printf("%lld",a[n-1]);

			/*for(j=0;j<n;j++)
			printf("%d ",a[j]);*/
			
			printf("\n");
	}
	
	return 0;
}