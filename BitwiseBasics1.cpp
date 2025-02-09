#include <iostream>

using namespace std;

int main()
{
    int a=5;
    cout<<"Number before bit shifting="<<a<<"\n";
    a<<=1;//bit sfift left by 1
    
    // binary of 5 is 0101. When each bit is shifted by one n the left direction it becomes- 1010 whhich is 10 in decimal.
    cout<<"numeber Bit shifted left by 1="<<a<<"\n";
    
    a>>=1;//bit sfift left by 1
    // binary of 10 is 1010. When each bit is shifted by one n the left direction it becomes- 0101 whhich is 10 in decimal.
    cout<<"numeber Bit shifted right by 1="<<a<<"\n";

    return 0;
}

// note-
// bit shift left is multiplying with 2 to the power n (a<<=n)
// bit shift right is dividing by 2 to the power n (a>>=n)
