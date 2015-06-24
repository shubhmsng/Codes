#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   long long int t,n,k,a,b,i,j=0;
    scanf("%lld",&t);
    long long int arr[t];
    for(i=0;i<t;i++)
       arr[i]=0;
    scanf("%lld",&n);
    while(n>0)
        {
            scanf("%lld%lld%lld",&a,&b,&k);
            for(i=a-1;i<b;i++)
                arr[i]=arr[i]+k;
                n--;
    }
    for(i=0;i<t;i++)
        {
            j=j+arr[i];
    }
    printf("%lld",(j/t));
    return 0;
}
