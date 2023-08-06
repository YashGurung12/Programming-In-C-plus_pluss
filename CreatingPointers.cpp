#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number:"<<endl;
	cin>>num;

	int *ptr=&num;
	cout<<"Value is:"<<num<<endl;
	cout<<"It's Address is:"<<ptr;//dont need to mention * everytime 

	return 0;

}