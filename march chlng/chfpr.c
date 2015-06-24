#include <stdio.h>

int main() {
	// your code goes here
	int n,m,k,i,j,c,d,l,r,max;
    int a[n];
	scanf("%d%d%d",&n,&m,&k);
	for (i = 0; i< n; i++)
	    scanf("%d",&a[i]);
	while(k--){
	    scanf("%d%d",&l,&r);
	    max = 0;
	    for (i = l-1; i < r; i++ ){
	        j = l-1;
	        c = 0;
	        while(j < r){

	            if (a[i] == a[j]){
	                c = j;

	            }
	            j++;
	        }
	        d = c - i;
	        if(d > max)
	        max = d;
	    }
	   printf("%d",max);
	}

	return 0;
}

