#include <iostream>

using namespace std;

long gcd(long a, long b) {
	if (! a) {
		return b;
	}
	
	return gcd(b % a, a);
}

int main() {
	long t;
	scanf("%ld", &t);
	
	while (t--) {
		long n, q;
		scanf("%ld %ld", &n,&q);
	
		long a[n];
		long b[n];
		long c[n];
			
		for (long i = 1; i <= n; i++) {
			scanf("%ld", &a[i]);
			
			b[i] = 0;
			c[i] = 0;
		}
	
		b[1] = a[1];
		c[n] = a[n];
	
		long g = b[1];
	
		for (long i = 2; i <= n; i++) {
			g = gcd(g, a[i]);
			b[i] = g;
		}
	
		g = c[n];
	
		for (long i = n - 1; i > 0; i--) {
			g = gcd(g, a[i]);
			c[i] = g;
		}
	
		while (q--) {
			long l, r;
			scanf("%ld %ld", &l, &r);
		
			if (l != 1 && r != n) {
				printf("%ld\n", gcd(b[l - 1], c[r + 1]));
			} else if (l != 1 && r == n) {
				printf("%ld\n", b[l - 1]);
			} else {
				printf("%ld\n", c[r + 1]);
			}
		}
	}
	
	return 0;
}