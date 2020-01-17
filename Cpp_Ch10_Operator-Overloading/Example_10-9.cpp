#include<iostream>
using namespace std;

//use of type conversion function

class Complex{
	public:
		Complex(){real=0; imag=0;}
		Complex (double r, double i){real=r; imag=i;}
		operator double(){return real;}
			//type conversion function that can convert class type
			//returns the real part of the variable that is originally of class Complex
	private:
		double real;
		double imag;
};

int main(){
	Complex c1(3,4), c2(5,-10), c3;
	double d;	//type comversion
	d=2.5+c1; 
				//add a variable of class Complex with a real variable 
	cout<<d<<endl;
				//output d
	return 0;
}
