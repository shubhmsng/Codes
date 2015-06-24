#include<stdio.h>
struct s{
char c;
char i;
double j;
char a;
char b;
char l;
char k;
char m;
//printf("c=%d i=%d j=%d a=%d b=%d l=%d k=%d",&c,&i,&j,&a,&b,&l,&k);

};
int main(){

printf("sizeof s:%d",sizeof(struct s));
return 0;
}
