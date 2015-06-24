#include<iostream>
#include <stdio.h>
using namespace std;
int main() {
	// your code goes here
	int n,m,k,i,j,c,d,l,r,max;
    int a[n];
	cin>>n>>m>>k;
	for (i = 0; i< n; i++)
	    cin>>a[i];
	while(k--){
	    cin>>l>>r;
	    max = 0;
	    for (i = l-1; i < r; i++ ){
	        j = l-1;
	        c = 0;
	        while(j < r){

	            if (a[i] == a[j]){
	                c = j;

	            }
	            j++;
	        }
	        d = c - i;
	        if(d > max)
	        max = d;
	    }
	   cout<<max;
	}

	return 0;
}

