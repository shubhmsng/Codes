#include<stdio.h>

int power(int n)
{
	int i,p=1;
		i=1;
		if(n==0)
		return i;
	
	for(i=0;i<n;i++)
	p=p*2;
	return p;

}



main()
{	long long int n,i,j=0,d=0,k,l=0,p[100],q,s=0,m;
	
	scanf("%lld",&n);
	while(n--)
	{
	
		scanf("%lld",&k);
		i=k;
		while(i!=0)
		{	
			d=d+i%10;
			
			i=i/10;
		}
		
		//	printf("%d",d);
		for(i=2;i<d;i++){
		if(d%i==0)
		j=1;
		}
		if(j==1)
{		p[l]=0;
		//printf("not prime\n");
		l++;
		}
		else
		{p[l]=1;
	//	printf("prime\n");
		l++;
		}
		d=0;
		j=0;

		}
		
	m=l-1;	
		
for(j=0;j<l;j++)
{	q=power(m);
	//printf("%d\n",q);
	s=s+p[j]*q;
	//printf("%d ",p[j]);
	//printf("%d\n",s);
	m--;
}

printf("%lld",s);
	
return 0;
}


	