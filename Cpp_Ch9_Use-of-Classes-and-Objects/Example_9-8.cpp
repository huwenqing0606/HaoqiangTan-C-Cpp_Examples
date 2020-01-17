#include<iostream>
using namespace std;

//define variables that belong to a certain class

class Time{
	public:
		Time(int, int, int); //constructor function with parameters 
		int hour;
		int minute;
		int sec;
};

Time::Time(int h, int m, int s){ 
//set parameters hour, minute, sec for the constructor function
	hour=h;
	minute=m;
	sec=s;
}

void fun(Time &t){
 			//t is a REFERENCE of a varible under class Time
 			//that is why we have the symbol "&"
 			//in this way t change that variable in the reference
 			//if it is void fun(Time t), then t is only a variable of class Time 
 			//t cannot change the value of the parameter used in the function
	t.hour=17;
}

int main(){
	//void fun(Time &t); 
	Time t1(10,13,56);
	fun(t1);
	cout<<"t1-hour is "<<t1.hour<<endl;
	return 0;
}
