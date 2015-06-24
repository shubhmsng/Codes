#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
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

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m,i,j,flag =0;;
    scanf("%d",&n);
    while(n--){
      int a[n];
      flag = 0;
    for(i = 0; i < n; i++)
     scanf("%d",&a[i]);
    partition(a, 0, n-1);
    for(i = 0; i < n-1 ; i++)
        if((a[i+2]*a[i+2]) == (a[i+1]*a[i+1]) + (a[i]*a[i]))
            flag++;
    }
    printf("%d",flag);
    return 0;
}
