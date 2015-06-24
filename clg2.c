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

    int t,i,j,k,l,n,p;
    scanf("%d", &t);
    while(t--)
    {   scanf("%d",&n);
        int a[n],s=0,p=1;

        for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        p = p*10;
        }
        partition(a, 0, n-1);

        if(a[0]!= 0)
        {
            for(i = 0; i < n; i++){
                s = s + a[i]*p;
                p = p/10;
        }

        }
        if (a[0] == 0){}
            a[0] = a[1];
            a[1] = 0;

            for(i = 0; i < n; i++){
                s = s + a[i]*p;
                p = p/10;
        }

    printf("%d\n",s/10);
    }

    return 0;
}
