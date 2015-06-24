#include<iostream>
#include<stdlib.h>
using namespace std;
main(){

int i,m,n,l=0,j;
cout<<"enter the size of array";
cin>>n;
int *arr=(int*)malloc(n*sizeof(int));
cout<<"enter the elements of array-"<<endl;
for(i=0;i<n;i++)
cin>>*(arr+i);
cout<<"\n";
for(j=0;j<n;j++){
if(*(arr+j)%2==0)
cout<<*(arr+j)<<endl;
}
return 0;
}

