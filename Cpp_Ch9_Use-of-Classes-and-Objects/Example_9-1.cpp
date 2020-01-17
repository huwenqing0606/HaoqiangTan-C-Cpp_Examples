#include<iostream>
using namespace std;
//make use of constructor function to initialize an object

class Time{
	public:
		Time(){
			hour=0;
			minute=0;
			sec=0;
		} //Time() is a constructor function
		void set_time();
		void show_time();
	private:
		int hour;
		int minute;
		int sec;
};

void Time::set_time(){
	printf("Please input the time in the form of hour, minute, sec: ");
	cin>>hour;
	cin>>minute;
	cin>>sec;
}

void Time::show_time(){
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

int main(){
	Time t1;
	t1.set_time();
	t1.show_time();
	Time t2;
	t2.show_time();
	return 0;
}
