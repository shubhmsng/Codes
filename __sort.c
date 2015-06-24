#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}
	static int t = 0;
void sort(int *a, int n) {

	static int r = 0;

	int i;

	int m = n / 2;

	for ( i = 0; i <= m; i++) {
		if (a[i] > a[n - 1 - i]) {
			swap(&a[i], &a[n - 1 - i]);
		}
	}

	int c = 0;

	for ( i = 0; i < n - 1 - r; i++) {
		if (a[i] > a[i + 1]) {
			swap(&a[i], &a[i + 1]);

			c++;
		}
	}

	if (! c) {
		printf("%d\n", t);

		for ( i = 0; i < n; i++) {
			printf("%d\n", a[i]);
		}



		return;
	}

	t++;
	r++;

	sort(a, n);
}

int main()
{	int n;
	//printf("enter size of stack");
	scanf("%d",&n);

	int i=0;
	int b=n;
	int a[n];

	while(n--){
    scanf("%d",&a[i]);
	i++;
	}
	i=0;
//	printf("elements in stack");
//	while(b--){
//	printf("%d   ", a[i]);
	//i++;
//	}
	sort(a, sizeof(a) / sizeof(int));

	//printf("value of t = %d\n", t);

	return 0;
}
