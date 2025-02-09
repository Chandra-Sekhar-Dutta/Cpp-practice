#include <iostream>

using namespace std;
class Employee{
public:
    string Name;
    int Age;
    float Salary;

    Employee(string name,int age, float salary)
    {
      Name=name;
      Age=age;
      Salary=salary;
    }
    void intro()
{
    cout<<"Name="<<Name<<"\n";
    cout<<"Age="<<Age<<"\n";
    cout<<"Salary="<<Salary;
}
};
int main()
{
    string name;int age;float salary;
    cout<<"Name=";
    cin>>name;
    cout<<"Age=";
    cin>>age;
    cout<<"Salary=";
    cin>>salary;
    cout<<"\n";
    Employee employee1(name,age,salary);
    employee1.intro();
    
    cout<<"\n";
    
    cout<<"\nName=";
    cin>>name;
    cout<<"Age=";
    cin>>age;
    cout<<"Salary=";
    cin>>salary;
    Employee employee2(name,age,salary);
    employee2.intro();
    
    cout<<"\n";
    
    cout<<"\nName=";
    cin>>name;
    cout<<"Age=";
    cin>>age;
    cout<<"Salary=";
    cin>>salary;
    Employee employee3(name,age,salary);
    employee3.intro();
    
    cout<<"\n";
    
    cout<<"\nName=";
    cin>>name;
    cout<<"Age=";
    cin>>age;
    cout<<"Salary=";
    cin>>salary;
    Employee employee4(name,age,salary);
    employee4.intro();

    return 0;
}

