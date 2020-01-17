#include<iostream>
using namespace std;

class Student{
	public:
		Student(int n, int a, float s):num(n),age(a),score(s){};
			//constructor function is defined via parameter initialization table 
		void total();
		static float average();
			//average is a static function that can only make use of static variables
	private:
		int num;
		int age;
		float score;
		static float sum;
			//sum is a static variable
		static int count;
			//count is a static variable
};

void Student::total(){
	sum+=score; //static variables can change themselves 
	count++;
}

float Student::average(){
	return(sum/count);
				//static function can only make use of static variables
}

float Student::sum=0;
int Student::count=0;

int main(){
	Student stud[3]={Student(1001,18,70), Student(1002,19,78), Student(1005,20,98)};
	int n;
	cout<<"please input the number of students: ";
	cin>>n;
	for (int i=0;i<n;i++)
		stud[i].total();
	cout<<"the average score of "<<n<<" students is "<<Student::average()<<endl;
	return 0;
}

