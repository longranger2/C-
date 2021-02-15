#include<stdio.h>
void count(int num);
int main()
{
	int num;
	scanf("%d",&num);
	count(num);
	return 0;
}

void count(int num)
{
	int t=0;
	for(int num1=2;num1<=num/2;num1++)
	{
		int flag1=1,flag2=1;
		for(int j=2;j<=num1/2;j++)
		{
			if(num1%j==0)
			{
				flag1=0;
				break;
			}	
		}
		for(int j=2;j<=(num-num1)/2;j++)
		{
			if((num-num1)%j==0)
			{
				flag2=0;
				break;
			}	
		}
		if(flag1==1&&flag2==1)
		{
			t++;
		}
		
	}
	printf("%d",t);
}
