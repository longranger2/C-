#include<stdio.h>
int main()
{
	float Y=0.0516;
 	float E=6.6744;
 	float D=6.2619;
 	float H=0.8065;
 	int time;
	scanf("%d",&time);
	while(time--)
	{
		char ch;
		float num;
		getchar();
		scanf("%c%f",&ch,&num);
		if(ch=='Y')
		{
			float *p;
			p=&Y;
			printf("%.4f\n",(*p)*num);
		}
		else if(ch=='E')
		{
			float *p;
			p=&E;
			printf("%.4f\n",(*p)*num);
		}
		else if(ch=='D')
		{
			float *p;
			p=&D;
			printf("%.4f\n",(*p)*num);
		}
		else if(ch=='H')
		{
			float *p;
			p=&H;
			printf("%.4f\n",(*p)*num);
		}
	}
	
	return 0;
}
