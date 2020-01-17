#include <stdio.h>
int a=3, b=5; 		//external variables a=3 and b=5
int main(){
	int max(int a, int b); //internal variables a,b will work within the main function
	int a=8;
	printf("max=%d\n", max(a,b));
	return 0;
}

int max(int a, int b){
	int c;
	c=a>b?a:b;
	return c;
}
