#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,wei,x,sum,x1,i,j,a,x2;
	scanf("%d",&t);
	while(t--)
	{
		wei=0;
		scanf("%d",&n);
		x=n;
		do
		{
			
			x/=10;
			wei++;
		}
		while(x>0);
		
		{
		sum=1;
		x1=n/pow(10,(wei-1));

		for(i=x1;i>=1;i--)
		{
			sum*=i;
		}
	
		
		for(i=wei-2;i>=1;i--)
		{
			x2=n/pow(10,i)-10*x1;
			a=1;
			for(j=x2;j>=1;j--)
			{
				a*=j;
				
			}
			sum+=a;
			x1=x2;
		}
		if(sum==n)
		printf("yes");
		else 
		printf("no");
		}
	
	    }

	
return 0;
}
