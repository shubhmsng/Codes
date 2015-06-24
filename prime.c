#include<stdio.h>
#include<conio.h>
int main(){
int i,j=0,p;
scanf("%d",&p);
for(i=2;i<p;i++){
if(p%i==0)
j=1;
}
if(j==1)
printf("not prime");
else
printf("prime");
getch();
}


