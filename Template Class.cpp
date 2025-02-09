#include <iostream>

using namespace std;

template <class t>
class Calculator{
  private:
  t num1, num2;
  
  public:
  
  Calculator(t n1, t n2){
      num1=n1;
      num2=n2;
  }
  
  void calculation(){
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<"\n";
    cout<<num1<<"-"<<num2<<"="<<num1-num2<<"\n";
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<"\n";
    cout<<num1<<"/"<<num2<<"="<<num1/num2<<"\n";
  }
  
};
int int_n1,int_n2;
float float_n1,float_n2;
int main()
{
    cout<<"The value of num1=";
    cin>>int_n1;
    cout<<"The value of num2=";
    cin>>int_n2;
    Calculator <int> int_C(int_n1,int_n2);
    int_C.calculation();
    cout<<"\n";
    
    cout<<"The value of num1=";
    cin>>float_n1;
    cout<<"The value of num2=";
    cin>>float_n2;
    Calculator <float> float_C(float_n1,float_n2);
    float_C.calculation();
    cout<<"\n";
    return 0;
}

