#include <iostream>
using namespace std;
int main()
{
	int i,j,N;
	cout<<"Enter a range:"<<endl;
	cin>>N;

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<'*'<<" ";
		}
	cout<<endl;
	}
}