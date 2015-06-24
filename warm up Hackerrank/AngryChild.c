#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/** The code to read from STDIN and output to STDOUT has been provided by us, for convenience. You may or may not use this. **/
int N;
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

    int i,m,k,l,temp[N];

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
    int K,j,s,d=1000000000,max,min;
    int i,unfairness;
    scanf("%d %d",&N,&K);
    int a[N+1];

    for(i = 0;i < N;i++)
        scanf("%d",&a[i]);
        partition(a,0,N-1);
    for(i=0; i<=N-K; i++)
    {       min=1000000000;
            max=0;

        for(j=i; j<K+i; j++)
        {
            if(max<a[j])
                max=a[j];
            if(min>a[j])
                min=a[j];
        }
        s=max-min;
        if(d>s)
            d=s;
    }
      unfairness=d;
    printf("%d",unfairness);
    return 0;
}
