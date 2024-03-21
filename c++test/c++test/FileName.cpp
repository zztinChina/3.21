#include<iostream>
#include<string>
using namespace std;
class building
{  
	friend class goodgay;
public:
	building();
public:
	string keting;
private:
	string woshi;
};
building::building()
{
	keting = "客厅";
	woshi = "卧室";
}
class goodgay
{
public:
	goodgay(string b);
public:
	void visit(building& a)
	{
		cout << name << "正在访问你的家";
		cout << a.woshi;
		cout << a.keting;
	}
public:
	string  name;
};
goodgay::goodgay(string b)
{
	name = b;
}
void test()
{
	building b1;
	goodgay cao("张三");
	cao.visit(b1);
}
int main()
{
	test();
	return 0;
}