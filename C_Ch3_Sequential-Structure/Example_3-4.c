//compute the area of a triangle

#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c,s,area;
	printf("Please input the side lengths a, b, c of a triangle: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	if((a+b<=c)||(b+c<=a)||(c+a<=b))
		printf("Not a triangle!");
	else
	{
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("a=%f \t b=%f \t c=%f \t area=%f",a,b,c,area);
	};
	return 0;
}
