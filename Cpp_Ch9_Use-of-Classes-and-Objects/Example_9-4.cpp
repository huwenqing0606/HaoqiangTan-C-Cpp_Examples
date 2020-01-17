#include<iostream>
using namespace std;

//initialize a class using constructor function 
//using default parameters to do the initilization
//at the same time, we have parameters that can be prescribed by prescribed value

class Box{
	public:
		Box(int h=10,int w=10,int len=10);
		//defines a constructor function with parameters
		//initilaize the parameters using default values
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
}

int Box::volume(){
	return(height*width*length);
}

int main(){
	Box box1;
	cout<<"The volume of Box 1 is "<<box1.volume()<<endl;
	Box box2(15); 
		//set h=15 and w, len are default
	cout<<"The volume of Box 2 is "<<box2.volume()<<endl;
	Box box3(15,30); 
		//set h=15, w=30 and len is default
	cout<<"The volume of Box 3 is "<<box3.volume()<<endl;
	Box box4(15,30,20); 
		//set h=15, w=30 and len=20
	cout<<"The volume of Box 4 is "<<box4.volume()<<endl;
	return 0;
}
