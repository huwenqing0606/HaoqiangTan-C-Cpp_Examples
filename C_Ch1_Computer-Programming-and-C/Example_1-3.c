#include <stdio.h>

//calculating the maximum of two numbers

int main()
{
	int max(int x, int y);
	int a,b,c;
	printf("Please input a=");
	scanf("%d",&a);
	printf("Please input b=");
	scanf("%d",&b);
	c=max(a,b);
	printf("The maximum of a and b is %d. \n", c);
	return 0;
}

int max(int x, int y)
{
	int z;
	if (x>y) z=x;
	else z=y;
	return(z);
}
