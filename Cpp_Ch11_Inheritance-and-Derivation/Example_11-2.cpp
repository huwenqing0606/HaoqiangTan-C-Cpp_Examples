#include<iostream>
#include<string>
using namespace std;

//an example of private inheritance
 
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

class Student1:private Student{
		//Student1 inherits from the class Student 
		//it is private inheritance
		//Student1 is a private derived class
		//so public functions as display() and get_value() in class Student are private in class Student1
		//private variables num, name, sex cannot be visited in Student1
	public:
		void get_value_1(){
			cin>>age>>addr;
		}
		void display_1(){
			//cout<<"num: "<<num<<endl;
			//cout<<"name: "<<name<<endl;
			//cout<<"sex: "<<sex<<endl;
			//display_1 cannot visit private variables as num, name, sex in class Student
			cout<<"age: "<<age<<endl;
			cout<<"address: "<<addr<<endl;
		}
	private:
		int age;
		string addr;
}; 

int main(){
	cout<<"Input num, name, sex, age, address: ";
	Student1 stud;
		//stud is in the class Student1
		//it inherits privately from class Student
		//Student1 is private derived class of class Student
	//stud.get_value();
		//stud cannot visit function get_value as it is public in class Student
	stud.get_value_1();
	//stud.display();
		//stud cannot visit function display as it is public in class Student
	stud.display_1();
	return 0;
}
