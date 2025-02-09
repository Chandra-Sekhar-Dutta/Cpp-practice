#include <iostream>
#include<map>
#include<string>
using namespace std;
 map<string,int>MAP;
int main() {
  MAP["Arwind"]=20;
  MAP["Arun"]=30;
  MAP["Tarun"]=50;

map<string,int>::iterator iter;
for(iter=MAP.begin();iter!=MAP.end();iter++){
    cout<<(*iter).first<<"\t"<<(*iter).second<<"\n";
}
    return 0;
}
