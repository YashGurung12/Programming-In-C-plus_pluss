#include <iostream>
#include <vector>
using namespace std;
int main()
{
	//ways of initialisation
	vector<int>a;
	vector<int>b(5,0);
	vector<int>c(b.begin(),b.end());
	vector<int>d{1,2,3,4,5,6};

	//tofind the size of a vector
	int len=b.size();

	//ways of iteration
	for(int i=0;i<len;i++)
	{
		cout<<b[i]<<",";
	}
	cout<<endl;

	for(auto it=b.begin();it!=b.end();it++)
	{
		cout<< *it <<"->";
	}
	cout<<endl;

	for(auto x:d){
		cout<<x<<" ";
	}
	cout<<endl;

	return 0;

}