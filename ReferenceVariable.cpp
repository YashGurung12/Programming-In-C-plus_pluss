#include <iostream>
using namespace std;
int main()
{
	int a=10;
	int &b=a;
	int &c=b;
	b++;
	c++;
	cout<<a<<" ";
	cout<<b<<" ";
	c--;
	cout<<b<<" ";
	cout<<c;
return 0;
}