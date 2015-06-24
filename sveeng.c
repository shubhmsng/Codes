#include<stdio.h>

main(){
	
	int n,m,i,j,l=0;
	scanf("%d",&n);
	scanf("%d",&m);
	char c[n][m],k;
	for(i=0;i<n;i++){
	for(j=0;j<m;j++)
		scanf("%c",&c[i][j]);
	}
	k=c[0][0];
	for(i=0;i<n;i++)
	{	
		for(j=0;j<m;j++)
		{	
			
				if(c[i][j]==c[i][j+1])
				l++;
				if(c[i+1][j]==c[i][j])
				l++;
		}
	}
	printf("%d",l);
	
	return 0;
}

	
