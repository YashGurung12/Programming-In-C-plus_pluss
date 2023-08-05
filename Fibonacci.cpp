#include <iostream>
using namespace std;
int fibo(int i,int j,int n)
{
	cout<<i<<" "<<j<<" ";
    for( int r=j;r<n;r++)
    {
    	cout<<(r+(r-1))<<" ";
    }
cout<<endl;
 return 1;
}
int main()
{
	int N,i=0,j=1;
	cout<<"Enter a range:"<<endl;
	cin>>N;

	int series = fibo(i,j,N);
	if(series==1)
	{
		cout<<"S";
	}
	

	return 0;

}