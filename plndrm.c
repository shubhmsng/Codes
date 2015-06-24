#include<stdio.h>
#include<string.h>
main()
{		int i,j,k,l,c=0,t,m,n,q=0;
	    char a[1000000];
		scanf("%d",&t);
		for(m=0;m<t;m++)
		{	
			scanf("%s",a);
			l=strlen(a);
			for(i=0;i<l-1;i++)
			{	if(a[i]==a[i+1])
				q++;
			}
			if(q==0){
			printf("NO");
			goto retry;
			}
		
			if(l%2==0)
			{	i=0;
				j=l-1;
				while(i<(l/2)&&j>=(l/2))
				{		
						if((a[i]==a[j])||(a[i+1]==a[j])||(a[i]==a[j-1]))
						c++;
						i++;
						j--;
						
					/*	if(a[i]==a[j])
						{
						i++;
						j--;
						c++;
						}
						else if(a[i]==a[j-1])
						{
						j=j-2;
						i++;
						c++;
						}
						else if(a[i+1]==a[j])
						{
						i=i+2;
						j--;
						c++;
						}	*/
						
				}
				printf("%d",c);
				if((l-(c*2))==2||(l-(c*2))==0)
				printf("YES");
				else
				printf("NO");
			}
			else{
				n=l/2;
				i=0;j=l-1;
				/*if((a[i]!=a[j])&&(a[i+1]!=a[j]))
				{	i=0;j=l-2;
					while(i<n&&j>=n)
					{if(a[i]==a[j])
						c++;
						i++;j--;
					}
				if((l-(c*2))==1)
				printf("YES");
				else
				printf("NO");
				}
				if((a[i]!=a[j])&&(a[i+1]==a[j]))
				{	i=1;j=l-1;
					while(i<=n&&j>n)
					{
						if(a[i]==a[j])
						c++;
						i++;j--;
					}
				
				if((l-(c*2))==1)
				printf("YES");
				else
				printf("NO");
				}
				if(a[i]=a[j])
				
				{	i=0;j=l-1;
					while(i<n&&j>n)
					{	if(a[i]==a[j])
					c++;
					i++;j--;
					}*/
					while(i<(l/2)&&j>=(l/2))
				{		
						/*if((a[i]==a[j])||(a[i+1]==a[j])||(a[i]==a[j-1]))
						c++;
						i++;
						j--;
						*/
						if(a[i]==a[j])
						{
						i++;
						j--;
						c++;
						}
						else if(a[i]==a[j-1])
						{
						j=j-2;
						i++;
						c++;
						}
						else if(a[i+1]==a[j])
						{
						i=i+2;
						j--;
						c++;
						}
				}
				if((l-(c*2))==1)
				printf("YES");
				else
				printf("NO");
				}
				
			retry:
			c=0;
			q=0;
			printf("\n");
		}
	return 0;
}
			