#include<iostream>
using namespace std;

//template class

template <class numtype>
//claim a template class

class Compare{
	public:
		Compare(numtype a, numtype b){
			x=a; y=b;
		} //constructor function
		numtype max(){
			return (x>y)? x:y;
		}
		numtype min(){
			return (x<y)? x:y;
		}
	private:
		numtype x,y;
}; 

int main(){
	Compare <int> cmp1(3,7); 
					//claim cmp1 in class Compare using numtype int
	cout<<cmp1.max()<<" is the Maximum of two integer numbers."<<endl;
	cout<<cmp1.min()<<" is the Minimum of two integer numbers."<<endl<<endl;
	Compare <float> cmp2(45.78, 96);
					//claim cmp2 in class Compare using numtype float
	cout<<cmp2.max()<<" is the Maximum of two integer numbers."<<endl;
	cout<<cmp2.min()<<" is the Minimum of two integer numbers."<<endl<<endl;
	Compare <char> cmp3('a','A');
					//claim cmp3 in class Compare using numtype char
	cout<<cmp3.max()<<" is the Maximum of two characters."<<endl;
	cout<<cmp3.min()<<" is the Minimum of two characters."<<endl;
	return 0;
}
