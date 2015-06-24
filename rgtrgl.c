#include<stdio.h>
main(){

int i,j=0,n,x1,y1,x2,y2,x3,y3;
int b1,b2,b3;
int a1,a2,a3;
scanf("%d",&n);

for(i=0;i<n;i++){

	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	
	a1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	
	a2=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
	
	
	a3=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);

	
	b1=a2+a3;
	b2=a3+a1;
	b3=a1+a2;
	
	if(a1==b1||a2==b2||a3==b3)
	j++;
	
	
	
	
}	
	printf("%d",j);
	return 0;
}