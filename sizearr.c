#include<stdio.h>

main(){

int a[5],*p,*q,i,s=0;

for(i=0;i<5;i++)
scanf("%d",&a[i]);

p=&a[0];
for(i=0;i<5;i++){
s=s+*p;
p++;
}
printf("\nsum%d",(s));

return 0;
}


