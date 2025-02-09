#include<iostream>
using namespace std;
class class1{
    public:
    virtual void function(){
        cout<<"this is function from base class";
    }
};
    class class2:public class1{
      void function(){
          cout<<"this is function from derived class";
      }  
    };
int main(){
//    class1* P1= new class2();
//    P1->function();
    //or we can make an object of the any class and make a pointer of the base class which will store the object of the derived class 
	//and hence call the function of the derived class.
	
	class2 C1;//:-if the object of Base class, function of the base class will be called and if the object is of the dereived class,
				//function of the derived class will be called.
    class1*ptr;
    ptr=&C1;
    ptr->function();
    return 0;
}
