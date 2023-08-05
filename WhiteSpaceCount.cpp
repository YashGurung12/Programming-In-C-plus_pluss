#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter a Character:"<<endl;
	char ch=cin.get();
	int count=0;
	while(ch!='$')
	{
		count++;
		ch=cin.get();
	}
cout<<count;
return 0;
}