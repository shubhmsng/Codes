#include<stdio.h>

 int fun(int a[],int l,int r)
{
	int i,s=0;
	for(i=l;i<=r;i++)
		s=s+a[i];
		
		return s;
}

main()
{		int n,l,r,q,x,y,m,t;
		int i,j,k,o;
		scanf("%d",&n);
		int a[n+2],f[n+2],sum=0;
		int u[n+1],v[n+1];
		for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		for(i=1;i<=n;i++)
		{	
			scanf("%d%d",&l,&r);
			f[i]=fun(a,l,r);
			u[i]=l;
			v[i]=r;
			}
			
		
		scanf("%d",&q);
		for(i=1;i<=q;i++)
		{	sum=0;
			scanf("%d",&t);
			
			if(t==1)
			{	
				scanf("%d%d",&x,&y);
				a[x]=y;
				
				for(j=1;j<=n;j++)
				f[j]=fun(a,u[j],v[j]);
				
				
				
			}
			if(t==2)
			{	
				scanf("%d%d",&m,&o);
				for(j=m;j<=o;j++)
				sum=sum+f[j];
				printf("%d",sum);
			}
		
			printf("\n");
		
		}
		
	
	return 0;
	
	}
			
		
		
		
		
