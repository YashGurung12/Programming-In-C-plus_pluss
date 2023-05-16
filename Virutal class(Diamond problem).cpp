#include<iostream>
using namespace std;
class A
{
public:
int a=10;	
};
class B: public virtual A
{
	
};
class C: public virtual A
{
	
};
class D: public B,C
{
	public:
	void disp()
	{
	cout<<a;
}
};
int main()
{
	D obj;
	obj.disp();
	return 0;
}
