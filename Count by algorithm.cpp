#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main(){
   int a,c;
   cout<<"Enter the value of a=";
   cin>>a;
    vector<int>V1{4,8,6,1,2};
    
    vector<int>::iterator i;
    c=count(V1.begin(),V1.end(),a);
    
    cout<<c;
}
