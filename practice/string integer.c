#include <stdio.h>
#include<stdlib.h>
int main() {
	// your code goes here
	int t;
	char ch,s[10001];
	scanf("%d",&t);
	t++;
	while(t!=0)
	{   int i,j,k=0;
        char a[10001];
	    ch=0;
	    for(i=0;ch!='\n';i++)
	    {
	        scanf("%c",&s[i]);
	        ch=s[i];
	        if(s[i]<48||s[i]>58)
	           { a[k]=s[i];
	           k++;
	           }
	    }
	    for(j=0;j<k;j++)
            printf("%c",a[j]);
       // printf("\n");

    t--;
	}
	return 0;
}

