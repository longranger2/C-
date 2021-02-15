#include<stdio.h>
int main()
{
	int num,a,b,c;
	scanf("%d",&num);
	a=num/100;
	b=num/10-a*10;
	c=num-a*100-b*10;
	printf("%d",a+b+c);
	return 0;
}
