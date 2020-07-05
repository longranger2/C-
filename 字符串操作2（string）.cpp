#include<iostream>
#include <cstdlib>
#include <strstream>
#include<string> 
using namespace std;
bool isNumber(string str);
string getStr(string cmd, string str[]);
int getLoc(string cmd, string str[]);
void print(string cmd, string str[]);
void trans(string cmd, string str[]);

bool isNumber(string str)
{
	string num="1234567890";
	if(str.find_first_not_of(num)==string::npos)
		return true;
	else 
		return false;
}
/*
string getStr(string cmd, string str[])
{
    string result = "";
    if(cmd.compare("copy")==0){
        int n;
        int x;
        int l;
        string s1;
        cin>>s1;
        if(isNumber(s1))
        n=atoi(s1.c_str());
        else n=getLoc(s1, str);
        string s2;
        cin>>s2;
        if(isNumber(s2)) x=atoi(s2.c_str());
        else x=getLoc(s2, str);
        string s3;
        cin>>s3;
        if(isNumber(s3)) l=atoi(s3.c_str());
        else l=getLoc(s3, str);
        result = str[n].substr(x, l);//substr��������ʽΪs.substr(pos, n)����Ҫ������������һ���ǿ�ʼλ�ã��ڶ����ǻ�ȡ�Ӵ��ĳ��ȡ�
    }
    if(cmd.compare("add")==0){
        string s1;
        string s2;
        string com = "1234567890";
        cin>>s1;
        if(s1.compare("copy") == 0 || s1.compare("add") == 0) s1 = getStr(s1, str);
        cin>>s2;
        if(s2.compare("copy") == 0 || s2.compare("add") == 0) s2 = getStr(s2, str);
        if(isNumber(s1) && isNumber(s2))
        {
            int a = atoi(s1.c_str());
            int b = atoi(s2.c_str());
            char aa[100];
            //10��ʮ���Ƶ���˼ 
            //openjudge���棬����ʹ��itoa��sprintf
//          itoa(a+b, aa, 10);
//          sprintf(aa, "%d", a+b);
            strstream ss;//strstream����intתstring; 
            int sum = a+b;
            ss<<sum;
            ss>>result;
        }
        else 
            result = s1+s2;
    }
    return result;
}
*/
string getStr(string cmd, string str[])
{
	string result="";
	if(cmd=="copy")
	{
		int n,x,l;
		string s1,s2,s3;
		cin>>s1;
		if(isNumber(s1))
			n=atoi(s1.c_str());//atoi�����ǽ��ַ���ָ��ת��Ϊ���֣�����Ϊ�ַ���ָ�룩����c_str()�ǽ��ַ���ָ��ת������ ��
		else
			n=getLoc(s1,str);
		cin>>s2;
		if(isNumber(s2))
			x=atoi(s2.c_str());//atoi�����ǽ��ַ���ָ��ת��Ϊ���֣�����Ϊ�ַ���ָ�룩����c_str()�ǽ��ַ���ָ��ת������ ��
		else
			x=getLoc(s2,str);
		cin>>s3;
		if(isNumber(s3))
			l=atoi(s3.c_str());//atoi�����ǽ��ַ���ָ��ת��Ϊ���֣�����Ϊ�ַ���ָ�룩����c_str()�ǽ��ַ���ָ��ת������ ��
		else
			l=getLoc(s3,str);
		result = str[n].substr(x, l);//substr��������ʽΪs.substr(pos, n)����Ҫ������������һ���ǿ�ʼλ�ã��ڶ����ǻ�ȡ�Ӵ��ĳ��ȡ�
			 
	}
	if(cmd=="add")
	{
		string s1,s2,com="1234567890";
		cin>>s1;
		if(s1=="copy"||s1=="add")	s1=getStr(s1,str);
		cin>>s2;
		if(s2=="copy"||s2=="add")	s2=getStr(s2,str);
		if(isNumber(s1)&&isNumber(s2))
		{
			int a=atoi(s1.c_str());
			int b=atoi(s2.c_str());
			strstream ss;
			int sum=a+b;
			ss<<sum;
			ss>>result;
		}
		else
			result=s1+s2;
	}
	return result;
}
int getLoc(string cmd, string str[])
{
	string s;
	int loc=0,n;
	string s1,s2;
	cin>>s1;
	if(s1=="copy"||s1=="add")	s=getStr(s1,str);
	else s=s1;
	cin>>s2;
	if(isNumber(s2))	n=atoi(s2.c_str());
	else	n=getLoc(s2,str);
	if(cmd=="find")
	{
		loc=str[n].find(s);
		loc=(loc==string::npos?str[n].length():loc);//c/c++ strlen(str)��str.length()��str.size()���������ַ�������,����str.length()��str.size()��������string�����ĳ�Ա����,strlen(str)���������ַ�����ĳ��ȣ��������char*��
	}
	if(cmd.compare("rfind")==0){
        loc = str[n].rfind(s); 
        loc = (loc==string::npos ? str[n].length() : loc);
    }
	return loc;
}

void print(string cmd, string str[])
{
	string s;
	int n;
	cin>>s;
	if(isNumber(s))	n=atoi(s.c_str());
	else n=getLoc(s,str);
	cout<<str[n]<<endl;
}
void trans(string cmd, string str[])
{
	
	if(cmd=="insert")
	{
		string s1,s2,s3,s;
		int n,x;
		cin>>s1;
		if(s1=="copy"||s1=="add")	s=getStr(s1,str);
		else s=s1;
		cin>>s2;
		/*if(s2=="find"||s2=="rfind")	n=getLoc(s2,str);
		else n=atoi(s2.c_str());
		cin>>s3;
		if(s3=="find"||s3=="rfind")	n=getLoc(s3,str);
		else n=atoi(s3.c_str());
		*/
		if(isNumber(s2))
			n=atoi(s2.c_str());
		else
			n=getLoc(s2,str);
		cin>>s3;
		if(isNumber(s3))
			x=atoi(s3.c_str());
		else
			x=getLoc(s3,str);
		str[n].insert(x,s);
	}
	if(cmd=="reset")
	{
		string s1,s2,s;
		int n;
		cin>>s1;
		if(s1=="copy"||s1=="add")	
			s=getStr(s1,str);
		else 
			s=s1;
		cin>>s2;
		if(isNumber(s2))
			n=atoi(s2.c_str());
		else
			n=getLoc(s2,str);
		str[n]=s;
	}
	
}
int main()
{
	int n;
	cin>>n;
	string str[n+1];
	str[0]="";
	for(int i=1;i<=n;i++)
	{
		cin>>str[i];
	}
	string cmd;
	//cmd.compare("over")!=0
	while(cin>>cmd&&cmd.compare("over")!=0)
	{
		if(cmd=="copy"||cmd=="add")	getStr(cmd,str);
		if(cmd=="find"||cmd=="rfind") getLoc(cmd,str);
		if(cmd=="insert"||cmd=="reset")	trans(cmd,str);
		if(cmd=="print") print(cmd,str);
		if(cmd=="printall")
			for(int i=1;i<=n;i++)
				cout<<str[i]<<endl;
	}
	return 0;
} 
