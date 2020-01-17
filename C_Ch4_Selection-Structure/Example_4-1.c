#include<stdio.h>
#include<math.h>

int main(){
	double a, b, c, disc, x1, x2, p, q;
	printf("Please input the coefficients a, b, c of a quadratic equation ax^2+bx+c=0:");
	scanf("%lf%lf%lf",&a,&b,&c);
	disc=b*b-4*a*c;
	if (disc<0)
		printf("The equation %7.2f x^2+%7.2f x+%7.2f=0 does not have real roots!\n",a,b,c);
	else{
		p=-b/(2.0*a);
		q=sqrt(disc)/(2.0*a);
		x1=p+q; x2=p-q;
		printf("Real roots of %7.2f x^2+%7.2f x+%7.2f=0 are \n x1=%7.2f\n x2=%7.2f\n",a,b,c,x1,x2);
	}
	return 0;
}
