#include<iostream>
using namespace std;

//array of classes and objects

class Box{
	public:
		Box(int h=10, int w=12, int len=15):height(h),width(w),length(len){}
			//claim constructor function with parameters
			//pay attention to the way it is written
		int volume();
		~Box() {
			cout<<"Destruction called. "<<"height:"<<height<<'\n';
		}
	private:
		int height;
		int width;
		int length;	
};

int Box::volume(){
	return (height*width*length);
}

int main(){
	Box a[3]={Box(10,12,15), Box(15,18,20), Box(16,20,26)};
	cout<<"volume of a[0] is "<<a[0].volume()<<endl;
	cout<<"volume of a[1] is "<<a[1].volume()<<endl;
	cout<<"volume of a[2] is "<<a[2].volume()<<endl;
}



