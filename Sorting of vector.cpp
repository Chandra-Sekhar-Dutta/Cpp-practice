#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main(){
   
    
    vector<int>V1{4,8,6,1,2};
    
    vector<int>::iterator i;
    sort(V1.begin(),V1.end());
    
    for(auto i:V1){
        cout<<i<<"\t";
    }
}
