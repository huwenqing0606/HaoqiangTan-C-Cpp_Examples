#include<iostream>
using namespace std;

//overloading ++ from backward direction

class Time{
	public:
		Time(){minute=0; sec=0;} 
					//initilize the constructor function using zero initial value 
		Time(int m, int s):minute(m),sec(s){}
					//initilize the constructor function using the parameter table
		Time operator ++();
		Time operator ++(int);
					//overloading ++ from the backward direction, parameter of type int
		void display(){cout<<minute<<":"<<sec<<endl;}
	private:
		int minute;
		int sec;
};

Time Time::operator++(){
					//overloading ++ from the forward direction
	if (++sec>=60){
		sec-=60;
		++minute;
	}
	return *this;
					//++Time means ++ before using the time variable
					//so the returning time variable is already +1
					//return the current "this" pointer 
} 

Time Time::operator++(int){
					//overloading ++ from the backward direction
					//parameter of type int
	//Time temp(*this);
	Time temp=*this;
					//Time++ means ++ after using the time variable
					//so return the original "this" pointer
					//notice the way how "this" pointer enters the variable of Time type
	sec++;
	if (sec>=60){
		sec-=60;
		++minute;
	}
	return temp;
}

int main(){
	Time time1(34,59), time2;
	cout<<"time1  : ";
	time1.display();
	++time1;
	cout<<"++time1: ";
	time1.display();
	time2=time1++;
	cout<<"time1++: ";
	time1.display();
	cout<<"time2  : ";
	time2.display();
	return 0;
}
