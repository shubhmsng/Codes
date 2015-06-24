#include<stdio.h>
int main(){
long long int n,i,j=2,k=2,l=0,m=0,a[1000],b[1000],p=1,c,d,o;
scanf("%lld",&n);
for(i=0;i<n;i++){
	scanf("%lld%lld",&c,&d);
	while(c>1){
		while(c%j==0){
		if(c%j==0){
			a[l]=j;
			c=c/j;
			l++;}}
			if(c<j)
			j=1;
		
		j++;
	}
	while(d>1){
		while(d%k==0){
		if(d%k==0){
		b[m]=k;
		d=d/k;
		m++;}}
		if(d<k)
		k=1;
		
		
	k++;
	}
	for(o=0;o<l;o++){
	if(a[o]==b[o])
	p=p*a[o];
	}

printf("\n%lld",p);
printf("\n");
j=2;
k=2;
l=0;
m=0;
p=1;
}
return 0;
}

