#include<stdio.h>
main()
{
    long long unsigned x,y,i,z,e,c;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%llu",&x);

		scanf("%llu",&y);
		if (x == 1) x+= 1;
		if(x==2)printf("2\n");
		if(x%2==0)x+=1;
		if(y%2==0)y-=1;
		for(i=x;i<=y;i+=2)
		{
			z=i;
			e=0;
			for(c=2;c*c<=z;c++)
				if(z%c==0) 
				{ 
					e++; 
					break;
				}
			
			if(e==0) printf("%llu\n",z);

		}
		if (t!=0)
		printf("\n");
	}
   return 0;
}    