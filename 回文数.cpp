#include<stdio.h>
#include<string.h>
int HW(char ch[]);
int main()
{
	int T,flag;
	char ch[20]; 
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",ch);
		flag=HW(ch);
		if(flag==1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}

int HW(char ch[])
{
	int i,j,n,t=1;
	n=strlen(ch);
	for(i=0;i<n/2;i++)
	{
		if(ch[i]!=ch[n-1-i])
		{
			t=0;
			break;
		}
	}
	return t;
}
