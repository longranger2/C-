#include<iostream>
using namespace std;
/*#define n 30
int main()
{    
	int count,i,j;
	int status[200]={0};
	count=0;
	j=-1; 
	while(count<(n-1))
	{
		i=0;
		while(1)
		{
			j=(j+1)%n;
			if(status[j]==0)
				i++;
			if(i==5)
			{
				++count;
				status[j]=count;
				break;
			}
		}
		
	}
	for(int k=0;k<n;k++)
		{
			if(status[k]==0)
			cout<<k+1;
		}
	return 0;
}
*/
int main()
{
	string name[5]={"张伟晖","张三","李四","王五","麻六"};
	string *shuzu=name;
	int sz[5]={0};
	int time=5;
	string max; 
	while(time--)
	{
		for(int i=0;i<5;i++)
	{
		if(sz[i]==0)
		{
			max=*(shuzu+i);
			sz[i]=1;
			break;
		}
	}
		for(int i=0;i<5;i++)
		{
			if(sz[i]==0)
			{
				if(*(shuzu+i)>max)
					max=*(shuzu+i);
			}
		}
		cout<<max<<" ";
	}
	
/*
	string name[5]={"张伟晖","张三","李四","王五","麻六"};
	cout<<name[1];
*/
	return 0;
}




