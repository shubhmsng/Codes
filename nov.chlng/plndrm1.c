#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{		int i,j,k,l,t,c=0,m=0;
	  //  char a[1000000];
		char p='a';
		char *a;
		
		scanf("%d",&t);
		while(t--)
		{	c=0;
			
			a=(char*)malloc(1000001*sizeof(char));
			
			scanf("%s",(a));
			
			l=strlen(a);
			
			for(i=0,j=(l-1);i<(l-1)/2;i++,j--)
			{
				if(a[i]!=a[j])
				{	
					if(a[i]==a[j-1])
						j--;
					else if(a[i+1]==a[j])
						i++;
					else c=10;
					
					
					c++;
				}
			}
			
			if(c==1||c==0)
			printf("YES\n");
			else
			printf("NO\n");
			
			free(a);
		
}		
		return 0;
		
		
	}
			