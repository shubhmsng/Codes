#include<stdio.h>

main(){

	int i,t,n,l=0,k,m;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int a[n],j=0;
		
		while(n>=0){
			
			scanf("%d",&a[j]);
			j++;
			n--;
			}
		for(k=0;k<j;k++){
			for(m=k+1;m<j;m++){
			if((a[k]+a[m])==0)
			l++;
			}
		}
		
		printf("%d",l);
		
		}
		return 0;
		
}