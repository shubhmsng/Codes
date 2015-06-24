#include<stdio.h>

int n;
int arthmc(int a[],int i)
{
if(i==0){
return a[0];
}
else
    return (a[i]+arthmc(a,i-1));

}
main(){
int a[]={20,10};
int i;

  printf("%d",arthmc(a,1));
return 0;
}


