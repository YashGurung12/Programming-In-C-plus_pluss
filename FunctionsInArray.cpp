#include <iostream>
using namespace std;
int main()
{
	int arr[]={5,65,4,23,12};
	cout<<"Size of an array:"<<endl;

	int size=sizeof(arr)/sizeof(int);

	cout<<size;

	void disp(arr,size);

	return 0;
}
void disp(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}

}