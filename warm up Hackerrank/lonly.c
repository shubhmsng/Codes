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

int main()
{
    int i,j,p,min,n,k,m=0,l;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    partition(a,0,n-1);
    for(i=0;i<n;i++)
    {   p=0;
        for(j=i;j<n;j++)
        {
            if(((a[i]==a[j])&&(a[i]!=a[i-1]))||i==0)
                p++;
        }
        if(p==1)
        {
            min=a[i];
            break;
        }
    }

    printf("%d",min);
    return 0;
}
