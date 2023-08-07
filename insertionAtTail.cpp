#include <iostream>
using namespace std;
class node{
public:
	int data;
	node *next;

	node(int d){
		data=d;
		next=NULL;
	}  
};
void InsertionAtTail(node *&tail,int d)
{
	if(tail==NULL)
	{
		tail=new node(d);
		return;
	}
	node *n=new node(d);
	n->next=tail;
	tail=n;
}
void disp(node *tail)
{
	while(tail!=NULL)
	{
		cout<<tail->data<<" <-";
		tail=tail->next;
	}
}
int main()
{
	node *tail=NULL;
	InsertionAtTail(tail,4);
	InsertionAtTail(tail,3);
	InsertionAtTail(tail,2);
	InsertionAtTail(tail,1);

	disp(tail);

	return 0;

}