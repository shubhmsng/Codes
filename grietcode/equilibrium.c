#include<stdio.h>
int main()
{
    int t,n,i,p;
    scanf("%d",&t);
    while(t--)
    {   p=0;
        scanf("%d",&n);
        int arr[n];
        int l[n-1];
        int r[n-1];
        for(i=0; i < n; i++)
        scanf("%d",&arr[i]);
        l[1]=arr[0];
        r[n-2]=arr[n-1];
        for(i=2; i < n-1; i++)
        {
            l[i]=l[i-1]+arr[i-1];
        }
        for(i=n-3; i>0; i--)
        {
            r[i] = r[i+1]+arr[i+1];
        }
        for(i=1; i<n-1; i++)
        {
            if(l[i]==r[i])
                {
                    p=i;
                    break;
                }
        }
        if(p==0)
            printf("NO EQUILIBRIUM\n");
        else
            printf("%d\n",arr[p]);
    }
    return 0;
}
