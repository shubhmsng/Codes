#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, i, j;
    unsigned int n,m;
    scanf("%d",&t);
    while(t--){
        scanf("%u",&n);
        j = ~n;
        printf("%u\n",j);
    }
    return 0;
}
