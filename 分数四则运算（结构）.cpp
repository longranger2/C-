#include<stdio.h>
void addFS(int x1,int y1,int x2,int y2);
void subFS(int x1,int y1,int x2,int y2);
void mulFS(int x1,int y1,int x2,int y2);
void divFS(int x1,int y1,int x2,int y2);
void getGCD(int p,int q);
int printFS(int p,int q);


struct grade
{
	int mole;
	int deno;
};


int main()
{
	int time;
	scanf("%d",&time);
	while(time--)
	{
		struct grade a,b;
		scanf("%d/%d",&a.mole,&a.deno);
		scanf("%d/%d",&b.mole,&b.deno);
		addFS(a.mole,a.deno,b.mole,b.deno);
		subFS(a.mole,a.deno,b.mole,b.deno);
		mulFS(a.mole,a.deno,b.mole,b.deno);
		divFS(a.mole,a.deno,b.mole,b.deno);
		printf("\n");
		//printf("%d%/%d %d/%d",a.mole,a.deno,b.mole,b.deno);
	}
	return 0;
 } 

void addFS(int x1,int y1,int x2,int y2)
{
	int fz,fm;
	fz=x1*y2+y1*x2;
	fm=y1*y2;
	//printf("%d/%d",fz,fm);
	getGCD(fz,fm);
	
}

void subFS(int x1,int y1,int x2,int y2)
{
	int fz,fm;
	fz=x1*y2-y1*x2;
	fm=y1*y2;
	getGCD(fz,fm);
}

void mulFS(int x1,int y1,int x2,int y2)
{
	int fz,fm;
	fz=x1*x2;
	fm=y1*y2;
	getGCD(fz,fm);
}

void divFS(int x1,int y1,int x2,int y2)
{
	int fz,fm;
	fz=x1*y2;
	fm=y1*x2;
	getGCD(fz,fm);
}

void getGCD(int p,int q)
{
	int min,max,r;
	min=p<q? p:q;
	max=p>q?p:q;
	do
	{
		r=max%min;
		max=min;
		min=r;
		
	}
	while(r!=0);
	p=p/max;
	q=q/max;	
	printFS(p,q);
}

int printFS(int p,int q)
{
	if(q>0)
		printf("%d/%d\n",p,q);
	else
	{
		q=-q;
		p=-p;
		printf("%d/%d\n",p,q);
	}
	return 0;
}
