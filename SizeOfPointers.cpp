#include <iostream>
using namespace std;
int main()
{
	int i=10;
	float f=23.61;
	char ch='Y';

	int *iptr=&i;
	float *fptr=&f;
	char *cptr=&ch;

	cout<<"Size of pointer of int:"<<sizeof(iptr)<<endl;
	cout<<"Size of pointer of float:"<<sizeof(fptr)<<endl;
	cout<<"Size of pointer of character:"<<sizeof(cptr);

	return 0;
}