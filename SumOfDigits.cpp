#include<iostream>
using namespace std;
int main()
{
	int N,dig,sum=0;
	cout<<"Enter a number:"<<endl;
	cin>>N;

	while(N>0)
	{
		dig=N%10;
		sum=sum+dig;
		N=N/10;
	}
	cout<<sum;
}