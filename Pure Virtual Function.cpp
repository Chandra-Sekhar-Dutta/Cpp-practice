#include<iostream>
using namespace std;
class Base{
	public:
		virtual void function1()=0;
		virtual void function2()=0;
};
class Derived:public Base{
	public:
		void function1(){
			cout<<"This is example of a virtual function.";}
		void function2(){
			cout<<"\nThis is another function.";
		}
};
int main(){
	Derived D1;
	Base *ptr;
	ptr=&D1;
	ptr->function1();
	ptr->function2();
	return 0;
}
