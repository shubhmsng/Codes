#include<stdio.h>

long long int binary(long long int b){

long long int i;
i=b%2;
return i;

}
long long int power(long long int n,long long int k)
{	
	long long int p,q=1,i;
	
	p=n*k;
	
	for(i=0;i<p;i++)
	q=q*2;
		
	return q;	
}

main(){

long long int a,b,i,c[1000001],j=0,k=0,l,m;
int t;
scanf("%d",&t);
while(t--)
{
	scanf("%lld",&a);
	i=a;
	while(i!=0)
	{	
		b=binary(i);
		c[j]=b;
		i=i/2;
		j++;
	}
//	printf("%d\n",j);
	for(l=0;l<j;l++){
	if(c[l]==1)
	//printf("%d  ",c[l]);
	k++;

	}
	//printf("\n%d\n%d\n",a,k);
m=power(a,k);

printf("%lld\n",m);
k=0;
j=0;

}

return 0;
}