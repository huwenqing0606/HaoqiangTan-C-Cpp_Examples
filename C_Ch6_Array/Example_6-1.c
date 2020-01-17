#include<stdio.h>
//use of array
int main(){
	int i, a[10];
	for (i=0;i<=9;i++)
		a[i]=i;
	for (i=9;i>=0;i--)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
