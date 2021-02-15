#include<stdio.h>
int main()
{
	int hour1,hour2,min1,min2,hour,min;
	scanf("%d %d %d %d",&hour1,&min1,&hour2,&min2);
	if ((min2-min1)<0)
	{
		min=60+min2-min1;
		hour=hour2-1-hour1;
		printf("%d %d",hour,min);
	}
	else
	{
		min=min2-min1;
		hour=hour2-hour1;
		printf("%d %d",hour,min);
	}
	return 0;
}
