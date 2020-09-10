#include <stdio.h>
#include <math.h>
int main()
{
	int t,time;
	double x,y;
	scanf("%d",&time);
	for(t=1;t<=time;t++)
	{
		scanf("%lf",&x);
		if (x<0)
		{   y=fabs(x);
			printf("%.2lf\n",y);
		} 
		else if (x>=0 && x<1)
		{   y=sin(2*x);
		    printf("%.2lf\n",y);
		} 
		else if (x>=1 && x<5)
		{   y=sqrt(pow(x,3)+x);
		    printf("%.2lf\n",y);
		} 
		else 
		{   y=2*x+10;
		    printf("%.2lf\n",y);
		}
		
	}
	return 0;
 } 
