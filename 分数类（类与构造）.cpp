#include<iostream>
using namespace std;
//void getGCD(int p,int q); 
//void printFS(int p,int q); 

class CFraction
{
	private:
     int fz, fm;
	public:
     CFraction(int fz_val, int fm_val) ;
     CFraction add(const CFraction &r);
     CFraction sub(const CFraction &r);
     CFraction mul(const CFraction &r);
     CFraction div(const CFraction &r);
     int getGCD();   // 求对象的分子和分母的最大公约数
     void print();
/*public:
     int fz;
     int fm;
     void addFS(CFraction.fz,CFraction.fm);
     void subFS(CFraction.fz,CFraction.fm);
     void mulFS(CFraction.fz,CFraction.fm);
     void divFS(CFraction.fz,CFraction.fm);
       // 求对象的分子和分母的最大公约数
 */    
};
CFraction::CFraction(int fz_val, int fm_val)
{
	fz=fz_val;
	fm=fm_val;
}

CFraction CFraction::add(const CFraction &r)
{
	int fz_f,fm_f;
	fz_f=fz*r.fm+fm*r.fz;
	fm_f=fm*r.fm;
	//getGCD()
	//printf("%d/%d",fz,fm);
	//getGCD(fz_f,fm_f); 
	CFraction t(fz_f,fm_f);
	t.getGCD();
	t.print();
}

CFraction CFraction::sub(const CFraction &r)
{
	int fz_f,fm_f;
	fz_f=fz*r.fm-fm*r.fz;
	fm_f=fm*r.fm;
	CFraction t(fz_f,fm_f);
	t.getGCD();
	t.print();
}

CFraction CFraction::mul(const CFraction &r)
{
	int fz_f,fm_f;
	fz_f=fz*r.fz;
	fm_f=fm*r.fm;
	CFraction t(fz_f,fm_f);
	t.getGCD();
	t.print();
}

CFraction CFraction::div(const CFraction &r)
{
	int fz_f,fm_f;
	fz_f=fz*r.fm;
	fm_f=fm*r.fz;
	CFraction t(fz_f,fm_f);
	t.getGCD();
	t.print();
}

/*void getGCD(int p,int q)
{
	int min,max,r;
	int fz_f,fm_f;
	min=p<q? p:q;
	max=p>q?p:q;
	do
	{
		r=max%min;
		max=min;
		min=r;
		
	}
	while(r!=0);
	p=p/max;
	q=q/max;	
	fz_f=p;
	fm_f=q;
	printFS(fz_f,fm_f);
}
void printFS(int p,int q)
{
	if(q>0)
		printf("%d/%d\n",p,q);
	else
	{
		q=-q;
		p=-p;
		printf("%d/%d\n",p,q);
	}
}*/
int CFraction::getGCD()
{
	int min,max,r;
//	int fz_f,fm_f;
	min=fz<fm? fz:fm;
	max=fz>fm?fz:fm;
	do
	{
		r=max%min;
		max=min;
		min=r;
		
	}
	while(r!=0);
	fz=fz/max;
	fm=fm/max;	
	return 0;
}
void CFraction::print()
{
	if(fm>0)
		printf("%d/%d\n",fz,fm);
	else
	{
		fm=-fm;
		fz=-fz;
		printf("%d/%d\n",fz,fm);
	}
}

int main()
{
	int time;
	cin>>time;
	while(time--)
	{
		int x1,y1,x2,y2;
		scanf("%d/%d",&x1,&y1);
		scanf("%d/%d",&x2,&y2);
	//	cin>>x2>>y2;
		CFraction fs1(x1,y1);
		CFraction fs2(x2,y2);
	//	fs1.print();
		//fs2.print();
		//int x2,y2;
		//x2=;
		//y2=;
		/*fs1.addFS(fs2.fz,fs2.fm);
		fs1.subFS(fs2.fz,fs2.fm);
		fs1.mulFS(fs2.fz,fs2.fm);
		fs1.divFS(fs2.fz,fs2.fm);
		*/
		fs1.add(fs2);
		fs1.sub(fs2);
		fs1.mul(fs2);
		fs1.div(fs2);
		cout<<endl;
	}
	return 0;
}


