#include <iostream>
using namespace std;
class rectangle{
public:
 int length;
 int breadth;
 int area(int length,int breadth);
 int perimeter(int length,int breadth);
};

int rectangle::area(int length,int breadth){
    int a=length*breadth;
    return a;
}
int rectangle::perimeter(int length,int breadth){
    int p=2*(length+breadth);
    return p;
}

int main()
{
rectangle r;

cout<<"Perimeter: "<<r.perimeter(5,8)<<endl;
cout<<"Area: "<<r.area(5,8)<<endl;
return 0;
}

