#include<iostream>
using namespace std;
int main()
{
	int i; 
 
char *name[]={"张伟晖","张三","李四","王五","麻六"};
	char **p=name;
	for(i=0;i<5;i++)
		for(int k=i+1;k<5;k++)
		{	char *t;
			for(int j=0;j<=sizeof(*name[i]);j++)
				{	
					if(*(*(p+i)+j)<*(*(p+k)+j))
						{	
							t=*(p+i);		
							*(p+i)=name[k];
							name[k]=t;
							break;
						}
				}
		}
		for(i=0;i<5;i++)
			cout<<*(p+i)<<endl;	
			system("pause");
		return 0;
}
