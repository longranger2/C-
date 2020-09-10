#include <iostream>
using namespace std;
class V {
	int *data;
	int size;
protected:
	int n;
public:
	V(int sz=16):n(0),size(sz),data(new int[sz])
	{ cout << " V(int)\n";	}
	V(V&);//拷贝构造函数 
	~V() {	delete []data; cout << " ~V()\n"; }
	
	void ins(int x,int pos);
	int era(int);
	
	int isempty() { return n==0; }
	
	void inside();
};
V::V(V&v)
{
	n = v.n;
	size = v.size;
	data = new int[size];
	for(int i=0;i<n;i++)
	    data[i] = v.data[i];
	cout << " V(V&)\n";
}

void V::ins(int x,int pos)
{
	for(int i=n;i>pos;i--)
	    data[i] = data[i-1];
	data[pos] = x;
	n++;
}

int V::era(int pos)
{
    int t;
	t = data[pos];
	for(int i=pos;i<n;i++)
	    data[i] = data[i+1];
	n--;
	return t;
}

void V::inside()
{
	cout << "size=" << size << ",n=" << n;
	for(int i=0;i<n;i++)
	    cout << ' ' << data[i];
}
/*
int main()
{
	V v;
	int i;
	for(i=0;i<8;i++)
	    v.ins(i,i);
	    
    v.inside();
	cout << endl;	    
		
	for(i=0;i<8;i++)
	    cout << v.era(0)  << endl;
	return 0;
}
*/

class S:virtual public V {
//class S:public V {
	using V::ins;//禁用基类的函数 
	using V::era;//禁用基类的函数 
public:
	S(int m=32):V(m) { cout << " S(int)\n";	}
	void push(int x) { ins( x,n );	}//栈，先进后出 
	int pop() { return era(n-1); }
};

/*
int main()
{
	S s(16);
	int i;
	for(i=0;i<8;i++)
	    s.push(i);
    s.inside();
	cout << endl;	    
	    
//	s.ins(99,4);
	    
    s.inside();
	cout << endl;	    
		
	for(i=0;i<8;i++)
	    cout << s.pop()  << endl;
	return 0;
}
*/

//class Q:public V {
class Q:virtual public V {
	using V::ins;
	using V::era;
public:
	Q(int m=32):V(m) { cout << " Q(int)\n";	}
	void app(int x) { ins( x,n );	}//队列最后面插进去 
	int ext() { return era(0); }//从队首出去 
};

/*
int main()
{
	Q q(64);
	int i;
	for(i=0;i<8;i++)
	    q.app(i);

    q.inside();
	cout << endl;	    
	
	for(i=0;i<8;i++)
	    cout << q.ext()  << endl;
	return 0;
}
*/

class SQ:public S,public Q {
//	using V::ins;
//	using V::era;
	using S::push;
	using S::pop;
	using Q::app;
	using Q::ext;
public:
	SQ(int m=32):S(m),Q(m) { cout << " SQ(int)\n";	}
	void in(int x) { push( x );	}
	int extf() { return ext(); }//从队首出去 
	int extr() { return pop(); }//从队尾出去 
};

int main()
{
	SQ sq(24);

	int i;
	for(i=0;i<8;i++)
	    sq.in(i);
	
//	sq.ins(88,2);
	   
    sq.S::inside();
	cout << endl;	    
    sq.Q::inside();
	cout << endl;
	
	cout << sq.extf() << endl;	    
/*	
	for(i=0;i<8;i++)
	    cout << sq.extr()  << endl;
*/
	
	return 0;
}
