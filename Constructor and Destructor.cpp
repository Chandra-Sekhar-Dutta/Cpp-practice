#include<iostream>
using namespace std;
string x;
class product{
  private:
  string Product;
  
  public:
  product(string x){
      Product=x;
  }
  void get(){
      cout<<"The product you ordered is:"<<Product;
  }
  ~product(){
      cout<<"\nAfter buying the product, the information will be deleted.";
  }
};

int main(){
    cout<<"Your product is:";
    cin>>x;
    product Product1(x);
    Product1.get();
    
    
}
