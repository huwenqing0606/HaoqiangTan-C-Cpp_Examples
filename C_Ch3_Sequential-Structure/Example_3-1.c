//Fahrenheit to Celsius

#include<stdio.h>

int main()
{
	float f,c;
	printf("Please input the Fahrenheit tempreature: ");
	scanf("%f", &f);
	c=(5.0/9)*(f-32);
	printf("The corresponding Celsius tempreature is %f degrees.\n", c);
	return 0;
}


