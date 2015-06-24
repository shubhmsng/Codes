#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		int n;
		scanf("%d", &n);
		
		int c[100011] = {0};
		
		int i;
		for (i = 0; i < n; i++) {
			int a;
			scanf("%d", &a);
			
			c[a]++;
		}
		
		int res = 0;
		
		for (i = 0; i < 100011; i++) {
			if (c[i]) {
				res++;
			}
		}
		
		printf("%d\n", res);
	}
	
	return 0;
}