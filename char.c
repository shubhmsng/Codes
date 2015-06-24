#include <stdio.h>

int main()
{
	char in;
	int sp = 0;
	int tc = 0;
	
	while (in = getchar()) {
		if (in != 10) {
			tc += 1;
			sp += (in == 32) ? 1 : 0;
		} else {
			break;
		}
	}
	
	printf("%d\n", tc - sp);
	
	return 0;
}