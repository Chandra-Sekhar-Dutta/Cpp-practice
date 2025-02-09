#include<iostream>
using namespace std;
class Array{
    private:
    int size; int *array;
    
    public:
    Array(int s){
        size=s;
        array=new int[size];
    }
    
    void set_data(){
        
        for(int i=0;i<size;i++){
            cout<<"Enter the number:";
            cin>>array[i];
        }
    }
    
    void get_data(){
        for(int i=0;i<size;i++){
            cout<<"The number is:"<<array[i]+5<<"\n";
        }
    }    
};

int main(){
    int s;
    cout<<" The Size is=";
    cin>>s;
    Array a1(s);
    a1.set_data();
    a1.get_data();
    return 0;
}
