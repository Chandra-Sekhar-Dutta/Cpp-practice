#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>Vect_int;
    int a;
    for(int i=0;i<=4;i++){
        cout<<"Enter the elements:";
        cin>>a;
        Vect_int.push_back(a);
    }
    Vect_int.pop_back();
    for(int i=0;i<Vect_int.size();i++){
        cout<<Vect_int[i]<<"\t";
        
    }

    return 0;
}

