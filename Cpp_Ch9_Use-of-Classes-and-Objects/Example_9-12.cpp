#include<iostream>
using namespace std;

//friend of a class

class Time{
	public:
		Time(int h,int m,int s):hour(h),minute(m),sec(s){};			 
									 //constructor function claimed
		friend void display(Time &); 
									 //claim a function display that 
									 //is of friend to class Time
									 //so it can visit private data in class Time
									 //& is used for reference
		void show();
	private:
		int hour;
		int minute;
		int sec;
};


void display(Time &t){
	cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
}

void Time::show(){
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

void demonstrate(Time &t){
	t.show();
}

int main(){
	Time t1(10,13,56);
	display(t1); //the function display does not belong to class Time
	t1.show();
	demonstrate(t1);
	return 0;
}
