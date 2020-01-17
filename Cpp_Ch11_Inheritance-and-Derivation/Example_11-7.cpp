#include<iostream>
#include<string>
using namespace std;

//constructor function for multiple-hirachy inheritance

class Student{
	public:
		Student(int n, string nam){
			num=n;
			name=nam;
		}
		void display(){
			cout<<"num: "<<num<<endl;
			cout<<"name: "<<name<<endl;
		}
	protected:
		int num;
		string name;
};

class Student1:public Student{
			//Student1 inherits from class Student 
	public:
		Student1(int n, string nam, int a):Student(n, nam){
				//constructor function for the inheritance class Student1
			age=a;
		}
		void show(){
			display();
			cout<<"age: "<<age<<endl;
		}
	private:
		int age;
};

class Student2:public Student1{
		//Student2 inherits from Student1, multiple inheritance 
	public:
		Student2(int n, string nam, int a, int s):Student1(n, nam, a){
				//constructor function for class Student2 inherited from class Student1 
			score=s;
		}
		void show_all(){
			show();
			cout<<"score: "<<score<<endl;
		}
	private:
		int score;
};

int main(){
	Student2 stud(10010, "Li", 17, 89);
	stud.show_all();
	return 0;
}
