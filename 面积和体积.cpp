#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("V=%d\n",a*b*c);
	printf("S=%d",2*a*b+2*a*c+2*b*c);
	
	return 0;
}
