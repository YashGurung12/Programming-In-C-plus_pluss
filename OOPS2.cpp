#include <iostream>
using namespace std;
class YG{
public:
	//static
	int age[20];
	string name[20];
	//dynamic
	int *aptr=new int[20];
	string *sptr=new string[20];

	void set_name(int i)
	{
		int a;
			cout<<"Enter the name:"<<endl;
			getline(cin,name[i]);
			cout<<"Enter the age:"<<endl;
			cin>>age[i];

			cout<<name[i];
			cout<<age[i]<<endl;
	}
	~YG()
	{
		//auto static
		cout<<"Destroys";
		//manual dynamic
		delete [] aptr;
		delete [] sptr;
	}
};
int main()
{
	YG obj;
	for(int i=0;i<20;i++)
	{
	obj.set_name(i);//setter
    }
 return 0;
}