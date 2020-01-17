#include <stdio.h>

int main(){
	char c1, c2;
	printf("Please input a capital letter: ");
	scanf("%c",&c1);
	c2=c1+32;
	printf("The small letter is %c\n", c2);
	printf("The ASCII code for the above small letter is %d\n", c2);
	return 0;	
}
