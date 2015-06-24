#include<stdio.h>
int main(){
int i,j;
for(i=0;i<4;i++){
for(j=0;j<5;j++){
if(i==0||i==3)
printf("#");
else{
printf("#");
break;
}
}
printf("\n");
}
for(i=0;i<3;i++){
for(j=0;j<4;j++){
if(i==2)
printf("#");
else{
printf(" ");
if(j==3)
printf("#");
}
if(i==2&&j==3)
printf("#");
}
printf("\n");
}
return 0;
}


