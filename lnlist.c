#include<stdio.h>
#include<stdlib.h>

struct node{
int info;
struct node *link;
} *start=NULL;

int count(struct node *ptr) {
	typedef struct node L;
	
	L *a = ptr;
	L *b = ptr;
	
	a = a->link;
	b = b->link->link;
	
	L *c = ptr;
	
	while (a != b) {
		c = a;
		a = a->link;
		b = b->link->link;
	}
	
	return a->info;
}


void display(){
struct node *temp;
temp=start;
printf("\nlinked list is:\n");
while(temp!=NULL){
printf("%d-->",temp->info);
temp=temp->link;
}printf("NULL");
}

main(){

int n,i;
printf("how many nodes you want to create:");
scanf("%d",&n);
for(i=0;i<n;i++){
struct node *temp,*q;
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
	if (i == n - 1) {
		q->link=start;
	}
}
printf("%d\n", count(start->link->link));
//display();
//display();
return 0;
}


