#include<iostream>
#include<string>
using namespace std;

//multiple inheritance

class Student{
		//Student is a class
	public:
		void get_value(){
			cin>>num>>name>>sex;
			}
		void display(){
			cout<<"num: "<<num<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"sex: "<<sex<<endl;
			}
	private:
		int num;
		string name;
		char sex;
};

class Student1:protected Student{
		//Student1 inherits from the class Student 
		//it is protected inheritance
		//so it can visit public functions as display() and get_value() in class Student 
		//within class Student1
	public:
		void get_value_1(){
			get_value();
			cin>>age;
		}
		void display_1(){
			//cout<<"num: "<<num<<endl;
			//cout<<"name: "<<name<<endl;
			//cout<<"sex: "<<sex<<endl;
			//display_1 cannot visit private variables as num, name, sex in class Student
			display();
			//within the protected inheritance class Student1 we can visit the public function 
			//display() in class Student
			//but we cannot visit it outside of this inheritance class 
			cout<<"age: "<<age<<endl;
		}
	private:
		int age;
}; 

class Student2:public Student1{
			//Student2 is a public inheritance of Student1
			//so it can visit public functions in class Student1
	public:
		void get_value_2(){
			cin>>addr;
		}
		void display_2(){
			cout<<"address: "<<addr<<endl;
		}
	private:
		string addr; 
}; 

int main(){
	cout<<"Input num, name, sex, age, address: ";
	Student2 stud;
		//stud is in the class Student2
		//but it inherits publicly from class Student1
		//Student1 a protected inheritance of class Student
	stud.get_value_1();
			//Student2 is a public inheritance of Student1
			//so it can visit public functions in class Student1
	stud.get_value_2();
	stud.display_1();
			//Student2 is a public inheritance of Student1
			//so it can visit public functions in class Student1
	stud.display_2();
	return 0;
}
