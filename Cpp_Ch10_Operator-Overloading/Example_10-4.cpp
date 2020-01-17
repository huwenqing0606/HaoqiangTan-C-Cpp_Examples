#include<iostream>
#include<string.h>

using namespace std;

class String{
	public:
		String(){p=NULL;} 	//constructor funtion initialization
		String(char *str);	 
		friend bool operator > (String &string1, String &string2);
							//overloading > as a friend function of class String
		friend bool operator < (String &string1, String &string2);
							//overloading < as a friend function of class String
		friend bool operator == (String &string1, String &string2);
							//overloading == as a friend function of class String
		void display();
	private:
		char *p;			//*p is a private pointer pointing to char variable
};

String::String(char *str){
	p=str;					//set str to private pointer p
}

void String::display(){
	cout<<p;				//output the string pointed by p
}

bool operator > (String &string1, String &string2){ //overloading >
	if (strcmp(string1.p, string2.p)>0)
		return true;
	else 
		return false;
}

bool operator < (String &string1, String &string2){ //overloading <
	if (strcmp(string1.p, string2.p)<0)
		return true;
	else 
		return false;
}

bool operator == (String &string1, String &string2){ //overloading ==
	if (strcmp(string1.p, string2.p)==0)
		return true;
	else 
		return false;
}

void compare(String &string1, String &string2){		//compare function
	if ((string1>string2)==1) 
		{string1.display(); cout<<" > "; string2.display();}
	else
		if ((string1<string2)==1)
			{string1.display(); cout<<" < "; string2.display();}
		else
			if ((string1==string2)==1)
				{string1.display(); cout<<" == "; string2.display();}
	cout<<endl; 
} 

int main(){
	String string1("Hello"), string2("Book"), string3("Computer"), string4("Hello");
	compare(string1, string2);
	compare(string2, string3);
	compare(string1, string4);
	return 0;
}
