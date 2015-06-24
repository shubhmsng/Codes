#include<stdio.h>

int main()
{
	int n,i,j,max = 0,key,key1,tot,complete;
	float tt = 0.0,wt = 0.0;
	char key2;
	printf("enter no. of process: ");
	scanf("%d",&n);
	
	struct process {
	char name[10];
	int arr_time;
	int burst_time;
	};
	
	struct scheduling{
		int waiting_time;
		int turn_arrnd_time;
	};
	
	struct process p[n];
	struct scheduling result[n];
	for (i = 0; i < n; i++)
	{
		printf("Enter Process Name,Arrival time and Burst Time :");
		scanf("%s%d%d",p[i].name,&p[i].arr_time,&p[i].burst_time);
	}
	printf("\n\n");
	for(i = 1; i < n; i++)
	{
		key = p[i].arr_time;
		key1 = p[i].burst_time;
		key2 = p[i].name[1];
		j = i - 1; 
		while(j >= 0 && key < p[j].arr_time)
		{
			p[j+1].arr_time = p[j].arr_time;
			p[j+1].burst_time = p[j].burst_time;
			p[j+1].name[1] = p[j].name[1];
			j--;
		}
		p[j+1].arr_time = key;
		p[j+1].burst_time = key1;
		p[j+1].name[1] = key2;
	}
	tot = p[0].arr_time;
	for(i = 0; i < n; i++)
	{	

		result[i].waiting_time = tot - p[i].arr_time;
		result[i].turn_arrnd_time = result[i].waiting_time + p[i].burst_time;
		tot = tot + p[i].burst_time;
		wt = wt + result[i].waiting_time;
		tt = tt + result[i].turn_arrnd_time;
		
	}
	
	tt = tt/(n*1.0);
	wt = wt/(n*1.0);
	
	printf("Process Name  arrival_time  burst_time  waiting_time  turn around time\n");
	for (i = 0; i < n; i++)
	{
		
		printf("%c%c\t\t %d\t\t %d\t\t %d\t\t %d\t\t\n",p[i].name[0],p[i].name[1],p[i].arr_time,p[i].burst_time,result[i].waiting_time,result[i].turn_arrnd_time);
	}
	printf("\n\n");
	printf("Average Waiting Time: %f\nAverage Turn Around Time: %f",wt,tt);

	return 0;
}