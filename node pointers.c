#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;

    struct node *link[50];

}*start=NULL;
typedef struct node nd;
int n=0;
void create()
{
    int i;
    printf("\nenter info of node:");
    nd *temp,*q;
    temp=(nd*)malloc(sizeof(nd));
    scanf("%d",&temp->info);
    for(i=0; i<50; i++)
        temp->link[i]=NULL;
    if(start==NULL)
    {
        start=temp;
        q=start;
    }
    else
    {
        q->link[n]=temp;
        n++;
    }
}
void display()
{
    int i=0;
    nd *temp;
    temp=start;

    printf("%d ",temp->info);

    while(start->link[i]!=NULL)
    {
        temp=start->link[i];
        printf("%d ",temp->info);
        i++;
    }

}

typedef struct node nd;
int main()
{
    int m,i,j,k,n;
    printf("enter no. of nodes:");
    scanf("%d",&m);
    for(i=0; i<m; i++)
        create();
    printf("\nlink list is:\n");
    display();
    return 0;
}
