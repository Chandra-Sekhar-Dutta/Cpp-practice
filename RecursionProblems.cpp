#include <iostream>
using namespace std;

int sum(int arr[],int size){
    if(size==0){
        return 0;
    }
    
    else{
        return arr[size-1]+sum(arr,size-1);
    }
}
int factorial(int num){
    if(num==0){
        return 1;
    }
    
    else{
        return num*factorial(num-1);
    }
}

int sumofDigits(int num) {
    if (num >= 0 && num <= 9) {
        return num;
    } 
   
    return (num % 10) + sumofDigits(num / 10);
}

void reverseString(string &S, int start, int end){
    if(start==end){
        return;
    }
    else{
        swap(S[start],S[end]);
        
        reverseString(S,start+1,end-1);
    }
}
bool Palinderome(string &S,int start,int end){
    if(start==end){
        return true;
    }
    else if(start!=end){
        return false;
    }
    
    return Palinderome(S,start+1,end-1);
}

int GreatestDivisorOfTwoNumbers(int a, int b){
    // by Euclid's process-
    
    // GreatestDivisorOfTwoNumbers(a,0)=a
    // GreatestDivisorOfTwoNumbers(a,b)=(b,a%b)
    // if a>b, GreatestDivisorOfTwoNumbers(a,b)=GreatestDivisorOfTwoNumbers(b,a)
    
    if(b==0){
        return a;
    }
    else{
        return GreatestDivisorOfTwoNumbers(b,a%b);
    }
}


int product(int a,int b){
    
    if (b == 0){
        return 0; // Base case: product of any number and 0 is 0
    } 
    else if (b == 1){
        return a; // Base case: product of any number and 1 is the number itself
    } 
    else if (b < 0){
        return -product(a, -b); // Handle negative b
    } 
    else{
        return a + product(a, b - 1); // Recursively add 'a' b times
    }

}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int size=(sizeof(arr)/sizeof(arr[0]));
    
    cout<<sum(arr,size);
    
    cout<<"\nfactorial of 10="<<factorial(10);
    
    cout<<"\nSum of the digits of 818="<<sumofDigits(818);
    
    string S="i am a good guy";
    reverseString(S,0,S.length()-1);
    cout<<"\nafter reversing the string-"<<S<<"\n";
    
    cout<<"Is Palinderome?= "<<Palinderome(S,0,S. length()-1)<<"\n";
    
    cout<<"Greatest Divisor Of Two Numbers(4,5)="<<GreatestDivisorOfTwoNumbers(4,5);
    
    cout<<"\nproduct of 8 and -6= "<<product(8,-6)<<"\n";

    return 0;
}
