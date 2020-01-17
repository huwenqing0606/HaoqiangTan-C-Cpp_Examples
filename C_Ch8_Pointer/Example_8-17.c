#include<stdio.h>
int main(){
	char string[]="I love China!", *p;
	// char *string="I love China!" is not accepted by the machine
	// machine identifies virus
	int i;
	p=string;
	printf("%s\n", p);
	for (i=0;*(p+i)!='\0';i++)
		printf("%c ", *(p+i)); 
	return 0;
}
