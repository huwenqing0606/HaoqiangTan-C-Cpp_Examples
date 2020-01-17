#include <stdio.h>

//calculating the sum of two numbers a and b

int main()
{
	int a, b, sum;
	printf("Please input a=");
	scanf("%d", &a);
	printf("Please input b=");
	scanf("%d", &b);
	sum=a+b;
	printf("The sum of a and b is %d.\n", sum);
	return 0;
}
