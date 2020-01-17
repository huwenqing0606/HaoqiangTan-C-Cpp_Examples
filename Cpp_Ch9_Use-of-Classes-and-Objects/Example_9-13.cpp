#include<iostream>
using namespace std;

//functions that belong to one class serve as friends of another class

class Date;
//claim a class Date before it is defined in more detail

class Time{
	public:
		Time(int,int,int);
		void display(Date &); 
			//display is a function that belongs to class Time, 
			//with parameters in class Date
			//& is used for reference 
	private:
		int hour;
		int minute;
		int sec;
};

class Date{
	public:
		Date(int,int,int);
		friend void Time::display(Date &);
			//claim display to be a friend of class Date
			//then display can visit private data in class Date
			//& is used for reference
		//friend Time;
			//we can also just claim that Time is a friend class of Date
			//then all functions in Time can visit private data in Date
	private:
		int month;
		int day;
		int year;
};

Time::Time(int h, int m, int s){ 
			//constructor function for class Time
	hour=h;
	minute=m;
	sec=s;
}

void Time::display(Date &d){
	cout<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;
		//when display makes use of private variables in Date
		//it has to refer to its right parameter
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
		//when display makes use of private variables in Time
		//it just uses the name of those variables
}

Date::Date(int m, int d, int y){
			//constructor function for class Date  
	month=m;
	day=d;
	year=y;
}

int main(){
	Time t1(10,13,56);
	Date d1(12,25,2004);
	t1.display(d1); //display is a function that belongs to class Time
					//but it is a friend of class Date
					//if we do not use friend class, then we need 
					//display1 and display2 for both Time and Date, respectively
	return 0;
}
