#include<iostream>
#include<string>
using namespace std;

//constructor and destructor functions for inheritence classes

class Student{ //base class is Student
	public:
		Student(int n, string nam, char s){
				//constructor function for the base class Student
			num=n;
			name=nam;
			sex=s;
		}	
		~Student(){}
				//destructor function for the base class Student
	protected:
				//variables num, name and sex are protected
		int num;
		string name;
		char sex;
};

class Student1:public Student{
				//Student1 is a public inheritance from class Student
	public:
		Student1(int n, string nam, char s, int a, string ad):Student(n, nam, s), age(a), addr(ad){}
				//constructor function defined in Student1 using the parameter initialization table
//		Student1(int n, string nam, char s, int a, string ad):Student(n, nam, s){
//				//constructor function defined in Student1 
//			age=a;
//			addr=ad;
//				//only initialize newly added variables in constructor function
//		}
		void show(){
			cout<<"num: "<<num<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"sex: "<<sex<<endl;
			cout<<"age: "<<age<<endl;
			cout<<"address: "<<addr<<endl<<endl;
				//protected inheritance can visit protected variables in base class 
		}
		~Student1(){}
				//destructor function for class Student1
	private:
		int age;
		string addr;
};

int main(){
	Student1 stud1(10010, "Wang-li", 'f', 19, "123 Beijing Road, Shanghai");
	Student1 stud2(10011, "Zhang-fang", 'm', 21, "213 Shanghai Road, Beijing");
	stud1.show();
	stud2.show();
	return 0;
}
