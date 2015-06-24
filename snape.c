#include<stdio.h>
#include<math.h>
main(){

int t,d,b,a,c,i;
float min,max;
scanf("%d",&t);
for(i=0;i<t;i++){

	scanf("%d%d",&d,&b);
	a=b*b-d*d;
	min=pow(a,0.5);
	c=b*b+d*d;
	max=pow(c,0.5);
	
	printf("%f %f",min,max);
	printf("\n");
}
return 0;
}