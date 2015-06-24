
#include<stdio.h>
#define f1(x) ((x*x)+1)
#define f2(x) ((x*x)+2)

int prime ( int n ) {
		
		int l=0,j;
		
	for(j=2;j<n;j++) 
	{
		if(n%j==0)
		l=1;
	}
	return l;
	
}
main() {

long int a[100],b[100],c[101],i,j,k,l,m,n,o,p,q=0,t;

long int d,e;

scanf("%ld",&t);

for(i=0;i<t;i++)
{
	scanf("%ld",&d);
	
	scanf("%ld",&e);
	
	k=0;
	p=0;
	
	for(j=d;j<=e;j++)
		{	l=1;
			l=prime(j);
			if(l==0||j==0||j==1||j==2)
			{	
			a[k]=j;
			k++;
			}
		}
		
	for(m=0;m<k;m++){
		
		n=prime(f1(a[m]));
		o=prime(f2(a[m]));
		if(n==0||o==0||f1(a[m])==1||f1(a[m])==2||f2(a[m])==1||f2(a[m])==2)
		{	b[p]==a[m];
			p++;
			
			}
		}
		c[q]=p;
		q++;
} 	for(i=0;i<q;i++){
	printf("%ld",c[i]);
		printf("\n");
	}
	
return 0;

}
	
				




