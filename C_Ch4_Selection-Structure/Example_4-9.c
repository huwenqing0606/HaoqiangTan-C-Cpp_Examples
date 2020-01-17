#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, disc, x1, x2, realpart, imagepart;
	printf("Please enter the coefficients a, b, c for a quadratic equation ax^2+bx+c=0: \n");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	disc=b*b-4*a*c;
	printf("The equation %f x^2+%f x+ %f=0 ",a,b,c);
	if (fabs(a)<1e-6)
		printf("is not quadratic");
	else
	{
		if (fabs(disc)<=1e-6)
			printf("has two equal roots: %8.4f\n", -b/(2*a));
		else
			if (disc>1e-6)
			{
				x1=(-b+sqrt(disc))/(2*a);
				x2=(-b-sqrt(disc))/(2*a);
				printf("has distinct real roots: %8.4f and %8.4f\n",x1,x2);			
			}
			else
			{
				realpart=-b/(2*a);
				imagepart=sqrt(-disc)/(2*a);
				printf("has complex roots: ");
				printf("%8.4f+%8.4fi , ",realpart,imagepart);
				printf("%8.4f-%8.4fi\n",realpart, imagepart);
			}
	}
	return 0;
}

