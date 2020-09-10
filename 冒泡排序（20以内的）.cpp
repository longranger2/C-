#include<stdio.h>
int main()
{
	int T,num,i,j,t;
	int shuzu[20];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&num);
		for(int k=0;k<num;k++)
			scanf("%d",&shuzu[k]);
		
		for(i=1;i<num;i++)
		{
			for(j=0;j<num-i;j++)
			{
				if(shuzu[j]>shuzu[j+1])
				{
					t=shuzu[j];
					shuzu[j]=shuzu[j+1];
					shuzu[j+1]=t;
				}
			}
			for(int k=0;k<num;k++)
			{
				if(k!=num-1)
					printf("%d ",shuzu[k]);
				else
					printf("%d",shuzu[k]);
			}
			printf("\n"); 
		}
		
	}
	return 0;
 } 
