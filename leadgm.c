#include<stdio.h>
main(){
		int t,i,j=1,k=2,p1,p2,r=0,s=0;
	scanf("%d",&t);
	int p=0,q=0;
	
	for(i=0;i<t;i++){
		scanf("%d%d",&p1,&p2);
		p=p+p1;
		q=q+p2;
		
		if(p>=q){
			if(r<(p1-p2))
			r=p1-p2;
			}
		else{
		if(q<p2-p1){
			if(s<(p2-p1))
			s=p2-p1;
			}
		}
	}
	if(r>=s)
	printf("%d %d",j,r);
	else
	printf("%d %d",k,s);
	printf("\n");
	return 0;
	
	}
	
	
	
	