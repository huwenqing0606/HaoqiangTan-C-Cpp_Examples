#include<iostream>
using namespace std;

//overloading ++ operator
//forward ++

class Time{
	public:
		Time(){minute=0; sec=0;}	
					//constructor function with 0 initialization
		Time(int m, int s):minute(m),sec(s){} 
					//constructor function with parameter
		Time operator ++();
					//claim the overloading operator ++
		void display(){cout<<minute<<":"<<sec<<endl;}
	private:
		int minute;
		int sec;
};

Time Time::operator++(){
	if (++sec>=60){
		sec-=60;
		++minute;
		return *this; //return pointer this
	}
}

int main(){
	Time time1(34,0);
	for (int i=0; i<200; i++){
		++time1;
		time1.display();
	}
	return 0;
}
