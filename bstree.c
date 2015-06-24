#include<stdio.h>
#include<stdlib.h>

struct node{
int info;
struct node *lchild,*rchild;
}*root=NULL;
typedef struct node bt;
int p=0;

void search(bt *temp,int f)
{
	if(temp==NULL)
	    return ;
	search(temp->lchild,f); 
	//printf("%d  ",temp->info);
	if(temp->info==f)
	{
	printf("found");
	p=1;
	}
	search(temp->rchild,f);
}



main()
{	

	int n,i,j;

	printf("how many nodes you want to create in the tree:");	
	scanf("%d",&n);
	
	bt *tree,*temp;
	printf("enter the elements of tree:\n");
	for(i=0;i<n;i++)
	{
		temp=(bt*)malloc(sizeof(bt));
		temp->lchild=temp->rchild=NULL;
		scanf("%d",&(temp->info));
		
		if(root==NULL)
		{	root=temp;
			tree=temp;
		}
		else
		{  	while(1)
			{	
				if(tree->info>temp->info)
				{	
					if(tree->lchild==NULL)
					{	
						tree->lchild=temp;
						break;
					}
					tree=tree->lchild;
				}
				else
				{	
					if(tree->rchild==NULL)
					{	
						tree->rchild=temp;
						break;
					}
				tree=tree->rchild;
				}
			}
		}
		
		tree=root;
		
	}
int f;
printf("enter no. which u want to find in the tree:");	
scanf("%d",&f);	
search(root,f);	
if(p==0)
printf("not found");
	
	return 0;
	
}
