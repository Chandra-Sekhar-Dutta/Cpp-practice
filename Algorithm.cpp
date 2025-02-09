
#include <iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{int value;
cout<<"Enter the value:";
cin>>value;
    vector<int>v{1,2,3,4,5,6};
    vector<int>::iterator iter=find(v.begin(),v.end(),value);
    if(iter==end(v)){
        cout<<"Not found";
    }
else{
    cout<<"Found";
}
    return 0;
}

