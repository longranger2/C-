#include <stdio.h>
int main()
{
	int time,t,day1,day2,all_day,all_floor,n,minMutiple;
	scanf("%d",&time);
	for (t=1;t<=time;t++)
	{   
	    scanf("%d %d %d",&day1,&day2,&n);
		if (day1==day2)
		{
			all_day=n/(day1+1);
			all_floor=all_day*36;
			printf("%d\n",all_floor);
			
		}
		else 
		{
			minMutiple=((day1+1)>(day2+1)) ? (day1+1):(day2+1);
			while (1)
			{
				if (minMutiple%(day1+1)==0 && minMutiple%(day2+1)==0)
				break;
				else
				minMutiple++;
			}
			all_day=n/minMutiple;
			all_floor=all_day*36;
			printf("%d\n",all_floor);
		}
	}
	return 0;
}

