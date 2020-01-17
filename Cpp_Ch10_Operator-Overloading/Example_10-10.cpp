#include<iostream>
using namespace std;

//sample code that has conversion constructor function, 
//operator overloading and type conversion function

class Complex{
	public:
		Complex(){real=0; imag=0;}
		Complex(double r){real=r; imag=0;}
			//conversion constructor function
		Complex(double r, double i){real=r; imag=i;}
		operator double(){return real;}
			//type conversion function 
		friend Complex operator+(Complex c1, Complex c2);
			//operator overloading + to class Complex
		void display();
	private:
		double real;
		double imag;
};

Complex operator+(Complex c1, Complex c2){
	return Complex(c1.real+c2.real, c1.imag+c2.imag);
}

void Complex::display(){
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}

int main(){
	Complex c1(3,4), c2(5,-10), c3;
	double d;
	c3=c1+Complex(2.5);
		//Complex(2.5) is the conversion constructor function
	c3.display();
	d=c1+c2;
		//double d uses the type conversion function
	cout<<d<<endl;
	return 0;
}
