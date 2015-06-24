#include<stdio.h>
#include<string.h>
main(){

	int i,t,j,k=1,l,r,max=0,q;
	char c[1001],p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",c);
		l=strlen(c);
		for(i=0;i<l;i++)
		{	q=c[i];
			for(j=i+1;j<l;j++)
			{				
				if(c[i]==c[j])
				k++;
			}
				if(k>max){
				p=c[i];
				r=c[i];
				max=k;
				}
				if(k==max&&q<r)
				{
					p=c[i];
					r=c[i];
				}
			
			//printf("b[i]=%c  q=%d  p=%c  max=%d  k=%d\n",c[i],q,p,max,k);
			k=1;
		}
		
	for(i=0;i<l;i++)
	{
		if(c[i]==p)
			c[i]='?';	
				
				}
	for(i=0;i<l;i++)
	printf("%c",c[i]);
	//printf("%d",l);
	max=0;
	printf("\n");
	
}
return 0;


}