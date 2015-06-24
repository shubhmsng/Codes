#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main() {
	// your code goes here
	int i,t,j,k,l,f,m,n;
	char s1[50000],ch,s2[50000];
	scanf("%d",&t);
	while(t--)
	{   int count1[26]={0};
	    int count2[26]={0};

	    scanf("%s%s",s1,s2);

        i=strlen(s1);
        j=strlen(s2);
        for(k=0;k<i;k++)
            count1[s1[i]-97]++;
        for(k=0;k<j;k++)
            count2[s2[i]-97]++;
	    if(i==j)
	    {
	        for(m=0;m<26;m++)
	        {
	            if(count1[m]!=count2[m])
	            {
	                f=1;
	                break;
	            }
	        }
	            if(f)
	            printf("NO\n");
	            else
	            printf("YES\n");
	        }

	   else
	   printf("NO\n");
	}
	return 0;
}
