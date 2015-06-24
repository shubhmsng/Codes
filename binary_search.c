#include <stdio.h>

int binary_search(int *a, int l, int r, int v) {
	if (l > r) {
		return -1;
	}
	
	int m = ceil((l + r) / 2);
	
	if (v == a[m]) {
		return m;
	}
	
	if (v > a[m]) {
		binary_search(a, m + 1, r, v);
	} else {
		binary_search(a, l, m - 1, v);
	}
}

int main()
{
	int a[8] = {1, 2, 3, 7, 8, 11, 13, 19};
	int v = 8;
	
	printf("%d", binary_search(a, 0, 7, v));
	
	return 0;
}