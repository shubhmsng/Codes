#include<stdio.h>
#define f(x) ((x*x*x)-(4*x)-9)
#define e 0.00001
main(){
	float a,b,x,x0,x1;
	int i=0;
	retry:
	printf("enter the interval of root:\na:");
	scanf("%f",&x0);
	printf("\nb:");
	scanf("%f",&x1);
	
		if(f(x0)<0&&f(x1)>0){
		a=x0;
		b=x1;
		}
		if(f(x0)>0&&f(x1)<0){
		a=x1;
		b=x0;
		}
	
	if((f(x0)<0&&f(x1)<0)||(f(x0)>0&&f(x1))>0){
	printf("\nsign of f(x) for points (a,b) is same please retry");
	printf("\n");
	goto retry;
	}
	x=b-((b-a)/(f(b)-f(a))*f(b));
	
	printf("%d approximation of the root:%f",i,x);
	printf("\tf(x)=%f",f(x));
	i++;
	printf("\n"); 
	while(f(x)>e||f(x)<-e){
	
	if(f(x)>0)
	b=x;
	if(f(x)<0)
	a=x;
	
	x=b-((b-a)/(f(b)-f(a))*f(b));
	printf("%d approximation of the root:%f",i,x);
	printf("\tf(x)=%f",f(x));
	i++;
	printf("\n");
	
	
	}
	printf("\n");
	printf("real root of the eqution:%f",x);
	
	return 0;

	}
	
	