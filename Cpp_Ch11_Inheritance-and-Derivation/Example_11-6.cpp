#include<iostream>
#include<string>
using namespace std;

//inheritance class that includes sub-objects

class Student{
	public:
		Student(int n, string nam){
			num=n;
			name=nam;
		}
		void display(){
			cout<<"num: "<<num<<endl<<"name: "<<name<<endl;
		}
	protected:
		int num;
		string name;
};

class Student1:public Student{
				//Student1 is a public inheritance class of the class Student
	public:
		Student1(int n, string nam, int n1, string nam1, int a, string ad):
			Student(n, nam), monitor(n1, nam1)
				//constructor function for the inheritance class
				//it also prescribes value for the variable monitor in class Student 
			{
				age=a;
				addr=ad;
				//only the variables age and addr are to be defined				
			}
		void show(){
			cout<<"This student is: "<<endl;
			display();
			cout<<"age: "<<age<<endl;
			cout<<"address: "<<addr<<endl<<endl;
		}
		void show_monitor(){
				//show_monitor is a public function in class Student1 that 
				//displays the variables in the class monitor
			cout<<endl<<"Class monitor is: "<<endl;
			monitor.display();
		}
	private:
		Student monitor;
			//monitor is a sub-object in the inheritance class Student1
			//so it is defined as private in Student1
		int age;
		string addr;
};

int main(){
	Student1 stud1(10010,"Wang_li",10001,"Li_sun",19,"115 Beijing Road, Shanghai");
	stud1.show();
	stud1.show_monitor();
	return 0;
}
