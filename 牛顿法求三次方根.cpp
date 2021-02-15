#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	float x1,x2,x3,a;
	scanf("%d",&t);
	while(t--)
	{
		x1=1;
		scanf("%f",&a);
		do
		{
			x3=x1;
			x2=(2*x1+a/(x1*x1))/3;
			x1=x2;
			
		}
		while(fabs(x3-x1)>1e-5);
		printf("%.5f",x1);
	}
	return 0;
 } 
