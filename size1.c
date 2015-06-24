#include<stdio.h>
#define max(a,b) a >= b ? a : b
int main(void)
{
int T,N,i,j,max_path=0;
scanf("%d",&T);
while(T--)
{
	scanf("%d",&N);
	int arr[N][N];
	i=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<=i;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=N-1;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			arr[i-1][j]+=max(arr[i][j],arr[i][j+1]);
		}
	}
	
printf("%d\n",arr[0][0]);
}
return 0;
} 