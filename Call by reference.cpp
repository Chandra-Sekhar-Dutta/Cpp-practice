// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int  Function(int *A, int *B){
    *A=10;
    *B=33;
    return (*A+*B);
}

int main() {
    
int X=5;
int Y=2;

cout<<Function(&X,&Y);
// here the address of X and Y is being passed and in the defination part,
// *A and *B is setting the values 10 and 30 resp.
// since address of X and Y is stores in the pointer A and B, any change in the value of the pointer will be reflected where the function is called.
// this is called call by reference function call.

    return 0;
}
