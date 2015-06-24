#include<iostream>
#include<stdlib.h>
using namespace std;
main(){

int i,n,j,k,l,m,o,p;
cout<<"enter the size of arrays:";
cin>>n;
int *arr=(int*)malloc(n*sizeof(int));
cout<<"enter the elements of array1:"<<endl;
for(i=0;i<n;i++)
cin>>*(arr+i);
cout<<"\n";

int *arr2=(int*)malloc(n*sizeof(int));
cout<<"enter the elements of array2:"<<endl;
for(j=0;j<n;j++)
cin>>*(arr2+j);
cout<<"\n";

int *arr3=(int*)malloc((2*n)*sizeof(int));

for(k=0;k<n;k++)
*(arr3+k)=*(arr+k);
o=n;
for(l=0;l<n;l++){
*(arr3+o)=*(arr2+l);
o++;}
cout<<"array after merging"<<endl;
for(m=0;m<2*n;m++){
	for(p=0;p<m;p++){
	if(*(arr3+m)==*(arr3+p))
	goto null;
	}	
cout<<*(arr3+m);
null:
cout<<"\n";
}
return 0;
}