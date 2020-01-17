#include<iostream>
using namespace std;

//operator overloading

class Complex{
	public:
		Complex(){real=0; imag=0;}
			//constructor function with initial parameters both 0
		Complex(double r, double i):real(r),imag(i){};
			//constructor function is defined via parameter initialization table  
		Complex operator+ (Complex &);
			//operator overloading of + 
		void display();
	private:
		double real;
		double imag;
};

Complex Complex::operator+ (Complex &c2){ 
			//operator overloading is actually nothing but function overloading
	Complex c;
	c.real=real+c2.real;
	c.imag=imag+c2.imag;
	return c;
}

void Complex::display(){
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}

int main(){
	Complex c1(3,4), c2(5,10), c3;
	c3=c1+c2;
	cout<<"c1="; c1.display();
	cout<<"c2="; c2.display();
	cout<<"c1+c2="; c3.display();
	return 0;
}
