#include<stdio.h>

main(){

long long int n,i;
int t,j,l=0,p=0;

scanf("%d",&t);

for(j=0;j<t;j++){

		scanf("%lld",&n);
		if(n==4){
		printf("0");
		goto retry;
		}
		if(n%7==0)
		printf("%d",n);
	
		else{
		
			for(i=7;i<n;i=i+7){
				if((n-i)%4==0){
				l=1;
				p=i;
				}
			}
			
			if(l==0)
			printf("-1");
			else
			printf("%d",p);
		}
	
		retry:
		l=0;
		if(j!=(t-1))
		printf("\n");
	}
return 0;
}