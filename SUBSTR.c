#include<stdio.h>

int i=0;
int s[10000001];



void part(int n)
{	int l=0;
	
	int b[10];
	
	int j,k;
	
	for(j=n;j>=1;j=j/10)
	{
		b[l]=j%10;
		l++;
	}
	
	for(k=l-1;k>=0;k--)
	{	s[i]=b[k];
		i++;
	}
		
}

void part2(int k)
{
	int p=0,l=0,b[10],m,q=0;
	
	int j;
	
	for(j=k;j>=1;j=j/10)
	{
		b[l]=j%10;
		l++;
	}
	
	for(j=0;j<i-l;j++)
	{	p=0;
		for(m=j;m<l+j;m++)
		{
			p=p*10+s[m];
		}
		
		if(p==k)
		q++;
		
	}
	//printf("\n");
	
	printf("%d",q);
	
	

}



int main()
{
	int n,t,k,j,l=0;
	
	scanf("%d",&t);
	while(t--)
	{		i=0;
		scanf("%d%d",&n,&k);
		
		for(j=1;j<=n;j++)
		part(j);
		//for(j=0;j<i;j++)
		//printf("%d",s[j]);
		
				
		part2(k);
		printf("\n");

	
	}
	
	
	
}
	

	