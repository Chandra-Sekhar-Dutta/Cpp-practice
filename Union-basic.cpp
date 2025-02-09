#include <iostream>
using namespace std;

union Value
{
    float money;
    char stock_company;
    int loan;
};

int main()
{
union Value transaction;
    transaction.money=5000;
    transaction.stock_company='A';
    
    cout<<transaction.money<<"\n";
    cout<<transaction.stock_company<<"\n";
    cout<<transaction.money;
    return 0;
}

