#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	char a[150][150]={0};
	int b[150]={0};
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}
	int t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]>b[j])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
				char ch[150]={0};
				strcpy(ch,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],ch);
			}
			else if(b[i]==b[j])
			{
				if(strcmp(a[j],a[i])>0)
				{
					char ch[150]={0};
					strcpy(ch,a[i]);
					strcpy(a[i],a[j]);
					strcpy(a[j],ch);
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0;
}
