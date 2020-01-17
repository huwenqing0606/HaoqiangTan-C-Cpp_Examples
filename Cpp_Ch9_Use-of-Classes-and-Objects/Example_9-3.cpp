#include<iostream>
using namespace std;

//initialize a class using constructor function 
//using parameter initilization table

//Overload of constructor functions

class Box{
	public:
		Box(); //claim a constructor function without parameters 
		Box(int h,int w,int len):height(h),width(w),length(len){};
		//defines a constructor function with parameters
		//initilaize the parameters using the initilization table
		int volume();
	private:
		int height;
		int width;
		int length;
};

Box::Box(){
	height=10;
	width=10;
	length=10;
}

int Box::volume(){
	return(height*width*length);
}

int main(){
	Box box1;
	cout<<"The volume of Box 1 is "<<box1.volume()<<endl;
	Box box2(15,30,25);
	cout<<"The volume of Box 2 is "<<box2.volume()<<endl;
	return 0;
}
