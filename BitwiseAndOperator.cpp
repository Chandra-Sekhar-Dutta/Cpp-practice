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
    
    int c=a & b;
    cout<<"bitwise & operator = "<<c<<"\n";
    cout<<"Binary of "<<c<<" = "<<bitset<8>(c)<<"\n";


    return 0;
}
