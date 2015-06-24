#include<stdio.h>
#include<stdlib.h>
struct node{
long long int d;
long long int v;
struct node *link;
}*start=NULL;


int main()
{
	long long int i,j=1,k=1,a,b,l;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld%lld",&a,&b);
		
		while(a>1){
			while(a%j==0){
				if(a%j==0){
					struct node *temp,*q;
					temp=(struct node*)malloc(sizeof(struct node));
					temp->d=j;
					temp->link=NULL;
					if(start==NULL){
						start=temp;
						q=temp;
					}
					else{
						q->link=temp;
						q=temp;
					}
					printf("\n%lld",temp->d);
					a=a/j;
				}
			}	
				if(a<j)
					j=1;
			
			j++;
		
		}
		while(b>1){
			while(b%k==0){
				if(b%k==0){
					struct node *temp,*q;
					start=NULL;
					temp=(struct node*)malloc(sizeof(struct node));
					temp->v=k;
					temp->link=NULL;
					if(start==NULL){
					q=temp;
					start=temp;
				}
				else{
					q->link=temp;
					q=temp;
				}
				printf("%lld",temp->v);
				b=b/k;
				}
			}	
			
			if(b<k)
			k=1;
			k++;
		}
	
struct node *temp;

temp=start;

long long int l=1;
while(temp!=NULL){
	if(temp->d==temp->v){
		l=l*temp->d;}
		temp=temp->link;
	
	}
printf("%lld",l);

	j=1;
	k=1;
	l=1;
	}
return 0;
}



	
