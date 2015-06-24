#include<stdio.h>

int mul(long long int n){
long long int s=1,i; 
while(n>=1)
	{	
		for(i=0;i<n;i++)
			s=s*n;
		n--;
	}
	return s;
}


main(){
	long long int t,n,m,q,r,i,j,p;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{	scanf("%lld%lld%lld",&n,&m,&q);
		for(j=0;j<q;j++)
		{	
			scanf("%lld",&r);
			p=(mul(n)/(mul(n-r)*mul(r)))%m;
			printf("%lld\n",p);
		}
	}

	return 0;
}