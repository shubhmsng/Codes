#include<stdio.h>

int main(){
int i,j=0,a=1;
for(i=1;i<=4;i++){
for(j=0;j<7;j++){


if(i==1){
printf("\t");
if(j==3){
printf("%d",a);
a++;}}


if(i==2){
printf("\t");
if(j==2||j==4){
printf("%d",a);
a++;
}
}


if(i==3){
printf("\t");
if(j=1||j==3||j==5){
printf("%d",a);
a++;
}
}


if(i==4){
if(j==0||j==2||j==4||j==6){
printf("%d",a);
a++;
}
printf("\t");
}

}

printf("\n");
}
return 0;
}




