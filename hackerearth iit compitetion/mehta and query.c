#include<stdio.h>

void part(int arr[],int min,int max)
{
 int mid;
 if(min<max)
 {
   mid=(min+max)/2;
   part(arr,min,mid);
   part(arr,mid+1,max);
   merge(arr,min,mid,max);
 }
}


void merge(int arr[],int min,int mid,int max)
{
  int tmp[30];
  int i,j,k,m;
  j=min;
  m=mid+1;
  for(i=min; j<=mid && m<=max ; i++)
  {
     if(arr[j]<=arr[m])
     {
         tmp[i]=arr[j];
         j++;
     }
     else
     {
         tmp[i]=arr[m];
         m++;
     }
  }
  if(j>mid)
  {
     for(k=m; k<=max; k++)
     {
         tmp[i]=arr[k];
         i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
        tmp[i]=arr[k];
        i++;
     }
  }
  for(k=min; k<=max; k++)
     arr[k]=tmp[k];
}



int main()
{
    int n,i,j,k,l,q,r,p;
    scanf("%d%d",&n,&q);
    long long int a[n],b[n];
    for (i = 0; i < n; i++)
    scanf("%lld",&a[i]);
    for(i = 0; i < n; i++)
    scanf("%lld",&b[i]);
    while(q--)
    {   int s = 0;
        scanf("%d%d",&l,&r);
        p = r-l;
        int c[p+1];
        int d[p+1];
        for (i = l-1; i < r; i++){
            c[i] = a[i];
            d[i] = b[i];
        }
        part(c, l-1, r-1);
        part(d, l-1, r-1);
        for(i = l-1; i < r; i++)
            s += c[i]*d[i];
        printf("%d\n",s);
    }

    return 0;
}
