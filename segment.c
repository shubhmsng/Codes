#include<stdio.h>

main()
{		
		double n,x,p,r,s,temp,u;
		int i,t,m,j,k,q=0,d=0;

	scanf("%d",&t);
	for(m=0;m<t;m++)
	{		
			scanf("%lf%d",&x,&k);
			float a[k+3];
			
				a[0]=0.00;
				a[1]=x/2.0;
				a[2]=x;
				
				
				if(k==1)
				{	
					printf("%lf",a[1]);
					goto retry;
				}
			
			for(i=2; i<=k; i++){
			
				for(j=2;j<=i;j++)
					{	
						if((a[j]-a[j-1])>(a[j-1]-a[j-2]))
						{
							r=a[j];
							s=a[j-1];
							q=1;
						
				
						}
					}	
				
				if(q!=1)
				{	p=(a[0]+a[1])/2.0;
				
					u=p;
				}
				else
				{
					p=(r+s)/2.0;
				
					u=p;
				}
				for(j=i;p<a[j];j--)
				{	
		
					a[j+1]=a[j];
				}		
					a[j+1]=p;
				
				q=0;
				
				}
				
				printf("%lf",u);
				
				retry:
				
				printf("\n");
				
	}	
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	





