#include<stdio.h>
//calculate n!

int fac(int n){
	int f;
	if (n<0) printf("n<0, data error!");
		else
			if (n==0||n==1) f=1;
				else f=fac(n-1)*n;
	return f;		
}

int main(){
	int n;
	for (n=0;n<=10;n++){
			printf("%d!=%d\n", n, fac(n));
	}
	return 0;
}
