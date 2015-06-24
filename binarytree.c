#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *lchild,*rchild;
}*root=NULL;
typedef struct node bt;

int search(int item)
{
    int j=0;
    bt *tree;

    if(root==NULL)
    {
        printf("TREE IS NULL:");
        return;
    }

    if(root->info==item)
    {
        printf("FOUND");
        return;
    }

    if(item>root->info)
        tree=root->rchild;
    else
        tree=root->lchild;
    while(tree!=NULL)
    {
        if(tree->info>item)
            tree=tree->lchild;
        if(tree->info<item)
            tree=tree->rchild;
        if(tree->info==item)
        {
            printf("FOUND");
            return;
        }
    }
    return 1;
}

main()
{

    int n,i,j;

    printf("how many nodes you want to create in the tree:");
    scanf("%d",&n);

    bt *tree,*temp;
    printf("enter the elements of tree:\n");
    for(i=0; i<n; i++)
    {
        temp=(bt*)malloc(sizeof(bt));
        temp->lchild=temp->rchild=NULL;
        scanf("%d",&(temp->info));

        if(root==NULL)
        {
            root=temp;
            tree=temp;
        }
        else
        {
            while(1)
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
    printf("\nenter element which you want to search in the tree:");
    scanf("%d",&j);
    int p;
    p=search(j);
    if(p==1)
        printf("\nNOT FOUND");
    return 0;

}


