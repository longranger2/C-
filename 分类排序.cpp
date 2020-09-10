#include<stdio.h>
int main()
{
	int T,num,i,flag,k,t,j;
	int a[11],b[11],c[11];
	scanf("%d",&T);
	while(T--)
	{
		for(i=0;i<10;i++)		
			scanf("%d",&a[i]);
		scanf("%d",&num);
		flag=0;
		for(i=0;i<10;i++)
		{
			if(a[i]==num);
				flag=1;
				break;
		}
		if(num%2!=0&&flag==1)
		{
			for(i=0;i<9;i++)
			{	
				k=i;
				for(j=i+1;j<10;j++)
				{
					if(a[k]>a[j])
						k=j;
				}
				if(k!=i)
					{
						t=a[i];
						a[i]=a[k];
						a[k]=t;
					}
			}
			for(i=0;i<10;i++)
			{
				if(num!=a[i]&&i!=9)
					printf("%d ",a[i]);
				else if(num!=a[i]&&i==9)
					printf("%d",a[i]);
			}
			printf("\n");
		}
		else if(num%2==0&&flag==0)
		{
			
			printf("%d",num);
			/*for(i=0;i<10;i++)
			{	
				k=i;
				for(j=i+1;j<11;j++)
				{
					if(a[k]<a[j])
						k=j;
				}
				if(k!=i)
					{
						t=a[i];
						a[i]=a[k];
						a[k]=t;
					}
			}
			for(i=0;i<11;i++)
			{
				if(i!=10)
					printf("%d ",a[i]);
				else 
					printf("%d",a[i]);
			}
			printf("\n");
			*/
		}
	/*	else
		{
			for(i=0;i<10;i++)
			{
				if(a[i]%2!=0)
				{
					b[i]=a[i];
				}
				else
					c[i]=a[i];
					
			}
			for(i=0;i<10;i++)
			{	
				k=i;
				for(j=i+1;j<10;j++)
				{
					if(b[k]<b[j])					
						k=j;					
				}
				if(k!=i)
				{
					t=a[i];
					b[i]=b[k];
					b[k]=t;
				}
			}
			for(i=0;i<10;i++)
			{
				
				printf("%d ",a[i]);
				
			}
			for(i=0;i<10;i++)
			{	
				k=i;
				for(j=i+1;j<10;j++)
				{
					if(c[k]<c[j])
						k=j;
				}
				if(k!=i)
				{
					t=a[i];
					c[i]=c[k];
					c[k]=t;
				}
			}
			for(i=0;i<10;i++)
			{
				if(i!=9)
					printf("%d ",c[i]);
				else 
					printf("%d",c[i]);
			}
			printf("\n");
			
			
		}
		*/
	
	}
	return 0;
}
