#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
void PF(int a);
void Sqrt(float a);
void DX(char *zf);

int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char ch;
		scanf("%c",&ch);
		if(ch=='I')
		{
			void (*p)(int);
			int num;
			p=PF;
			scanf("%d",&num);
			p(num);
			getchar();
		}
		else if(ch=='F')
		{
			void (*p)(float);
			float num;
			p=Sqrt;
			scanf("%f",&num);
			p(num);
			getchar(); 
		}
		else if(ch=='S')
		{
			void (*p)(char *zf);
			char *zf;
			char th[100];
			p=DX;
			scanf("%s",th);
			zf=th;
			p(zf);
			getchar();
		}
		
	}
	return 0;
 } 
 
 void PF(int a)
 {
 	int outcome;
 	outcome=a*a;
 	printf("%d\n",outcome);
 }
 
 void Sqrt(float a)
 {
 	float outcome;
 	outcome=sqrt(a);
 	printf("%.1f\n",outcome);
 }
 void DX(char *zf)
 {
 	int len;
 	len=strlen(zf);
 	for(int i=0;i<len;i++)
 	{
 		if(zf[i]>='a'&&zf[i]<='z')
		 	printf("%c",zf[i]-'a'+'A');
		if(zf[i]>='A'&&zf[i]<='Z')
			printf("%c",zf[i]);
	 }
	 printf("\n");
 }
 
