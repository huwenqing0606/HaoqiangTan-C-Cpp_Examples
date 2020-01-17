#include<iostream>
using namespace std;

//overloading the operator >> 

class Complex{
	public:
		friend ostream &operator<<(ostream&, Complex&);
		friend istream &operator>>(istream&, Complex&);
			//overloading operator >> outputs a quotation in istream
	private:
		double real;
		double imag;
};

ostream& operator<<(ostream&output, Complex&c){
	output<<"("<<c.real;
	if (c.imag>=0) output<<"+";
	output<<c.imag<<"i)";
	return output;
}

istream& operator>>(istream&input, Complex&c){
		//here the operator >> has been overloaded to input variables in class Complex
	cout<<"Input the real and imaginary part of a complex number: ";
	input>>c.real>>c.imag;
		//send c.real and c.imag to input
	return input;
}

int main(){
	Complex c1, c2;
	cin>>c1>>c2;
		//>> inputs variables in class Complex
		//but when we input we shall input the real and imaginary parts separately 
	cout<<"c1="<<c1<<endl;
	cout<<"c2="<<c2<<endl;
	return 0;
}

