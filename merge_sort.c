#include<stdio.h>
//#define MAX 50
int n;
void mergeSort(int arr[],int low,int mid,int high);
void partition(int arr[],int low,int high);

int main(){

    int i;

   // printf("Enter the total number of elements: ");
    scanf("%d",&n);
	int merge[n];
   // printf("Enter the elements which to be sort: ");
    for(i=0;i<n;i++){
         scanf("%d",&merge[i]);

		//merge[i]=rand();
    }

	//for(i=0;i<n;i++)
	//printf("%d  ",merge[i]);
    partition(merge,0,n-1);

    //printf("\nAfter merge sorting elements are: \n");
    for(i=0;i<n;i++){
         printf("%d ",merge[i]);
    }

   return 0;
}

void partition(int arr[],int low,int high){

    int mid;
	
    if(low<high){
		
         mid=(low+high)/2;
		 printf("part low = %d, mid = %d, high = %d\n",low,mid,high);
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}

void mergeSort(int arr[],int low,int mid,int high){

    int i,m,k,l,temp[high];
	printf("merge low = %d, mid = %d, high = %d\n",low,mid,high);
	
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
