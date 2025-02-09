#include <iostream>
using namespace std;
class encapsulation{
  private:
  int x,y;
  
  public:
  void set1(int a){
      x=a;
  }
  int get1(){
      return x;
  }
  void set2(int b){
      y=b;
  }
  int get2(){
      return y;
  }
  int sum(int a,int b){
      return a+b;
  }
};
int main()
{int a,b;
    encapsulation x1;
    cout<<"The value of a=";
    cin>>a;
    cout<<"The value of b=";
    cin>>b;
    x1.set1(a);
    x1.set2(b);
    cout<<"The value of x="<<x1.get1()<<"\n";
    cout<<"The value of y="<<x1.get2()<<"\n";
    cout<<"The value of sum,x+y="<<x1.sum(a,b)<<"\n\n";
    
    encapsulation x2;
    cout<<"The value of a=";
    cin>>a;
    cout<<"The value of b=";
    cin>>b;
    x1.set1(a);
    x1.set2(b);
    cout<<"The value of x="<<x1.get1()<<"\n";
    cout<<"The value of y="<<x1.get2()<<"\n";
    cout<<"The value of sum,x+y="<<x1.sum(a,b);

    return 0;
}

