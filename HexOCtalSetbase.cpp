#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int number=98;
	cout<<hex<<number<<endl;
	cout<<oct<<number<<endl;
	cout<<setbase(8)<<number<<endl;
	return 0;
}
