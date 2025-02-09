#include <iostream>

using namespace std;
//By default in c++,class is private-which cannot be accessed.
int a=2; int b=3;
class employee{
   string name;
   int age;
   int salary;
   
   
};
class Employee{
    protected://protected means user cannot access the data from the class.
   string name;
   int age;
   int salary;
};
class Employeee{
    public://public means that the data can be accessed in the main function from the class.
   string name;
   int age;
   int salary=8000;
  
   
   
};
int main()
{   //int sal;
Employeee employee1;
employee1.name="Suresh";
cout<<employee1.name<<"\n";
cout<<"The salary=";
cout<<employee1.salary;
return 0;
}

