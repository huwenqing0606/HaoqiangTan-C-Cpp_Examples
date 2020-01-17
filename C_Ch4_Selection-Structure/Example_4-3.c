#include <stdio.h>

// multiple if control sequence

int main(){
	float a, b, c, t;
	printf("Please input 3 numbers in the form of a, b, c: ");
	scanf("%f,%f,%f",&a,&b,&c);
	if (a>b) 
		{
			t=a; 
		 	a=b; 
			b=t;
		}
	if (a>c) 
		{
			t=a; 
			a=c; 
			c=t;
		}
	if (b>c) 
		{
			t=b; 
			b=c; 
			c=t;
		}
	printf("The 3 numbers in increasing order is given by %5.2f, %5.2f, %5.2f", a, b, c);
	return 0;
}
