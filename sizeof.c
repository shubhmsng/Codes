#include<stdio.h>
struct  ABC{
    int a;
    float b;
    char c;
};
int main(){
	int i;
    struct ABC abc;
	struct ABC *ptr,*ptr2,*ptr3;
	ptr=&abc;
	for(i=0;i<20;i++)
    printf("Size of structure is: %d %d %d\n",*ptr,*(ptr+i),*(ptr));
    return 0;
}