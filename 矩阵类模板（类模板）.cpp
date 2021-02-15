#include<iostream>
using namespace std;
template<class numtype>
class Matrix
{
	private:
		numtype shuzu[100][100];
		int row;
		int col;
	public:
		void set()
		{
			cin>>row>>col;
			for(int i=0;i<row;i++)
				for(int j=0;j<col;j++)
					cin>>shuzu[i][j];
		}
		void transport()
		{
			int t;
			t=row;
			row=col;
			col=t;
		}
		void print()
		{
			
			for(int i=0;i<row;i++)
				for(int j=0;j<col;j++)
				{
					if(j==col-1)
						cout<<shuzu[j][i]<<endl;
					else
						cout<<shuzu[j][i]<<" ";
				}
			
		}
};
int main()
{
	int time;
	cin>>time;
	while(time--)
	{
		char ch;
		cin>>ch;
		if(ch=='I')
		{
			Matrix<int> zs;
			zs.set();
			zs.transport();
			zs.print();
		}
		else if(ch=='D')
		{
			Matrix<double> fd;
			fd.set();
			fd.transport();
			fd.print();
		}
		else if(ch=='C')
		{
			Matrix<char> zf;
			zf.set();
			zf.transport();
			zf.print();
		}
	}
	return 0;
 } 
