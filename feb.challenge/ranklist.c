#include<stdio.h>
void partition(int arr[],int low,int high){

    int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}

void mergeSort(int arr[],int low,int mid,int high){

    int i,m,k,l,temp[high];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }

    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}

int main(void)
{
    long int sum,f,c=0,t,i,s,b;
    long int n;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld%ld",&n,&sum);
         int a[n+1];
        c=0;
        f=(n*(n+1))/2;

        if(sum==n)
        {
            c=n-1;
        }
        else if(sum==f)
        {
            c=0;
        }
        else
        {
            c=0;
            s=sum-n;
            for(i=1;i<=n;i++)
            a[i]=1;

            for(i=2; i<=n; i++)
            {
                if(s<=i)
                {
                     if(s==0)
                        break;
                    a[i]=a[i]+1;
                    s--;
                }

                else{
                    a[i]=a[i]+i;
                    s=s-i;
                }

            }
            partition(a,1,n);
        }
        for(i=2;i<=n;i++)
        {
            if(a[i]!=i)
            c++;
        }
        printf("%ld\n",c);
    }

    return 0;
}
