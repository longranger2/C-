#include<iostream>
#include<string.h>
using namespace std;
class Complex
{
	public:
		Complex(){yuan=0;jiao=0;fen=0;}
		Complex(int r,int i,int j){yuan=r;jiao=i;fen=j;}
		friend Complex operator+(Complex &c1,Complex &c2);
		friend Complex operator-(Complex &c1,Complex &c2);
		//friend Complex operator+(Complex &c2);
		void display();
	private:
		int  yuan;
		int  jiao;
		int  fen;
};
Complex operator+(Complex &c1,Complex &c2)
{
	Complex c;
	c.yuan=c1.yuan+c2.yuan;
	c.jiao=c1.jiao+c2.jiao;
	c.fen=c1.fen+c2.fen;
	return c;
}
Complex operator-(Complex &c1,Complex &c2)
{
	Complex c;
	c.yuan=c1.yuan-c2.yuan;
	c.jiao=c1.jiao-c2.jiao;
	c.fen=c1.fen-c2.fen;
	return c;
}

void Complex::display()
{
	int t_fen;
	t_fen=100*yuan+10*jiao+fen;
	yuan=t_fen/100;
	jiao=(t_fen-100*yuan)/10;
	fen=t_fen-yuan*100-jiao*10;
	cout<<yuan<<"Ôª"<<jiao<<"½Ç"<<fen<<"·Ö"<<endl; 
}

int main()
{	
	int time;
	cin>>time;
	while(time--)
	{
		int a,b,c;
		char ch[20];
		cin>>a>>b>>c;
		Complex C(a,b,c);
		cin>>ch;
		while(strcmp(ch,"stop")!=0)
		{
			if(strcmp(ch,"add")==0)
			{
				cin>>a>>b>>c;
				Complex C1(a,b,c);
				C=C+C1;
			}
			if(strcmp(ch,"minus")==0)
			{
				cin>>a>>b>>c;
				Complex C1(a,b,c);
				C=C-C1;
			}
			
			cin>>ch;
			
		}
		C.display();
			
	}
		
	return 0;
 } 
