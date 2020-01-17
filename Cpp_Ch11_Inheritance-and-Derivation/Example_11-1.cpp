#include<iostream>
#include<string>
using namespace std;

//an example of public inheritance
//the inherited class is a derived class (a derivation) from the original class
 
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

class Student1:public Student{
		//Student1 inherits from the class Student 
		//it is public inheritance
		//Student1 is a public derived class
		//so it can visit public functions as display() and get_value() in class Student
	public:
		void get_value_1(){
//			get_value();
			cin>>age>>addr;
		}
		void display_1(){
			//cout<<"num: "<<num<<endl;
			//cout<<"name: "<<name<<endl;
			//cout<<"sex: "<<sex<<endl;
			//display_1 cannot visit private variables as num, name, sex in class Student
			display();
			//in the publicly derived class Student1 we can visit the public function 
			//display() in class Student
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
		//but it inherits publicly from class Student
		//Student1 is public derived class of class Student
	stud.get_value();
	stud.get_value_1();
	stud.display();
	stud.display_1();
	return 0;
}
