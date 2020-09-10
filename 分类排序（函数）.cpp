#include<stdio.h>
#include<string.h>
int Find(int shuzu[],int a);
void Sort_up(int shuzu[]);
void Sort_down(int shuzu[],int a);
void Display(int shuzu[],int flag,int a);
void Reverse(int shuzu[]);

int main()
{
	int shuzu[11],T,a,flag;
	scanf("%d",&T);
	while(T--)
	{
		for(int i=0;i<10;i++)
		{
			scanf("%d",&shuzu[i]);
		}
		scanf("%d",&a);
		flag=Find(shuzu,a);
		if(a%2!=0&&flag!=-1)
		{
			Sort_up(shuzu);
			Display(shuzu,flag,a); 
			
		}
		else if(a%2==0&&flag==-1)
		{
			Sort_down(shuzu,a);
			Display(shuzu,flag,a);
		}
		else
		{
			Reverse(shuzu);
			Display(shuzu,flag,a);
		}
	}
	return 0;
 }
 
 int Find(int shuzu[],int a)
 {
 	int t=10;
 	for(int i=0;i<10;i++)
 	{
 		if(shuzu[i]==a)
 			t=i;
	 }
	 if(t==10)
	 	t=-1;
	return t;
  } 
  
void Sort_up(int shuzu[])
{
	int zj,k;
	for(int i=0;i<10;i++)
	{
		k=i;
		for(int j=i+1;j<10;j++)
		{
			if(shuzu[k]>shuzu[j])
				k=j;
		}
		if(k!=i)
		{
			zj=shuzu[i];
			shuzu[i]=shuzu[k];
			shuzu[k]=zj;
		}
		
	}
}

void Sort_down(int shuzu[],int a)
{
	shuzu[10]=a;
	int zj,k;
	for(int i=0;i<11;i++)
	{
		k=i;
		for(int j=i+1;j<11;j++)
		{
			if(shuzu[k]<shuzu[j])
				k=j;
		}
		if(k!=i)
		{
			zj=shuzu[i];
			shuzu[i]=shuzu[k];
			shuzu[k]=zj;
		}
		
	}
}

void Reverse(int shuzu[])
{
	int zj,k,s,i;
	//ÆæÊýÅ¼Êý»¥»» 
	for(int i=0;i<10;i++)
	{
		k=i;
		for(int j=i+1;j<11;j++)
		{
			if(shuzu[j]%2!=0)
				k=j;
		}
		if(k!=i)
		{
			zj=shuzu[i];
			shuzu[i]=shuzu[k];
			shuzu[k]=zj;
		}
		
	}
	for(int i=0;i<10;i++)
	{
		if(shuzu[i]%2==0)
		{
			s=i;
			break;
		}	
	}
	for(int i=0;i<s;i++)
	{
		k=i;
		for(int j=i+1;j<s;j++)
		{
			if(shuzu[k]<shuzu[j])
				k=j;
		}
		if(k!=i)
		{
			zj=shuzu[i];
			shuzu[i]=shuzu[k];
			shuzu[k]=zj;
		}
		
	}
	for(int i=s;i<10;i++)
	{
		k=i;
		for(int j=i+1;j<10;j++)
		{
			if(shuzu[k]<shuzu[j])
				k=j;
		}
		if(k!=i)
		{
			zj=shuzu[i];
			shuzu[i]=shuzu[k];
			shuzu[k]=zj;
		}
	}
	
}

void Display(int shuzu[],int flag,int a)
{
	if(flag!=-1&&a%2!=0)
	{
		for(int i=0;i<10;i++)
		{
			if(shuzu[i]!=a&&i!=9)
				printf("%d ",shuzu[i]);
			else if(shuzu[i]!=a&&i==9)
				printf("%d",shuzu[i]);
			else 
				continue;
		}
		
		printf("\n");
	}
	else if(flag==-1&&a%2==0)
	{
		for(int i=0;i<11;i++)
		{
			if(i!=10)
				printf("%d ",shuzu[i]);
			else
				printf("%d",shuzu[i]);
		}
		printf("\n");
	}
	else
	{
		for(int i=0;i<10;i++)
		{
			if(i!=9)
				printf("%d ",shuzu[i]);
			else
				printf("%d",shuzu[i]);
		}
		printf("\n");
	}
	
	
	
}
