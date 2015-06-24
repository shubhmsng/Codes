#include<stdio.h>
typedef long long int L;
L gcd(L a,L b)
{
	if(a%b==0)
	return b;
	else
	gcd(b,a%b);
}

int main()
{
	L t,n,l,r,q,i;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&q);
		L a[n+1];
		L b[n];
		L c[n];
		for(i=1;i<=n;i++){
		scanf("%lld",&a[i]);
			b[i] = 0;
			c[i] = 0;
		}
		
		b[1]=a[1];
		
		for(i=2;i<=n;i++)
			b[i]=gcd(b[i-1],a[i]);
		
		c[n]=a[n];
		
		for(i=n-1;i>=1;i--)
			c[i]=gcd(c[i+1],a[i]);
		
		while(q--)
		{	
			scanf("%lld%lld",&l,&r);
			
		
			if (l != 1 && r == n)
			printf("%lld\n",b[l-1]);
			
			else if (l != 1 && r != n) 
			printf("%lld\n",gcd(b[l-1],c[r+1]));
			else
			printf("%lld\n",c[r+1]);
			
		}
	}
return 0;
}
