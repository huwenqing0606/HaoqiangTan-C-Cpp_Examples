#include<iostream>
using namespace std;

//initialize a class using constructor function with parameters

class Box{
	public:
		Box(int,int,int); //constructor function with parameters 
		Box(); //constructor function without parameters
		int volume();
	private:
		int height;
		int width;
		int length;
};

Box::Box(int h, int w, int len){
	height=h;
	width=w;
	length=len;
}  //defines the constructor function with parameters to be defined

Box::Box(){
	height=10;
	width=10;
	length=10;
}  //defines the constructor function with preseribed parameters

int Box::volume(){
	return(height*width*length);
}

int main(){
	Box box1(12,25,30);
	cout<<"The volume of Box 1 is "<<box1.volume()<<endl;
	Box box2(15,30,21);
	cout<<"The volume of Box 2 is "<<box2.volume()<<endl;
	Box box3;
	cout<<"The volume of Box 3 is "<<box3.volume()<<endl;
	return 0;
}
