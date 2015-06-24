#include<stdio.h>

main(){
	long int p,n;
	short int t,i;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	
		scanf("%d",&n);
		p=n*(n-1)/2;
		printf("%d",p);
		printf("\n");
	}
return 0;

}