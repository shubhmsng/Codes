#include<stdio.h>
#define f(x) ((x*x*x)-(4*x)-9)
#define f1(x) ((3*x*x)-4)
#define e 0.00001
main(){
float a,x;
int i=1;
printf("enter the first approximation:");
scanf("%f",&a);
printf("\n");
x=a-(f(a)/f1(a));
printf("%dapproximation of the root:%f",i,x);
printf("\tf(x)=%f",f(x));
i++;
printf("\n");
while(f(x)>e||f(x)<-e){
a=x;
x=a-(f(a)/f1(a));
printf("%dapproximation of the root:%f",i,x);
printf("\tf(x)=%f",f(x));
i++;
printf("\n");
}
printf("\n");
printf("root of the equation is:%f",x);
return 0;
}

