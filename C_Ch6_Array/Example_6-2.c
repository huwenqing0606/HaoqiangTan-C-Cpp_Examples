#include<stdio.h>
//Fibonacci sequence
int main(){
	int i;
	int f[20]={1,1};
	printf("%d %d ", f[0],f[1]);
	for (i=2;i<20;i++){
		f[i]=f[i-2]+f[i-1];
		printf("%d ", f[i]);
	}
	printf("\n");
	return 0;
}
