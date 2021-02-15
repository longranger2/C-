#include<stdio.h>
int main()
{
	int time;
	scanf("%d",&time);
	while(time--)
	{
		int i,j;
		int sz[2][3];
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
				scanf("%d",&sz[i][j]);
		}
		int (*p)[3];
		p=sz;
		for(j=2;j>=0;j--)
		{
			for(i=0;i<2;i++)
				printf("%d ",*(*(p+i)+j));
			printf("\n");
		}	
			
		
	}
	return 0;
}
