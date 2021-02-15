#include<iostream>
#include<math.h>
using namespace std;
class CPoint
{
	public:
		CPoint(int a,int b):x(a),y(b){}
		void getX();
		void getY();
		int outputX(){return x;}
		int outputY(){return y;}
		
	private:
		int x;
		int y;
};
class CRectangle
{
	public:
		CRectangle(int a,int b,int c,int d):leftPoint(a,b),rightPoint(c,d){}
		void printPoint();
		friend ostream&operator<<(ostream&,CRectangle&); 
		friend bool operator==(CRectangle&,CRectangle&);
		friend bool operator>(CRectangle&,CRectangle&);
		friend bool operator*(CRectangle&,CRectangle&);

		operator int()
		{
			int x_f,y_f,S;
			x_f=rightPoint.outputX()-leftPoint.outputX();
			y_f=leftPoint.outputY()-rightPoint.outputY();
			S=x_f*y_f;
		}
	private:
		CPoint leftPoint;
		CPoint rightPoint;
};
void CPoint::getX()
{
	cout<<x;
}
void CPoint::getY()
{
	cout<<y;
}
ostream&operator<<(ostream&output,CRectangle&c)
{
	c.printPoint();
	return output;
	
}
void CRectangle::printPoint()
{
	leftPoint.getX();
	cout<<" ";
	leftPoint.getY();
	cout<<" ";
	rightPoint.getX();
	cout<<" ";
	rightPoint.getY();
}
bool operator==(CRectangle&c1,CRectangle&c2)
{
	if(c1.leftPoint.outputX()==c2.leftPoint.outputX()&&c1.rightPoint.outputY()==c2.rightPoint.outputY())
		return true;
	else
		return false;
}
bool operator>(CRectangle&c1,CRectangle&c2)
{
	if(c1.leftPoint.outputY()>=c2.leftPoint.outputY()&&c1.rightPoint.outputY()<=c2.rightPoint.outputY()&&
	c1.leftPoint.outputX()<=c2.leftPoint.outputX()&&c1.rightPoint.outputX()>=c2.rightPoint.outputX())
		return true;
	else
		return false;
	
}
bool operator*(CRectangle&c1,CRectangle&c2)
{
	int width1,width2,length1,length2;
	int x_f1,y_f1,x_f2,y_f2;
	width1=c1.leftPoint.outputY()-c1.rightPoint.outputY();
	length1=c1.rightPoint.outputX()-c1.leftPoint.outputX();
	width2=c2.leftPoint.outputY()-c2.rightPoint.outputY();
	length2=c2.rightPoint.outputX()-c2.leftPoint.outputX();
	x_f1=(c1.rightPoint.outputX()+c1.leftPoint.outputX())*1.0/2;
	y_f1=(c1.leftPoint.outputY()+c1.rightPoint.outputY())*1.0/2;
	x_f2=(c2.rightPoint.outputX()+c2.leftPoint.outputX())*1.0/2;
	y_f2=(c2.leftPoint.outputY()+c2.rightPoint.outputY())*1.0/2;
	if(fabs(x_f1-x_f2)>fabs((length1+length2)*1.0/2)&&fabs(y_f1-y_f2)>fabs((width1+width2)*1.0/2))
		return false;
	else
		return true;
 } 

int main()
{
	int t,x1,x2,y1,y2;
	cin>>t;
	while(t--)
	{
		cin>>x1>>y1>>x2>>y2;
		CRectangle rect1(x1,y1,x2,y2);
		cin>>x1>>y1>>x2>>y2;
		CRectangle rect2(x1,y1,x2,y2);
		
		cout<<"矩形1:"<<rect1<<" "<<(int)rect1<<endl;
		cout<<"矩形2:"<<rect2<<" "<<(int)rect2<<endl; 
		
		
		if(rect1==rect2)
			cout<<"矩形1和矩形2相等"<<endl;
		else if(rect2>rect1)
			cout<<"矩形2包含矩形1"<<endl;
		else if(rect1>rect2)
			cout<<"矩形1包含矩形2"<<endl;
		else if(rect1*rect2)
			cout<<"矩形1和矩形2相交"<<endl;
		else
			cout<<"矩形1和矩形2不相交"<<endl;
		cout<<endl;
	}
	return 0;
}
