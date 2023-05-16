 #include<iostream>
 using namespace std;
 class B //destination class
 {
 	int x, y;
 	public:
 	B(int x,int y)
 	{
 		cout<<"B"<<endl;
	 }
 };
 class A //Source class
 {
 	int a,b;
 	public:
 	A(int x, int y)
 	{
 		a=x;
 		b=y;
 		cout<<"A"<<endl;
	 }
	 operator B()//using Casting operator 
	 {
	 	B temp(a,b);
	 	return temp;
	 }
	
 };
 int main()
 {
 	A obj(1,2);
 	B obj2=obj;//class to class being called
 	return 0;
 }
