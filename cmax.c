#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *link;
}*start=NULL,*q=NULL;
int c=0,i=0,l=0,s=0;
void show(){
int a[1000],b[1000],j,k,p[50],m,n[50],o;
struct node *temp;
temp=start;
while(temp!=NULL){
while(temp->info!=0){
a[i]=temp->info;
temp=temp->link;
i++;
}
for(j=0;j<i;j++){
for(k=0;k<i;k++){
if(a[j]==a[k])
c++;}
b[l]=c;
for(m=0;m<=l;m++){

if(c>b[m]||l==0){
p[s]=c;
n[s]=a[j];
s++;}
for(o=0;o<=s;o++){
if(c==b[m]&&a[j]<n[o]){
p[s]=c;
n[s]=a[j];
s++;
/*printf("\n");
printf("%d\t%d",n[s-1],p[s-1]);
*/}}
}c=0;
l++;
}
printf("\n");
printf("%d\t%d",n[s-1],p[s-1]);
temp=temp->link;
l=0;
i=0;
s=0;
}
}

void print(){
struct node *temp;
temp=start;
printf("linked list is:\n");

while(temp!=NULL){
printf("%d->",temp->info);
temp=temp->link;
}printf("NULL");
}


main(){
int t,i,j,m;
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

temp->info=0;
temp->link=NULL;
q->link=temp;
q=temp;
}
//print();
show();
return 0;
}



