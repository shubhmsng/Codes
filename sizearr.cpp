#include<iostream>
using namespace std;
main(){

int *p,a[10],i,s,*q;

for(i=0;i<9;i++)
cin>>a[i];

cout<<"\n";
cout<<"size of array:";

p=&a;
i=0;
q=&a;
cout<<"p:"<<p<<endl;;
cout<<"q:"<<q<<endl;
cout<<(q-p)<<endl;
cout<<sizeof(a);
return 0;


}