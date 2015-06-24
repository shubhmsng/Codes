#include<stdio.h>
struct s{

int b;
float e;
char c,a,d,f,g;

//printf("c=%d i=%d j=%d a=%d b=%d l=%d k=%d",&c,&i,&j,&a,&b,&l,&k);

};
int main(){

printf("sizeof s:%d",sizeof(struct s));
return 0;
}
