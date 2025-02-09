#include<iostream>
using namespace std;
int a,b;
class Base1;
class Base2{
    public:
  void show(Base1 &obj, int a,int b);
};
class Base1{
  int x,y;
  public:
  friend void Base2::show(Base1 &obj, int a, int b);
};

  void Base2::show(Base1 &obj, int a,int b){
      cout<<"The value of 'a' and 'b' is:";
      cin>>a>>b;
      obj.x=a;
      obj.y=b;
      cout<<"The value of x="<<obj.x;
      cout<<"\nThe value of y="<<obj.y;
  }  

int main(){
    
    Base1 B1;
    Base2 B2;
    B2.show(B1,a,b);
    return 0;
}
