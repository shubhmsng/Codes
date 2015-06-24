#include<stdio.h>
int main()
{
    int t,n,l,r,j,k;
    scanf("%d",&t);
    while(t--)
    {
        int p=0,i=0,c=0,temp;
        scanf("%d",&n);
        int a[n];
        int b[n];
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&a[i],&b[i]);


        /*    if(p!=0)
            {
                for(j=i; j>0; j--)
                {
                    if(a[j]<a[j-1])
                    {
                        temp=a[j];
                        a[j]=a[j-1];
                        a[j-1]=temp;

                        temp=b[j];
                        b[j]=b[j-1];
                        b[j-1]=temp;

                    }
                }
            }

            p=1;
                */
        }

         for(i=0; i<n; i++)
            {       for(j=i;j<n;j++)
                    if(a[j+1]<a[j])
                    {
                        temp=a[j+1];
                        a[j+1]=a[j];
                        a[j]=temp;

                        temp=b[j+1];
                        b[j+1]=b[j];
                        b[j]=temp;

                    }
                }

        for(k=0;k<n;k++)
        {
            printf("%d  %d\n",a[k],b[k]);
        }

        for(k=1; k<=n; k++)
        {
            if(b[k-1]<a[k])
            {
             c++;
            }

            }
        printf("%d\n",c);
    }

    return 0;

}
