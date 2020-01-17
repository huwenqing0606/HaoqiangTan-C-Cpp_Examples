#include<iostream>
#include<string>
using namespace std;

//multiple inheritance

class Teacher{
		//Teacher is a class 
	public:
		Teacher(string nam, int a, string t){
			//constructor function for the class Teacher
			name=nam;
			age=a;
			title=t;
		}
		void display(){
			cout<<"name: "<<name<<endl;
			cout<<"age: "<<age<<endl;
			cout<<"title: "<<title<<endl;
		}
	protected:
		string name;
		int age;
		string title;
};

class Student{
		//Student is another class
	public:
		Student(string nam, char s, float sco){
			//cosntructor function for the class Student
			name=nam;
			sex=s;
			score=sco;
		}
		void display1(){
			cout<<"name: "<<name<<endl;
			cout<<"sex: "<<sex<<endl;
			cout<<"score: "<<score<<endl;
		}
	protected:
		string name;
		char sex;
		float score;
};

class Graduate:public Teacher, public Student{
			//Graduate is a multiple inherited class that inherits from both Teacher and Student
	public:
		Graduate(string namT, string namS, int a, char s, string t, float sco, float w):
			Teacher(namT, a, t), Student(namS, s, sco), wage(w){}
			//constructor function for multiple inheritance class
			//wage is a private parameter in class Graduate
		void show(){
			cout<<"Teacher name: "<<Teacher::name<<endl;
			cout<<"Student name: "<<Student::name<<endl;
			//variable "name" appears both in class Teacher and Student
			//so we have to specify which class the variable "name" belongs to
			//another way to do it is to give two different names "name" for Teacher and "name1" for Student
			cout<<"age: "<<age<<endl;
			cout<<"sex: "<<sex<<endl;
			cout<<"score: "<<score<<endl;
			cout<<"title: "<<title<<endl;
			cout<<"wages: "<<wage<<endl;
		}
	private:
		float wage;
};

int main(){
	Graduate grad1("Wang_li", "Sverak", 24, 'f', "assistant", 89.5, 1200);
	grad1.show();
	return 0;
}
 
