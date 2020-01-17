#include <stdio.h>
//optput all numbers 100-200 that cannot be devided by 3
int main(){
	int n;
	for (n=100;n<=200;n++){
		if (n%3==0) continue;
		printf("%d ",n);
	}
	printf("\n");
	return 0;
}
