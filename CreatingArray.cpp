#include <iostream>
using namespace std;
void UserInput(int); //forward declaration
void Initialization();
int main()
{
	int N;
	cout<<"Enter a size of an array:"<<endl;
	cin>>N;

	

	UserInput(N); //call by value
	Initialization();

	return 0;
}
void UserInput(int N)
{
	int arr[N]; //user input array
	for(int i=0;i<N;i++)
	{
		cout<<"Enter the value for "<<i+1<<" element:"<<endl;
		cin>>arr[i];
	}
	for(int i=0;i<N;i++)
	{
		cout<<arr[i]<<" ";		
	}
	cout<<endl;
}
void Initialization()
{
	int arr2[5]={3,5,2};
	for(int i=0;i<5;i++)
	{
		cout<<arr2[i]<<" ";		
	}
}
