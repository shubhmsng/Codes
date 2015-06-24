#include<stdio.h>

#define f(x) ((x*x*x)-(4*x)-9)
#define e 0.00001
main(){

float a,b,x;
int i=1;
printf("enter the interval of root:\n");
printf("a:");
scanf("%f",&a);
printf("b:");
scanf("%f",&b);

x=b-((b-a)/(f(b)-f(a))*f(b));
printf("%d approximation of the root:%f",i,x);
printf("\tf(x)=%f",f(x));
i++;
printf("\n");
while((x-b)>e||(x-b)<-e){
a=b;
b=x;
x=b-((b-a)/(f(b)-f(a))*f(b));
printf("%d approximation of the root:%f",i,x);
printf("\tf(x)=%f",f(x));
i++;
printf("\n");
}

printf("real root of the equation :%f",x);

return 0;
}