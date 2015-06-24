# include <stdio.h>
int main()
{
    int a[190],i,j,k,temp,t,n,x,l;
    scanf("%d",&t);
    while (t--)
    {   int c;
        scanf("%d",&n);
        a[0]=1;k=1;temp=0,c=0;
    for (i=1;i<=n;i++)
    {
        for (j=0;j<k;j++)
            {
                x=a[j]*i+temp;
                a[j]=x%10;
                temp=x/10;
            }

            while (temp!=0)
            {
                a[k]=temp%10;
                temp=temp/10;
                k++;
            }
    }
        for (i=k-1;i>=0;i--)
       {
         printf("%d",a[i]);
         for(l=a[i]; l>0; l=l/10)
            c++;

       }
        printf("\t");
        printf("%d\n",c);

    }
    return 0;
}
