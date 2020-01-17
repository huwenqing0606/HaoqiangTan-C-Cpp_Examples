#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, disc, x1, x2, p, q;
	printf("Input the coefficients a, b, c of a quanradtic equation ax^2+bx+c=0:");
	scanf("%lf%lf%lf",&a,&b,&c);
	disc=b*b-4*a*c;
	p=-b/(2.0*a);
	q=sqrt(disc)/(2.0*a);
	x1=p+q; x2=p-q;
	printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
	return 0;
}
