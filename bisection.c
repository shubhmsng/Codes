#include<stdio.h>
#include<math.h>
#define f(x) ((x*x*x)-(4*x)-9)
#define e 0.00001
 main(){
	float x0,x1,x2;
	int i=1,n;
	retry:
	printf("enter the interval of root:\n");
	printf("a:");
	scanf("%f",&x0);
	printf("b:");
	scanf("%f",&x1);
	if((f(x0)<0&&f(x1)<0)||(f(x0)>0&&f(x1))>0){
	printf("\nsign of f(x) for points (a,b) is same please retry");
	printf("\n");
	goto retry;
	}
	
	x2=(x1+x0)/2.00;
	
	while(f(x2)>e||f(x2)<-e){
	x2=(x1+x0)/2.00;
	if(f(x0)<0.00&&f(x2)>0.00)
	x1=x2;
	if(f(x2)<0.0&&f(x1)>0.00)
	x0=x2;
	printf("%d approximation of the root:%f",i,x2);
	printf("\tf(x)=%f",f(x2));
	printf("\n");
	i++;
	}
	printf("\n");
	printf("real root of the equation is:%f",x2);

	return 0;
}
	
	