#include<stdio.h>
int add(int x, int y)
{
return printf("%*c%*c", x, ' ', y, ' ');
}

int main()
{
printf("Sum = %d", add(3, 4));
return 0;
}