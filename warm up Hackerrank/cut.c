#include <stdio.h>
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

    int i,m,k,l,temp[high+1];

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


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j,k=1,f,l;
    scanf("%d",&n);
    int a[n+1];

    for(i=1;i<=n;i++)
       scanf("%d",&a[i]);
    partition(a,1,n);

    printf("%d\n",n);

        for(i=1;i<=n;i=i)
        {   f=0;
            l=a[i];
            for(j=i;j<=n;j++)
                a[j]=a[j]-a[i];
            while(a[i]==0)
                i++;
            for(k=1;k<=n;k++)
            {
                if(a[k]!=0)
                f++;
            }
            if(f)
            printf("%d\n",f);
    }

     return 0;
}
