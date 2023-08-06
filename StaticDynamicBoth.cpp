#include <iostream>
using namespace std;
int main()
{
	int a[]={10,12,32}; //static

	cout<<"Static:"<<sizeof(a)/sizeof(int)<<endl;

	int *ptr=new int[2]; //dynamic

	for(int i=0;i<20;i++)
	{
	cin>>ptr[i];	
	}

	cout<<"dynamic:";
	cout<<sizeof(ptr);

	delete [] ptr;


return 0;
}