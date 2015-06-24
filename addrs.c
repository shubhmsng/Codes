#include<stdio.h>
int fop(){
FILE *fp;
int b;
fp = fopen("address.dat","r");
fscanf(fp,"%d",b);
return b;
}
main()
{	
	int a[2][3],i,j,*p,b;
	FILE *fp=fopen("address.dat","w+");
		
	for( i=0; i < 2; i++)
	{
	
		for( j=0; j < 3; j++)
		
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	
	printf("enter index i,j:"); 
	scanf("%d",&i,&j);
	
	int m=2;
	int x,y;
	p=&a[0][0];
	
	fprintf(fp,"%d",p);
	
	fclose(fp);
	
	//
	
	b=fop();
	printf("base address:%d",b);
	
	printf("\naddress after row major calculation:");
	
	x=b+(m*(i-1)+(j-1));
	printf("%d",x);
	
	printf("\n actual adress:");
	
	p=&a[i-1][j-1];
	
	printf("%d",*p);
	//fclose(fp);
	
	
	return 0;

	
}