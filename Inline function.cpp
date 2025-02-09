#include<iostream>
using namespace std;
//Inline function is a function that request(not commands) the compiler to do a job. Due to this the time of the execution is reduced.
//In Inline function only one statement is written because only only one line is read by the compiler.
inline int greatest(int a,int b){
    return (a>b)?a:b;
}
inline int lowest(int a,int b){
    return (a<b)?a:b;
}
int main(){
    int a,b;
    cout<<"The value of a:";
    cin>>a;
    cout<<"The value of b:";
    cin>>b;
    cout<<"The greatest of a and b is="<<greatest(a,b)<<"\n";
    cout<<"The samllest of a and b is="<<lowest(a,b);
    
    return 5;
}
