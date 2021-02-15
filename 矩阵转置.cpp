#include<stdio.h>
int main()
{
	int T,n,m,i,j;
	int a[50][50];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(j=0;j<m;j++)
		{
			for(i=0;i<n;i++)
			{
				if(i==n-1) 
					printf("%d",a[i][j]);
				else
					printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
