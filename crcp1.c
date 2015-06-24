#include<stdio.h>
#include<stdlib.h>
 
int main()
{
int t,n[50],j,i,l,f,temp;
scanf("%d",&t);
for(i=0;i<t;i++)
{
   scanf("%d",&n[0]); l=1000;
   for(j=0;j<n[0];j++)
   {
       scanf("%d",&n[j+1]);
       if(n[j+1]<l)
        l=n[j+1];
   }
   temp=l; f=0;
   while(temp>1)
   {
       for(j=1;j<=n[0];j++)
       {
           if(n[j]%temp!=0)
           {
               temp--;
               break;
           }
       }
       if(j==(n[0]+1))
       {
           l=temp;
           f=1;
           break;
           
       }
   }
   if(f==1)
   {
       for(j=0;j<n[0];j++)
        printf("%d ",(n[j+1]/l));
       printf("\n");
   }
   else
   {
       for(j=0;j<n[0];j++)
        printf("%d ",n[j+1]);
       printf("\n");
   }
}
return 0;
}