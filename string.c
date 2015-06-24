#include<stdio.h>
#include<string.h>
main()
{	int t,i,l,j,k,m=0,n=0,o=0,p=0,q=0;
	char c[1000000],d[1000000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{	q=0;
		n=0;
		scanf("%s",c);
		l=strlen(c);
		
	
		for(j=0;j<l;j++)
		{	for(o=0;o<n;o++)
			{	if(c[j]==d[o])
					p=1;
			}
			
			if(p!=1)
			{	d[q]=c[j];
				
				q++;
			}
			
			n=q;	
			p=0;
		}
		printf("%d",q); 
		printf("\n");

	}
	
	return 0;
}	
	