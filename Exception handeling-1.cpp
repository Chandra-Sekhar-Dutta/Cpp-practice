#include <iostream>

using namespace std;
    float a,b,c;

int main()
{
    
    cout<<"Enter a=";
    cin>>a;
    cout<<"Enter b=";
    cin>>b;
    try{
        if(b!=0){
            c=a/b;
        }
        else{
            throw(b);
        }
    }
    catch(float b){
        cout<<"Not divisible by "<<b;
    }

    return 0;
}

