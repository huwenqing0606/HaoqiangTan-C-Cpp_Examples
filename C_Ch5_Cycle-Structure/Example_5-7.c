#include<stdio.h>
//calculate pi
int main(){
	int sign=1;
	double additor=1, i=1.0, sum=0.0, pi=0.0; 
	while (additor>=1e-6){
		sum=sum+sign*additor;
		sign=-sign;
		i=i+2;
		additor=1/i; //i cannot be an integer, since 1/i is automatically taken as an integer
	} 
	pi=sum*4;
	printf("%10.8f\n", pi);
	return 0;
}
