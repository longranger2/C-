#include<stdio.h>
int main()
{
	int day,num,i;
	scanf("%d",&day);
	num=1;
	for (i=1;i<day;i++)
	{
		num=(num+1)*2;
	}
	printf("%d",num);
	return 0;
 } 
