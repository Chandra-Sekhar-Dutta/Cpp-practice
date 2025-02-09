#include <iostream>

using namespace std;
class Employee{
public:
    string Name;
    int Age;
    float Salary;
void intro()
{
    cout<<"Name="<<Name<<"\n";
    cout<<"Age="<<Age<<"\n";
    cout<<"Salary="<<Salary;
}
    Employee(string name,int age, float salary)
    {
      Name=name;
      Age=age;
      Salary=salary;
    }
};
int main()
{
    Employee employee1=Employee("Haris",34,45000.50);
    employee1.intro();
    return 0;
}

