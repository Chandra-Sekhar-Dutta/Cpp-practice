#include<iostream>
using namespace std;
struct employee{
    string name;
    int age;
    float salary;
    char ID;
};
int main()
{
    struct employee employee1;
    struct employee employee2;
    struct employee employee3;
    struct employee employee4;
    
cout<<"Name of the employee1:";
cin>>employee1.name;
cout<<"Name of the employee2:";
cin>>employee2.name;
cout<<"Name of the employee3:";
cin>>employee3.name;
cout<<"Name of the employee4:";
cin>>employee4.name;

cout<<"\n";

cout<<"Age of employee1=";
cin>>employee1.age;
cout<<"Age of employee2=";
cin>>employee2.age;
cout<<"Age of employee3=";
cin>>employee3.age;
cout<<"Age of employee4=";
cin>>employee4.age;

cout<<"\n";

cout<<"Salary of employee1=";
cin>>employee1.salary;
cout<<"Salray of employee2=";
cin>>employee2.salary;
cout<<"Salary of employee3=";
cin>>employee3.salary;
cout<<"Salary of employee4=";
cin>>employee4.salary;

cout<<"\n";

cout<<"ID of employee1:";
cin>>employee1.ID;
cout<<"ID of employee2:";
cin>>employee2.ID;
cout<<"ID of employee3:";
cin>>employee3.ID;
cout<<"ID of employee4:";
cin>>employee4.ID;

cout<<"\n";

cout<<"Name of employee1:"<<employee1.name<<"\n";
cout<<"Age of employee1:"<<employee1.age<<"\n";
cout<<"Salary of employee1:"<<employee1.salary<<"\n";
cout<<"ID of employee1:"<<employee1.ID<<"\n";
cout<<"\n";
cout<<"Name of employee2:"<<employee2.name<<"\n";
cout<<"Age of employee2:"<<employee2.age<<"\n";
cout<<"Salary of employee2:"<<employee2.salary<<"\n";
cout<<"ID of employee2:"<<employee2.ID<<"\n";
cout<<"\n";
cout<<"Name of employee3:"<<employee3.name<<"\n";
cout<<"Age of employee3:"<<employee3.age<<"\n";
cout<<"Salary of employee3:"<<employee3.salary<<"\n";
cout<<"ID of employee3:"<<employee3.ID<<"\n";
cout<<"\n";
cout<<"Name of employee4:"<<employee4.name<<"\n";
cout<<"Age of employee4:"<<employee4.age<<"\n";
cout<<"Salary of employee4:"<<employee4.salary<<"\n";
cout<<"ID of employee4:"<<employee4.ID<<"\n";
}
