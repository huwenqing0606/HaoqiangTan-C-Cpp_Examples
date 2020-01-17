#include<iostream>
using namespace std;

//overloading << operator

class Complex{
	public:
		Complex(){real=0; imag=0;} 
					//constructor function using initial values 0
		Complex(double r, double i){real=r; imag=i;}
					//constructor function using parametrization table
		Complex operator + (Complex &c2);
					//overloading + 
		friend ostream& operator<<(ostream&, Complex&);
					//overloading << as output stream
					//it must be in friend class function
					//<< operator returns in class ostream&
					//& does quote
	private:
		double real;
		double imag;
};

Complex Complex::operator+(Complex &c2){
	return Complex(real+c2.real, imag+c2.imag);
}

ostream &operator<<(ostream &output, Complex&c){
	output<<"("<<c.real<<"+"<<c.imag<<"i)"<<endl;
		//output is a quotation of ostream& type
		//the output flow at ostream& and returns
	return output;
}

int main(){
	Complex c1(2,4), c2(6,10), c3;
	c3=c1+c2;
	cout<<"c3 is given by "<<c3;
		//output a class
	return 0;
}
