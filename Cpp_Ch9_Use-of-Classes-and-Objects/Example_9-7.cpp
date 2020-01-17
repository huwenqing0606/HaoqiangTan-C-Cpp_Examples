#include<iostream>
using namespace std;

//output time(hour:minute:sec)
//using pointers pointing to classes/objects

class Time{
	public:
		Time(int,int,int); //constructor function
		int hour;
		int minute;
		int sec;
		void get_time();
}; 

Time::Time(int h, int m, int s){
	hour=h;
	minute=m;
	sec=s;
}

void Time::get_time(){
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

int main(){
	Time t1(10,13,56); //set parameters in constructor
	int *p1=&t1.hour; //p1 points to integer value hour 
	cout<<*p1<<endl;
	t1.get_time();
	Time *p2=&t1; //p2 is a pointer pointing to t1 that belongs to class Time
	p2->get_time(); 
	// same as 
	//(*p2).get_time();
	//void(Time::*p3)(); 
	//p3 is a pointer pointing to public functions in class Time 
	//p3=&Time::get_time;
	//p3 points to the public funcion get_time in class Time
	//We can also use
	void(Time::*p3)()=&Time::get_time;
	(t1.*p3)();
	//run the public class function t1.get_time()
}
