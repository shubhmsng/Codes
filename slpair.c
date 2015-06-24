#include<stdio.h>
#include<stdlib.h>

struct node{
int info;
struct node *link;
}*start=NULL,*q=NULL;
int fact(int f){
int fact=f;
while(f!=1){
fact=fact*(f-1);
f--;
}
return fact;
}
int x=0,s=0,i=0,j=0,m=0;
int show(int t){
int a[t],k,l,p;
struct node *temp;
temp=start;
while(temp!=NULL){

while(temp!='\0'){
i++;
temp=temp->link;
}
int *arr=(int*)malloc(i*sizeof(int));
temp=start;
while(temp!='\0'){
*(arr+j)=temp->info;
j++;
temp=temp->link;

}
int b[fact(j-1)+2];
for(k=0;k<j;k++){
	for(l=k+1;l<j;l++){
		b[m]=*(arr+k)+*(arr+l);
		m++;
		}
	}
for(k=0;k<m;k++){
for(l=0;l<=m;l++){
	if(b[l]>b[l+1]){
	b[l]=p;
	b[l]=b[l+1];
	b[l+1]=b[l];
	}
}	}
s=0;
i=0;
j=0;
m=0;
a[x]=b[0];
x++;
}
printf("\n");
for(j=0;j<x;j++){
printf("%d",a[j]);
printf("\n");
}

}	






main(){
int i,t,m,j;

scanf("%d",&t);
for(i=0;i<t;i++){

scanf("%d",&m);

for(j=0;j<m;j++){
struct node *temp;

temp=(struct node*)malloc(sizeof(struct node));

scanf("%d",&temp->info);

temp->link=NULL;
if(start==NULL){
start=temp;
q=temp;
}
else{
q->link=temp;
q=temp;
}
}
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));

temp->info='\0';
temp->link=NULL;
q->link=temp;
q=temp;
}
show(t);
}

