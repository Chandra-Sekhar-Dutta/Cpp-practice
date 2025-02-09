#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
int sum(int a, int b, int c)
{
    return a+b+c;
}
int main(){
    int a,b,c;
    cout<<"The value of a=";
    cin>>a;
    cout<<"The value of b=";
    cin>>b;
    cout<<"The sum is of "<<a<<"+"<<b<<"="<<sum(a,b)<<"\n";
    cout<<"The value of a=";
    cin>>a;
    cout<<"The value of b=";
    cin>>b;
    cout<<"The value of c=";
    cin>>c;
    cout<<"The sum is of "<<a<<"+"<<b<<"+"<<c<<"="<<sum(a,b,c);
}

