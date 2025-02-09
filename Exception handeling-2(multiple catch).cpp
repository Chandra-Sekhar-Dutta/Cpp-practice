
#include <iostream>

using namespace std;

int main()
{ int a;
cin>>a;
   try{
       if(a==0)
       {throw(a);}
       if(a==10)
       {throw('a');}
       if(a=100)
       {throw(2.2F);}//'F' is written as the the value in the throw is treated as double by default.
   }
//catch(int a){
//    cout<<"the value of a is "<<a;
//}
//catch(char a){
//    cout<<"The value of a is "<<a;
//}
//catch(float a){
//    cout<<"The value of a is "<<a;
//}

//the below line is used to catch all the errors at once.

 catch(...){
     cout<<"Error";
 }
    return 0;
}

