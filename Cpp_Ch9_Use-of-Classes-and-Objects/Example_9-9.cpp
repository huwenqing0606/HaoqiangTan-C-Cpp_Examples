#include<iostream>
using namespace std;

//prescribe values that is of class type

class Box{
	public:
		Box(int=10, int=10, int=10);
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
	return (height*width*length);
}

int fun_volume(Box b){ 
			//function fun_volume has variable Box b
	return b.volume();
} 

Box fun_newbox(){ 
			//function fun_newbox returns a new Box variable box
	Box box(1,2,3);
	return box;
}

int main(){
	Box box1(15,30,25), box2;
	cout<<"The volume of box 1 is "<<fun_volume(box1)<<endl; 
			//when we use the function fun_volume, 
			//the variable is the newly allocated box1 variable
	cout<<"The volume of box 1 is "<<box1.volume()<<endl;
	cout<<"The volume of box 2 is "<<box2.volume()<<endl;
	box2=box1;
	cout<<"The volume of box 2 after prescibing box 1 is "<<box2.volume()<<endl;
	Box *pt=new Box(12,15,18); 
			//malloc a new space for a Box class variable 
	cout<<"The volume of the new box variable assigned to pointer is "<<pt->volume()<<endl;
	Box box3(box1); 
			//assign box1 to the new Box variable box3
	cout<<"The volume of the new Box variable box 3 is "<<box3.volume()<<endl;
	Box box4;
	box4=fun_newbox();
	cout<<"The volume of box 4 returned by the function fun_newbox is "<<box4.volume()<<endl;
	return 0;
}
