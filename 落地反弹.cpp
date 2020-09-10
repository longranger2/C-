#include <stdio.h>
int main()
{
	int n,i;
	double a=0,b=0,h;
	scanf("%lf %d",&h,&n);
	a=h;
	for (i=1;i<=n-1;i++)
	{
		b=h/2;
		b=(int)((b*1000+5)/10)/100.0;
		h=h/2;
		h=(int)((h*1000+5)/10)/100.0;
		a+=2*b;
		a=(int)((a*1000+5)/10)/100.0;
	}
	b/=2;
	b=(int)((b*1000+5)/10)/100.0;
	printf("%.2f\n%.2f",a,b);
	return 0;
}
