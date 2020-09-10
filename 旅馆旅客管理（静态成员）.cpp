#include<iostream>
#include<string.h>
using namespace std;
class Customer
{
	public:
		Customer(char *name);
		~Customer()
		{cout<<"";}
		static void changeYear(int r);
		void Display();
	private:
		static int TotalCustNum;
		static int rent;
		static int Year;
		int CustID;
		char* CustName;
}; 
int Customer::TotalCustNum=0;
int Customer::rent=150;
int Customer::Year=2014;

Customer::Customer(char *name)
{
	CustName=name;
	TotalCustNum+=1;
	CustID=Year*10000+TotalCustNum;
}
void Customer::changeYear(int r)
{
	Year=r;
}
void Customer::Display()
{
	cout<<CustName<<" "<<CustID<<" "<<TotalCustNum<<" "<<rent*TotalCustNum<<endl;
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int year;
		cin>>year;
		Customer::changeYear(year);
		char ch[20];
		cin>>ch;
		while(strcmp(ch,"0")!=0)
		{
			char th[20];
			char *p;
			p=ch;
			Customer gk(p);
			gk.Display();
			cin>>th;
			strcpy(ch,th);
			
		}
	}
	return 0;
 } 
