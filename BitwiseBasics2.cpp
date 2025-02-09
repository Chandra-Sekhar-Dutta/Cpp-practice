#include <iostream>
#include<bitset>

using namespace std;

int main()
{
    int a,b;
    
    cout<<"Enter a=";
    cin>>a;
    cout<<"Binary number of a="<<bitset<8>(a)<<"\n";
    
    cout<<"Enter b=";
    cin>>b;
    
    int c=a;
    c<<=b;
    cout<<"After left shift the binary number of a is="<<bitset<8>(c)<<"\n";
    cout<<"Left shift on a by b="<<c<<"\n";
    
    int d=a;
    d>>=b;
    cout<<"After right shift the binary number of a is="<<bitset<8>(d)<<"\n";
    cout<<"Right shift on a by b="<<d<<"\n";

    return 0;
}
