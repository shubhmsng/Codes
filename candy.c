#include<stdio.h>
 
 int main(){
 
	int n,m,t,j,s=0,c[100],k=0,l,i;
	long long int b;
	
	scanf("%d\n",&t);
	
	for(i=0;i<t;i++){
		
		scanf("%d",&m);
		
		scanf("%d",&n);
		
		for(j=0;j<m;j++){
		scanf("%lld",&b);
		s=s+b;
		}
		c[k]=s/n;
		k++;
		s=0;
	}
	for(l=0;l<k;l++)
	printf("%d\n",c[l]);
	
	
	return 0;
	
}


