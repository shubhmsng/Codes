#include<stdio.h>

main(){
		long int i,j=0,n,l=0;
			int m;
			scanf("%d",&m);
			scanf("%ld",&n);
			long int a[m*m];
			
			for(i=0;i<(m*m);i++)
			scanf("%d",&a[i]);
			
			for(i=0;a[i]<=n;i++)
			{	if(a[i]==n){
				printf("YES");
				l=1;
				break;
				}
				if(i==m*m)
				break;
				}
				
			if(l!=1)
			printf("NO");
			return 0;
			
}