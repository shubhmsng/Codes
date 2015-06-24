#include <stdio.h>
#include<string.h>

struct s1
{
	int a;
	char b;
	int c;
	char d;
	float e;
};

struct s2
{
	char a;
	float b;
	int c;
	int d;
	char e;
};

struct s3
{
	
	char b;
	int c;
	int d;
	float e;
};

struct s4
{	int a;
	char b;

	int e;
	double c;
};

int main()
{
	printf("sizeof(s1) = %d\n\n", sizeof(struct s1));
	printf("sizeof(s2) = %d\n\n", sizeof(struct s2));
	printf("sizeof(s3) = %d\n\n", sizeof(struct s3));
	printf("sizeof(s4) = %d\n\n", sizeof(struct s4));
	
	return 0;
}