#include<iostream>
using namespace std;
int fuel_amount,Price,Capacity;
class Vehicle{
    private:
    int fuel_amount,Price,Capacity; string name;

  public:
  void set(string n,int f_a, int P, int C){
      name=n;
      fuel_amount=f_a;
      Price=P;
      Capacity=C;
  }
  void get(){
      cout<<"The name of the vehicle is:"<<name<<"\n";
      cout<<"The Fuel is:"<<fuel_amount<<" litres \n";
      cout<<"The Price is:"<<Price<<"\n";
      cout<<"The Capacity is:"<<Capacity;
  }
};

class Bus:public Vehicle{
    public:
    void show_bus(){
    cout<<"For Bus-";}
};
class Car:public Vehicle{
    public:
    void show_car(){
    cout<<"For Car-";}
};
class Truck:public Vehicle{
    public:
    void show_truck(){
    cout<<"For Truck-";}
};

int main(){
    int f_a,P,C; string n;
    Car C1;
    C1.show_car();
    cout<<"\n";
    cout<<"The name of the car is:";
    cin>>n;
    cout<<"Fuel amount is=";
    cin>>f_a;
    cout<<"Price amount is=";
    cin>>P;
    cout<<"Capacity amount is=";
    cin>>C;
    C1.set( n,f_a,  P,  C);
    cout<<"\n";
    
    Bus B1;
    cout<<"\n\n";
    B1.show_bus();
    cout<<"\n";
    cout<<"The name of the bus is:";
    cin>>n;
    cout<<"Fuel amount is=";
    cin>>f_a;
    cout<<"Price amount is=";
    cin>>P;
    cout<<"Capacity amount is=";
    cin>>C;
    B1.set( n,f_a,  P,  C);
    cout<<"\n";

    Truck T1;
    cout<<"\n";
    T1.show_truck();
    cout<<"\n";
    cout<<"The name of the truck is:";
    cin>>n;
    cout<<"Fuel amount is=";
    cin>>f_a;
    cout<<"Price amount is=";
    cin>>P;
    cout<<"Capacity amount is=";
    cin>>C;
    T1.set(n, f_a,  P,  C);
    cout<<"\n";
    
    
    C1.show_car();cout<<"\n";
    C1.get();    
    cout<<"\n\n";
    B1.show_bus();cout<<"\n";
    B1.get();
    cout<<"\n\n";
    T1.show_truck();cout<<"\n";
    T1.get();
}
