#include<iostream>
using namespace std;
char x;
class Family{
  private:
  char blood_group;
  public:
  Family(char x){
      blood_group=x;
  }
  Family(Family&Father){
      blood_group=Father.blood_group;
  }
  char getblood_report(){
      return blood_group;
  }
  
};
int main(){
cout<<"Enter the type of blood:"; 
cin>>x;

Family Father(x);
Family Son=Father;
Family Daughter=Father;

cout<<"\nBlood group of the father is-"<<Father.getblood_report();
cout<<"\nBlood group of the son is-"<<Son.getblood_report();
cout<<"\nBlood group of the daughter is-"<<Daughter.getblood_report();

}

