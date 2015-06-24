#include<stdio.h>
#define MAXSIZE 50
struct st
{
    int top;
    int stack[MAXSIZE];
};
struct st s;
int adj[MAXSIZE][MAXSIZE];
int visited[MAXSIZE];

void push(int item)
{
    if(s.top>=MAXSIZE)
    {
        printf("stack overflow");
        return;
    }
    s.top=s.top+1;
    s.stack[s.top]=item;
}
int pop()
{
    int poped;
    poped=s.stack[s.top];
    s.top--;
    return poped;
}
int empty()
{
    if(s.top=-1)
        return 1;
    else
        return 0;
}
void dfs(int initial_node, int n)
{
    int u,i;
    s.top=-1;
    push(initial_node);
    printf("\nDFS traversal is:");
    while(!empty())
    {
        u=pop();
        if(visited[u]==0)
        {
            printf("\n%d",u);
            visited[u]=1;
        }
        back:for(i=1;i<=n;i++)
        {
            if((adj[u][i]==1)&&(visited[i]==0))

            {
                push(u);
                visited[i]=1;
                printf("\t%d",i);
                u=i;
                goto back;
            }
        }
    }

}

int main()
{
    int n,i,j,parent,adj_parent,initial_node;
    char ans='y',ans1='y';
    printf("enter total no. of elements in undirected graph:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            adj[i][j]=0;
        }
    }
    for(i=1;i<=50;i++)
    {
        visited[i]=0;
    }
    printf("enter graph structure for DFS:");
    do
    {
        printf("\nenter parent node");
        scanf("%d",&parent);
        do
        {
            printf("\nenter adj. nodes for %d node",parent);
            scanf("%d",&adj_parent);
            adj[parent][adj_parent]=1;
            adj[adj_parent][parent]=1;
            printf("would u want to add an");
           ans1=getche();
        }while(ans1=='y');

     printf("\n Continue to add graph node?");
     ans=getche();
    }while(ans=='y');

    printf("\nAdjacency matrix for your graph is:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",adj[i][j]);
        }
    printf("\n");
    }

    printf("\nEnter initial node for DFS traversal:");
    scanf("%d",&initial_node);
    dfs(initial_node,n);
    return 0;
}
