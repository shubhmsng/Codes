#include<stdio.h>
typedef long long int L;
int main()
{
	L t,n,l,r,q,i,j,k;
	L s=0,c=0;
	int p;
	scanf("%lld%lld",&n,&q);
	char ch[n+1];
	L a[n+1];
		scanf("%s",ch);
	/*	for(i=0;i<n;i++)
		{	p=ch[i];
			a[i+1]=p%48;
		}
		*/
	for(k = 0; k < q; k++)
	{
		scanf("%lld%lld%lld",&t,&l,&r);
		if(t==1)
		ch[l-1]=r;
		
		else
		{	c=0;
			for(i = l; i <= r; i++)
			{	s=0;
				for(j=i;j<=r;j++)
				{
					s=s*10+ch[j-1]%48;
					if(s%3==0)
					c++;
				}
			}
			printf("%lld",c);
			printf("\n");
		}
		
		}
	return 0;
}

	
	