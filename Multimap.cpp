#include<iostream>
#include<map>
using namespace std;
int main(){
multimap<char,int>M1={
    {'a',1},
    {'a',2},
    {'b',1},
    {'b',3},
    {'c',5},
    {'d',4}
};
multimap<char,int>::iterator iter;
for(iter=M1.begin();iter!=M1.end();iter++){
    cout<<(*iter).first<<"->"<<(*iter).second<<"\n";
}
return 0;
}

