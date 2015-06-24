#include<stdio.h>

int main()
{
	int n,k,t,i,j,s,max=1;
	scanf("%d",&t);
	while(t--)
	{	
		max=1;
		
		scanf("%d%d",&n,&k);
		int a[n],b[n];
		
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		for(i=0;i<n;i++)
		scanf("%d",&b[i]);
		
		for(i=0;i<n;i++)
		{
			s=b[i]*(k/a[i]);
			
			if(s>max)
			max=s;
		}
		
		printf("%d\n",max);
	

}	

return 0;
}
	