#include<iostream>
using namespace std;

//use a function to do operator overloading for addition

class Complex{
	public:
		Complex(double, double); 
		Complex();
		Complex complex_add(Complex &);
		void display();
	private:
		double real;
		double imag;
};

Complex::Complex(double r, double i){
	real=r;
	imag=i;
}
//constructor function with initialized parameters

Complex::Complex(){
	real=0;
	imag=0;	
}
//constructor function with initial parameters (real and complex parts) all equal to zero

Complex Complex::complex_add(Complex &c2){
	Complex c;
	c.real=real+c2.real;
	c.imag=imag+c2.imag;
	return c;
}

void Complex::display(){
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}

int main(){
	Complex c1(3,4), c2(5,-10), c3;
	c3=c1.complex_add(c2);
	c1.display(); 
	cout<<"c1="; c1.display();
	cout<<"c2="; c2.display();
	cout<<"c1+c2="; c3.display();
	return 0;
}
