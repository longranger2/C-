#include<iostream>
#include<math.h>
using namespace std;
class Point
{
	public:
		Point(double,double);
		friend double Distance(Point &, Point &);
	private:
		double x;
		double y;
};
Point::Point(double xx,double yy)
{
	x=xx;
	y=yy;
}
double Distance(Point &a, Point &b)
{
	double x_f,y_f;
	int dist;
	x_f=a.x-b.x;
	y_f=a.y-b.y;
	dist=sqrt(x_f*x_f+y_f*y_f);
	cout<<dist<<endl;
}
int main()
{
	int time;
	cin>>time;
	while(time--)
	{
		
		double x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		Point p1(x1,y1),p2(x2,y2);
		Distance(p1,p2);
	}
	return 0;
}
