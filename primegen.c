#include<stdio.h>
#include<stdlib.h>
typedef unsigned long long int L;
struct node{
L info;
struct node *link;
}*start=NULL,*q=NULL;
int z=0;


int prime(L m,L n){
L i,j=2;

for(i=m;i<=n;i++){

while(j<i){
if(i%j==0)
goto retry;
j++;
}
if(i!=1||i==2){

struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->info=i;
temp->link = NULL;
if(start==NULL){
start=temp;
q=temp;
}
if(start!=NULL){
q->link=temp;
q=temp;
}
}
retry:
j=2;

}
}
void show(){
struct node *temp;
temp=start;
while(temp!=NULL){

if(temp->info!=0){
printf("%d",temp->info);
printf("\n");
}
else
printf("\n");
temp=temp->link;
}
}
main(){
int i,t;
L m,n;
scanf("%d",&t);

for(i=0;i<t;i++){
scanf("%lld",&m);
scanf("%lld",&n);
prime(m,n);
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->info=0;
temp->link=NULL;
q->link=temp;
q=temp;
}
printf("\n");
show();

return 0;

}

