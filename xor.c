#include <stdio.h>

int main()
{
	int a[] = {1, 3, 4, 5, 1, 3, 4, 5, 6, 7, 8, 7, 8, 9, 9, 10, 10};
	int n = sizeof(a) / sizeof(int);
	
	int b = 0;
	
	for (int i = 0; i < n; i++) {
		b ^= a[i];
	}
	
	printf("%d\n", b);
	
	return 0;
}