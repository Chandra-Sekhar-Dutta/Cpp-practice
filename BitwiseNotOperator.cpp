#include <iostream>
#include<bitset>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Binary of "<<a<<" = "<<bitset<8>(a)<<"\n";
    
    int b=~a;
    cout<<"not operator on a = "<<bitset<8>(b)<<"\n";
    cout<<"The value after using not operator = "<<b<<"\n";


    return 0;
}
