#include <stdio.h>

int main(){
	float a, b, t;
	printf("Please input two numbers a, b: ");
	scanf("%f, %f",&a,&b);
	if (a>b) {
		t=a;
		a=b;
		b=t;
	}
	printf("The two numbers in increasing order are %5.2f,%5.2f\n",a,b);
	return 0;
}
