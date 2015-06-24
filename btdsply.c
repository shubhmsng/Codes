#include<stdio.h>
#include<stdlib.h>

struct node{
int info;
struct node *lchild,*rchild;
}*root=NULL;
typedef struct node bt;


void display(bt *temp)
{
	if(temp==NULL)
	    return ;
	display(temp->lchild); 
	printf("%d  ",temp->info);
	display(temp->rchild);
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
	
printf("binary tree is:");

display(root);
	
	return 0;
	
}

