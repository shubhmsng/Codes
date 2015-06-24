#include<stdio.h>
#include<stdlib.h>

struct node {

int d;

struct node *next,*prev;

} *start = NULL;

void display(){ 
	
	struct node *temp;
	
	temp=start;
	
	while(temp!=NULL) {
	
		printf("%d<-->",temp->d);
		
		temp=temp->next;
	} printf("NULL");
}
	
int main() {
	int i,n,k;
	
	printf("enter no. of nodes:");
	
	scanf("%d",&n);
	
	for(i = 0; i < n; i++){
	
	   struct node *temp ,*q;
	
	   temp =(struct node*)malloc(sizeof(struct node));
	
	   scanf("%d" ,&temp->d);
	
	   temp->next = NULL;
	
	   temp->prev = NULL;
		
		if(start == NULL) {
		     start = temp;
	       	 q = temp;
	       }
		else {
		q->next = temp;
		temp->prev = q;
		q=temp;
		  }
		  
	}	
	
	printf("\n");

	display();

	return 0;
}


