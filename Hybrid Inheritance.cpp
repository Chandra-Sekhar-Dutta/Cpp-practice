#include<iostream>
using namespace std;
class Base1{
    public:
    void printbase1(){
        cout<<"Base class 1";
    }
};

class Base2{
  public:
  void printbase2(){
      cout<<"Base class 2";
  }
};

class Derived1:public Base1{
    public:
    void printDerived1(){
        cout<<"Derived class 1";
    }
};
class Derived_hybrid:public Derived1, public Base2{
  void printDerived_hybrid(){
      cout<<"Hybrid derived class 1";
  }
};

int main(){
    Derived_hybrid D_H;
    D_H.printbase1();cout<<"\n";
    D_H.printDerived1();cout<<"\n";
    D_H.printbase2();cout<<"\n";
    return 0;
    
}
