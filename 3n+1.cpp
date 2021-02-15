#include<stdio.h>
int main()
{
	int num,time,T,i;
	
	scanf("%d",&T);
	for (i=1;i<=T;i++)
	{
		scanf("%d",&num);
		time=0;
		while(num!=1)
		{
			
			if(num%2==0) num=num/2;
			else num=num*3+1;
			time++;
		}
		 
		printf("%d",time);
		if (i==T)
		printf("");
		else
		printf(" ")	;
	}
	
	
	return 0;
 } 
