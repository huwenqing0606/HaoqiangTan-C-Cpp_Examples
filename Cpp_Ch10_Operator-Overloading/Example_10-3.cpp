#include<iostream>
using namespace std;

//operator overloading function as friend of a class

class Complex{
	public:
		Complex(){real=0; imag=0;}
		Complex(double r, double i){real=r; imag=i;}
		friend Complex operator + (Complex &c1, Complex &c2);
			//the overloading operator + is claimed as a friend of class Complex
			//thus it can visit private data in class Complex
		friend Complex operator + (Complex &c1, int n);
			//the overloading operator + is claimed as a friend of class Complex
			//it overloads a variable in class Complex + an integer
		friend Complex operator + (int n, Complex &c2);
			//the overloading operator + is claimed as a friend of class Complex
			//it overloads a variable in class Complex + an integer
		void display();
	private:
		double real;
		double imag;
};

Complex operator + (Complex &c1, Complex &c2){
	return Complex(c1.real+c2.real, c1.imag+c2.imag);
	//a short way to write variables of class Complex is to do Complex(real,imag)
}

Complex operator + (Complex &c1, int n){
	return Complex(c1.real, c1.imag+n);
	//the opeator + can be overloaded multiple times
}

Complex operator + (int n, Complex &c2){
	return Complex(n+c2.real, c2.imag);
	//the opeator + can be overloaded multiple times
}

void Complex::display(){
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}

int main(){
	Complex c1(3,4), c2(5,-10), c3, c4, c5;
	int n=-10;
	c3=c1+c2;
	c4=c1+n;
	c5=n+c2;
	cout<<"c1="; c1.display();
	cout<<"c2="; c2.display();
	cout<<"n="<<n<<endl;
	cout<<"c1+c2="; c3.display();
	cout<<"c1+ni="; c4.display();
	cout<<"n+c2="; c5.display();
}

