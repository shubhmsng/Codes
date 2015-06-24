#include<stdio.h>

main(){
int i,t,n;
scanf("%d",&t);
for(i=0;i<t;i++){

scanf("%d",&n);

char s[n];

scanf("%s",s);

if(s[0]=='R')
printf("Rounak");

if(s[0]=='G')
printf("Sanchit");

printf("\n");

}
return 0;

}

