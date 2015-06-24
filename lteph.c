#include<stdio.h>
#include<string.h>
#define MAX 
main(){

int i,j=0,k,n,s=0,p[50],l,g=0;
int f;
scanf("%d",&k);
scanf("%d",&n);
int a[k];
long long int m[n];

for(i=k-1;i>=0;i--)
scanf("%d",&a[i]);

for(i=0;i<n;i++){
	scanf("%lld",&m[i]);
	while(m[i]%10!=0){
		p[j]=m[i]%10;
		m[i]=m[i]/10;
		
		j++;
		}
		
		
		for(f=j-1;f>=0;f--){
		for(l=f;l>=0;l--){
		s=s*10+p[l]%10;
		for(j=0;j<k;j++){
		if(s==a[j])
		g=1;
		}
				}
			s=0;	
		}		
		if(g==1){
		printf("GOOD");
		printf("\n");
		}
		else{
		printf("BAD");
		printf("\n");
		}
		g=0;
	j=0;
	}


return 0;
}
