#include<stdio.h>
void ZJ(int shuzu[3][3]); 
int main()
{
	int i,j;
	int shuzu[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&shuzu[i][j]); 
	}
	ZJ(shuzu);
	return 0;
 } 
 
 void ZJ(int shuzu[3][3])
 {
 	for(int j=0;j<3;j++)
 	{
 		for(int i=0;i<3;i++)
 		{
 			if(i==2)
 				printf("%d",shuzu[i][j]);
 			else 
 				printf("%d ",shuzu[i][j]);
		 }
		 printf("\n");
	 }
 }
