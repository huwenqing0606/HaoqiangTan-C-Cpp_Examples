#include<string>
#include<iostream>
using namespace std;

//using destructor function

class Student{
	public:
		Student(int n, string nam, char s, int g) 
						//constructor function with parameters
		{	
			num=n;
			name=nam;
			sex=s;
			grade=g;
			cout<<"Constructor called."<<endl;
		} 
		~Student()
						//destructor function defined
		{
			cout<<"Destructor called."<<name<<'\n';
		}
		void display(){
			cout<<"num: "<<num<<'\n';
			cout<<"name: "<<name<<'\n';
			cout<<"sex: "<<sex<<'\n';
			cout<<"grade: "<<grade<<'\n'<<'\n';
		}
	private:
		int num;
		string name;
		char sex;
		int grade;
}; 

int main(){
	Student stud1(10010,"Dr_Wenqing_Hu",'m', 3);
	stud1.display();
	Student stud2(10011,"Dr_Yanzhi_Zhang",'f', 6);
	stud2.display();
	return 0;
}
