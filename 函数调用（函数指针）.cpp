#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
void PF(int a);
void Sqrt(float a);
void DX(char *zf);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char ch;
		scanf("%c",&ch);
		if(ch=='I')
		{
			void (*p)(int);
			int num;
			p=PF;
			cin>>num;
			p(num);
		}
		else if(ch=='F')
		{
			void (*p)(float);
			float num;
			p=Sqrt;
			cin>>num;
			p(num);
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
 	cout<<outcome<<endl;
 }
 
 void Sqrt(float a)
 {
 	float outcome;
 	outcome=sqrt(a);
 	cout<<outcome<<endl;
 }
 void DX(char *zf)
 {
 	strupr(zf);
 	cout<<zf<<endl;
 }
 
