#include <iostream>
#include<bitset>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Binary of "<<a<<" = "<<bitset<8>(a)<<"\n";

    int b;
    cout<<"Enter the value of b = ";
    cin>>b;
    cout<<"Binary of "<<b<<" = "<<bitset<8>(b)<<"\n";
    
    int d=a|b;
    cout<<"bitwise | operator = "<<d<<"\n";
    cout<<"Binary of "<<d<<" = "<<bitset<8>(d)<<"\n";


    return 0;
}
