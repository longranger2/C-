#include<stdio.h>
int main()
{
	int big[8]={0x8,0x8,0x8,0x7f,0x8,0x14,0x2a,0x41};
	unsigned int t;
	int i,j;
	for(i=0;i<8;i++)
	{
		t=0x80000000;
		for(j=0;j<32;j++)
		{
			if((t&big[i])!=0)
				putchar('*');
			else
				putchar(' ');
			t>>=1;//��t=λ�����������1λ 
		}
		printf("\n"); 
	}
	return 0;
 } 
