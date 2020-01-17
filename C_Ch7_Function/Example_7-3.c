#include<stdio.h>
int main(){
	int max(float x, float y);
	float a,b;
	float c;
	printf("Please input two real numbers a, b: ");
	scanf("%f,%f",&a,&b);
	c=max(a,b);
	printf("max is %1.2f\n",c);
	return 0;
}

int max(float x, float y){
	float z;
	z=x>y?x:y;
	return z;
}
