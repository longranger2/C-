#include<stdio.h>
void direction(struct Spoint d,struct Spoint e);

struct Spoint
{
	int x;
	int y;
}; 


int main()
{
	int time;
	scanf("%d",&time);
	while(time--)
	{
		struct Spoint p,o;
		struct Spoint q,xl1,xl2;
		scanf("%d%d%d%d",&p.x,&p.y,&o.x,&o.y);
		scanf("%d%d",&q.x,&q.y);
		xl1.x=p.x-q.x;
		xl1.y=p.y-q.y;
		xl2.x=o.x-q.x;
		xl2.y=o.y-q.y;
		direction(xl1,xl2);
		
	}
	
	return 0;
 } 

void direction(struct Spoint d,struct Spoint e)
{
 	int judge;
 	judge=d.x*e.y-d.y*e.x;
 	if(judge<0)
 		printf("clockwise\n");
 	else if(judge>0)
	 	printf("anti clockwise\n");
	else
		printf("intersect\n"); 
}
