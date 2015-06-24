#include<iostream>

using namespace std;


int prime(int a,int b){
int k,l=0,mul=1,p,i;
			for(i=a;i<=b;i++){
			for(k=2;k<i;k++){
			if(i%k==0)
			l=1;
			}
			if(i==2)
			l=0;
			if(l==0)
			mul=mul*i;
			l=0;
			}
			
			cout<<mul;
			
}
int main(){
	
	int t,a1,a2,i;
	
	cin>>t;

	for(i=0;i<t;i++){
	
		cin>>a1>>a2;
		
		
			
		prime(a1,a2);
		
	if(i!=t-1)
	cout<<"\n";
	}
	return 0;
}
			