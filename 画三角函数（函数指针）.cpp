#include<iostream>
using namespace std; 
#include <math.h>
//void draw( )
void draw( double (*pf)(double) )
{
	int d,i;
	for(d=0;d<=360;d+=15)
	{
//		for(i=0;i<40+35*sin(d*3.1415926/180);i++)
//		for(i=0;i<40+35*(*pf)(d*3.1415926/180);i++)
		for(i=0;i<40+35 * pf(d*3.1415926/180);i++)
		    cout<<' ';
		cout<<"*\n";
	}
}
int main()
{
	draw(sin);
	cout << "========\n";
	draw(&cos);
	
	return 0;
}
