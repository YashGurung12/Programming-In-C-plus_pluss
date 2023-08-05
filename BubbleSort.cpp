#include <iostream>
using namespace std;
int main()
{
	int arr[5]={5,65,4,23,12};
	int i,j;
	cout<<"Before Sort:"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	cout<<"After Bubble Sort:"<<endl;
	for(i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}			
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}