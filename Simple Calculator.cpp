#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int a,b,Sum,Diff,Mul,Div,Rem;
    cout<<"Number a=";
    cin>>a;
    cout<<"Number b=";
    cin>>b;
    Sum=a+b;
    Diff=a-b;
	Mul=a*b;
	Div=a/b;
	Rem=a%b;
    cout<<"Sum ="<<Sum;cout<<"\n";
	cout<<"Differnce ="<<Diff;cout<<"\n";
    cout<<"Product ="<<Mul;cout<<"\n";
    cout<<"Division ="<<Div;cout<<"\n";
    cout<<"Remainder ="<<Rem;;cout<<"\n";
    cout<<"Power, a^b="<<pow(a,b)<<"\n";
    cout<<"Square root of a="<<sqrt(a)<<"\n";
    cout<<"Square root of b="<<sqrt(b)<<"\n";


    return 0;
}
