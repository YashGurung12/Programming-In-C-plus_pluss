#include <iostream>
using namespace std;
int main()
{
	int i,j,N,r;
	cout<<"Enter a range:"<<endl;
	cin>>N;

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=(N-i);j++) //only for spaces
		{
			cout<<" ";
		}
		for(r=1;r<=((i*2)-1);r++) //only for the pyramid numbers
	    {
		cout<<r;
	    }
	cout<<endl;
}
}