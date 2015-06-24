#include<stdio.h>

main(){

short int i,n,m,k,l,x,s=0,y,z=0;
scanf("%sd",&n);
while(n--){
scanf("%sd",&m);
short int a[m][m];
short int b[m];

for(k=0;k<m;k++){
for(l=0;l<=k;k++){
scanf("%sd",&a[k][l]);
}
}

for(k=0;k<m;k++){
for(l=k;l<m;l++){
if(l!=k&&a[l][k]<a[l][k+1])
x=a[l][k+1];
else
x=a[l][k];

s=s+x;
}

if(k==0){
b[z]=s;
y=b[z];
z++;
}
if(k!=0&&s>b[z-1]){
b[z]=s;
y=b[z];
z++;
} 	s=0;
			}

printf("\n");
printf("%sd",y);
z=0;
	}

return 0;

}

