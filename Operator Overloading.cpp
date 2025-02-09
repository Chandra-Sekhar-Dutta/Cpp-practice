#include<iostream>
using namespace std;

class Complex {
private:
	int real, imag;
public:
	Complex(int r=0, int i=0)
	{real = r; imag = i;}
	
	// This is automatically called when '+' is used with
	// between two Complex objects
	Complex operator + (Complex obj) {
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	
	Complex operator - (Complex obj) {
		Complex res;
		res.real = real - obj.real;
		res.imag = imag - obj.imag;
		return res;
	}
	
	Complex operator * (Complex obj) {
		Complex res;
		res.real = real*obj.real;
		res.imag = imag*obj.imag;
		return res;
	}
	
	Complex operator / (Complex obj) {
		Complex res;
		res.real = real/obj.real;
		res.imag = imag/obj.imag;
		return res;
	}
	void print() { cout << real << " + " << imag <<"i"<< '\n'; }
};

int main()
{int r,i;
    cout<<"The real part of theh 1st number is=";
    cin>>r;
    cout<<"The imaginary part of theh 1st number is=";
    cin>>i; 
	Complex c1=Complex(r, i);
	cout<<"The real part of theh 2nd number is=";
    cin>>r;
    cout<<"The imaginary part of theh 2nd number is=";
    cin>>i; 
	Complex c2=Complex(r, i);
	
	Complex Sum = c1 + c2;
	cout<<"\nThe sum of the two imaginary number is=";
	Sum.print();
	
	Complex Diff=c1-c2;
	cout<<"\nThe difference of the two imaginary number is=";
	Diff.print();
	
	Complex Product=c1*c2;
	cout<<"\nThe product of the two imaginary number is=";
	Product.print();
	
	Complex Division=c1/c2;
	cout<<"\nThe Division of the two imaginary number is=";
	Division.print();
}

