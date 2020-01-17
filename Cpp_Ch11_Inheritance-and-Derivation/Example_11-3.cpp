#include<iostream>
#include<string>
using namespace std;

//an example of protected inheritance

class Student{
	public:		//class student does not have any public functions 
	 
	protected: 	//variables num, name and sex are protected, 
				//so that exterior functions cannot visit them,
				//yet they can be visited by its inheritance class
		int num;
		string name;
		char sex;
};

class Student1:protected Student{	
				//Student1 is a protected inheritance from class Student
	public:
		void get_value1(){
			cout<<"Input num, name, sex, age, address: ";
			cin>>num>>name>>sex;
				//in protected inheritance, the inheritance class can have public functions
				//which can visit protected variables in the original class
			cin>>age>>addr;
				//here the inheritance class visits its own private variables 
			}
		void display1(){
			cout<<"num: "<<num<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"sex: "<<sex<<endl;
				//num, name, sex are protected variables in class Student
			cout<<"age: "<<age<<endl;
			cout<<"address: "<<addr<<endl;
				//age, address are private variables in the inheritance class Student1
			}
	private:
		int age;
		string addr;
};

int main(){
	Student1 stud1;
	stud1.get_value1();
	stud1.display1();
	return 0;
}

