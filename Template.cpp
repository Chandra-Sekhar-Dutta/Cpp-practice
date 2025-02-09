#include <iostream>
using namespace std;
int A,x,y;
template<typename value>
value input(value A){
    cout<<"The value is=";
    cin>>A;
    return A;
}

template<typename value>
value SUM(value x,value y){
   return x+y;
}

int main(){
    int X_int=input<int>(x);
    cout<<"The int value of x is:"<<X_int<<"\n";
     float X_float=input<float>(x);
    cout<<"The float value of x is:"<<X_float<<"\n";
    
    int Y_int=input<int>(y);
    cout<<"The int value of y is:"<<Y_int<<"\n";
     float Y_float=input<float>(y);
    cout<<"The float value of y is:"<<Y_float<<"\n";
    
    int int_sum=SUM<int>(X_int,Y_int);
    cout<<"The sum of integer numbers is="<<X_int<<"+"<<Y_int<<"="<<int_sum<<"\n";
    float float_sum=SUM<float>(X_float,Y_float);
    cout<<"The sum of float numbers is="<<X_float<<"+"<<Y_float<<"="<<float_sum;
}
