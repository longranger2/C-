#include<stdio.h>
int main()
{
	int time,num,i;
	scanf("%d",&time);
	
	while(time--)
	{
		i=0;
		scanf("%d",&num);
		if((num+4)%2==0)
		printf("Yes\n");
		else 
		{
			while(num!=0) 
			{
				num/=10;
				i++;
			}
			if(i%6==0)
			printf("Yes\n");
			else
			printf("No\n");
			
		}
		
		
	
	}
	return 0;
}
