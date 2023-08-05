#include <iostream>
using namespace std;
int c=99;
int main()
{
	int c=43;
cout<<c<<endl;
cout<<(::c); //scope resolution operator
return 0;
}