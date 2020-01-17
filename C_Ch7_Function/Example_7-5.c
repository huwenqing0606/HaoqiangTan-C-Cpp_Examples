#include<stdio.h>

int max2(int a, int b){
	return (a>=b?a:b);
}

int max4(int a, int b, int c, int d){
	return (max2(a, max2(b, max2(c,d))));
}

int main(){
	int a, b, c, d, max;
	printf("Please enter 4 integer numbers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	max=max4(a,b,c,d);
	printf("max=%d\n", max);
	return 0;
}
