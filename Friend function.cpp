#include<iostream>
using namespace std;
int x,y;
class Base1{
    private:
    int a,b;
    protected:
    int c,d;
    public:
    friend void sum_diff(Base1 &Obj,int x,int y);
};
void sum_diff(Base1&Obj,int x, int y){
    cout<<"The value of x =";
    cin>>x;
    cout<<"The value of y =";
    cin>>y;
     Obj.a=x;
     Obj.b=y;
     Obj.c=Obj.a+Obj.b;
    Obj.d=Obj.a-Obj.b;
    cout<<"The value of c(protected)=a(private)+b(private):"<<Obj.c<<"\n";
    cout<<"The value of d(protected)=a(private)-b(private):"<<Obj.d<<"\n";
}

int main(){
    Base1 Obj1,Obj2;
    sum_diff(Obj1,x,y);
    sum_diff(Obj2,x,y);

    return 0;
}
