#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    // [external parameter](parameter){defination of the function};

    vector<int>V{2,4,45,53,121};

    for_each(V.begin(),V.end(),[](int x){cout<<x<<"\t";});
    cout<<"\n";
    for_each(V.begin(),V.end(),[](int x){
        if(x%2==0){
            cout<<"Even\n";
        }
        else{
            cout<<"Odd\n";
        }
    });

    int a=5;

    for_each(V.begin(),V.end(),[&a](int x)
    // [=] means the user cannot change the value in the lamda function 
    // [&] means the user can change the value in the lamda function as the value is passed as reference
    {

        if(x%5==0){
            cout<<x<<" is multiple of "<<a<<"\n";
        }

        else{
            cout<<x<<" is not multiple of "<<a<<"\n";
        }

    });

    return 0;
}