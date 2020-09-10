#include<stdio.h>
#include<string.h>
int main()
{
	char a[60]={0};
	int n,i,t;
	t=1;
	while(scanf("%s",a)!=EOF)
	{
		

		//getchar();
		n=strlen(a);
		for(i=0;i<n-2;i++)
		{
			if(a[i]=='s'&&a[i+1]=='z'&&a[i+2]=='u')
			{
				a[i]='S';
				a[i+1]='Z';
				a[i+2]='U';
				
			}	
			
		}
		//a[n]='\0';
		puts(a);
		
	}
	return 0;
}
