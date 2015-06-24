#include<stdio.h>
main(){
int arr[6],i,*p,k;
char c;
printf("enter elements");
for(i=0;i<5;i++)
scanf("%d",&arr[i]);
while(1){
printf("enter element which position you want to find:");
scanf("%d",&k);

for(i=0;i<5;i++){
if(arr[i]==k){
p=&arr[i];

printf("%d",p);}

}
printf("will u want to continue(y/n):");
scanf("%c",&c);
if(c=='n'||c=='N')
break;
}

return 0;
}