#include <stdio.h>
//calculate 5!

int main(){
	int fac(int n);
	int i;
	for (i=1;i<=15;i++)
		printf("%d!=%d\n", i, fac(i));
	return 0;
}

int fac(int n){
	static int f=1;
	f=f*n;
	return(f);
}
