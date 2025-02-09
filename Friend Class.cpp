#include<iostream>
using namespace std;
int a,b,c;
class Base1{
  private:
  int x;
  protected:
  int y;
  public:
  int z;

  void get(){
      cout<<"Enter the value of a=";
      cin>>a;
      cout<<"Enter the value of b=";
      cin>>b;
      cout<<"Enter the value of c=";
      cin>>c;
      
  }
  friend class Access;
  
};
class Access{
  public:
  void show(Base1 &Object,int a,int b,int c){
      Object.x=a;
      Object.y=b;
      Object.z=c;
      cout<<"The value of x(private) is:"<<Object.x<<"\n"<<"The value of y(protected) is:"<<Object.y<<"\n"<<"The value of z(public) is:"<<Object.z;
  }
};
int main(){
    Base1 Object1;
    Object1.get();

    Access object2;
    object2.show(Object1,a,b,c);
return 0;
}
