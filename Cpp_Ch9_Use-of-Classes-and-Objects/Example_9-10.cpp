#include<iostream>
using namespace std;

class Box{
	public:
		Box(int, int);
		int volume();
		static int height; //height is a static varible in class Box
		int width;
		int length;
}; 

Box::Box(int w, int len){
	width=w;
	length=len;
}  //the constructor function only assigns values to the width and the length variables

int Box::volume(){
	return(height*width*length);
}

int Box::height=10; //the static variable height is assigned outside of the contructor function

int main(){
	Box a(15,20), b(20,30);
	cout<<"The height of Box variable a is given by "<<a.height<<endl;
	cout<<"The height of Box variable b is given by "<<b.height<<endl;
	cout<<"The static variable height in class Box is given by "<<Box::height<<endl;
	cout<<"The volume of Box a is "<<a.height<<"*"<<a.width<<"*"<<a.length<<"="<<a.volume()<<endl;
	cout<<"The volume of Box b is "<<b.height<<"*"<<b.width<<"*"<<b.length<<"="<<b.volume()<<endl;
	return 0;
}

