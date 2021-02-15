#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int T,n,i;
	scanf("%d",&T);
	while(T--)
	{
		
		scanf("%s",&s1);
		scanf("%s",&s2);
		
		s1[20]={0};
		n=strlen(s2);
		for(i=0;i<n;i++)
		{
			s1[i]=s2[i];
		}
		for(i=0;i<n;i++)
		{
			printf("%c",s1[i]);
		}
		printf("\n");
	}
	
	return 0;
}
