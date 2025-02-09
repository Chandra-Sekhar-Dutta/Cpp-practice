#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main(){
    int a;
    cout<<"Enter the number=";
    cin>>a;
    
    vector<int>V1{1,2,3,4,5};
    
    vector<int>::iterator i;
    auto result=find(V1.begin(),V1.end(),a);
    if(result==end(V1)){
        cout<<"Not there";
    }
    else{
        cout<<"Found";
    }
}
