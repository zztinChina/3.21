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
	keting = "����";
	woshi = "����";
}
class goodgay
{
public:
	goodgay(string b);
public:
	void visit(building& a)
	{
		cout << name << "���ڷ�����ļ�";
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
	goodgay cao("����");
	cao.visit(b1);
}
int main()
{
	test();
	return 0;
}