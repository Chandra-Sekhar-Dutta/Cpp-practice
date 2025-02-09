#include <iostream>
using namespace std;
class Fibonacci{
public:
int a, b, c;
void generate(int);
};

void Fibonacci::generate(int n){
int a = 0;
int b = 1;
cout<<a<<"\n"<<b;
for (int i = 1; i <=n-2; i++){
int c = a + b;
cout<<"\n"<<c;
a=b;
b=c;}
}

int main()
{
int n = 9;
Fibonacci fib;
fib.generate(n);
return 0;
}

