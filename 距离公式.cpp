#include <stdio.h>
#include <math.h>
int main()
{
	float x1,y1,x2,y2,X,Y,distn;
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	X=(x1-x2)*(x1-x2);
	Y=(y1-y2)*(y1-y2);
	distn=sqrt(X+Y);
	printf("%.2f",distn);
	return 0;
}
