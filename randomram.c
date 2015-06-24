#include<stdio.h>

main(){
		int t,s,i,k,arr[11];
		int l=1,m=0;
		long long int a,j,n;
		scanf("%d",&t);
		
		for(i=0;i<t;i++){
		
			scanf("%lld",&a);
			for(j=a;j>=1;j=j/10)
			{	n=j;
				n=n%10;
				arr[m]=n;
				m++;
				
			}
			
			
			for(k=m-1;k>0;k--){
			
			s=arr[k]*10+arr[k-1];
			
			if(s<27)
			l++;
			}
			
			printf("%d",l);
			
			l=1;
			m=0;
			if(i!=(t-1))
			printf("\n");
	}
	
	
	
	return 0;
}
			
			