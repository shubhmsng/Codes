#include<stdio.h>
#include<stdlib.h>
struct polynomial{
int exp;
int coff;
struct polynomial *link;
}*start1=NULL,*start2=NULL,*start3=NULL;
struct polynomial l1,l2,l3;
typedef struct polynomial pl;
pl *q1,*q2,*q3;



void insert1()
{		pl *temp1;
		temp1=(pl*)malloc(sizeof(pl));
		
		scanf("%d",&temp1->coff);
		scanf("%d",&temp1->exp);
		temp1->link=NULL;
		if(start1==NULL)
		{
			start1=temp1;
			q1=temp1;
			
		}
		else
		{
			q1->link=temp1;
			q1=temp1;
		}
}
	
void insert2()
{		pl *temp2;
		temp2=(pl*)malloc(sizeof(pl));
		
		scanf("%d",&temp2->coff);
		scanf("%d",&temp2->exp);
		temp2->link=NULL;
		if(start2==NULL)
		{
			start2=temp2;
			q2=temp2;
			
		}
		else
		{
			q2->link=temp2;
			q2=temp2;
		}
}

int  insert3(int m,int n)
{		pl *temp3;
		temp3=(pl*)malloc(sizeof(pl));
		temp3->coff=m;
		temp3->exp=n;
		temp3->link=NULL;
		if(start3==NULL)
		{
			start3=temp3;
			q3=temp3;
			
		}
		else
		{
			q3->link=temp3;
			q3=temp3;
		}
}

 main()
{

	int n,m,i,j,k,l,o;
	
	printf("enter no. of terms in 1st polynomial:"); 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		insert1();
	}
	
	printf("enter no. of terms in 2nd polynomial:"); 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		insert2();
	}
	q1=start1;
	
	while(q1!=NULL)
	{
		printf("%d |",q1->coff);
		printf("%d-->",q1->exp);
		q1=q1->link;
	}printf("NULL\n");
		q2=start2;
	
	
	while(q2!=NULL)
	{
		printf("%d |",q2->coff);
		printf("%d-->",q2->exp);
		q2=q2->link;
	}printf("NULL\n");
	
	q1=start1;
	q2=start2;
	while(q1!=NULL||q2!=NULL){
		if(q1->exp>q2->exp){
		while(q1->exp>q2->exp){
		insert3(q1->coff,q1->exp);
		q1=q1->link;
		}
		}
		else if(q2->exp>q1->exp){
		while(q2->exp > q1->exp){
		insert3(q2->coff,q2->exp);
		q2=q2->link;
			}
		}
		else if(q1->exp==q2->exp){
		while(q1->exp==q2->exp){
		insert3((q2->coff+q1->coff),q1->exp);
		q1=q1->link;
		q2=q2->link;
		} }
		else
		{
		q1=q1->link;
		q2=q2->link;
		}
	}
	q3=start3;	
	while(q3!=NULL)
	{
		printf("%d |",q3->coff);
		printf("%d-->",q3->exp);
		q3=q3->link;
	}printf("NULL\n");
	
	
	return 0;
}
		
