#include<iostream>
using namespace std;
class Base1{
  public:
  void show1(){
  cout<<"Hello1";
  }
};
class Base2{
public:
  void show2(){
  cout<<"Hello2";
}
};
class Base3{
  public:
  void show3(){
  cout<<"Hello3";
  }
};
class Derived2:public Base3{
    public:
    void showd2(){
    cout<<"Hello in derived2";}
};


//The above is a single inheritance.

class Derived3:public Base3{
    public:
    void showd3(){
    cout<<"Hello from Derived3.";
        
    }
};

//The above is heirarchal inheritance.

class Derived1:public Base1,public Base2
{
    public:
    void showd(){
    cout<<"Hello in derived";}
};

//The above is a multipe inheritance.

class Derived1_Derived1:public Derived1{
    public:
    void showdd(){
   cout<<"Hello in derived of derived";}
};

//The above is a multilevel inheritance.


int main(){
    Derived1 d1;
    d1.show1();
    cout<<"\n";
    d1.show2();
    cout<<"\n";
    d1.showd();
    cout<<"\n";

    Derived1_Derived1 dd1;
    dd1.show1();
    cout<<"\n";
    dd1.show2();
    cout<<"\n";
    dd1.showd();
    cout<<"\n";
    dd1.showdd();
    cout<<"\n";
    
    
    Derived2 d23;
    d23.show3();
    cout<<"\n";
    d23.showd2();
    cout<<"\n";
    
    Derived3 d33;
    d33.show3();
    cout<<"\n";
    d33.showd3();
    cout<<"\n";
    
    
}
