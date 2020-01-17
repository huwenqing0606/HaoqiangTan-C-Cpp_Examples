#include <stdio.h>

//turn a capital letter to lower case letter

int main(){
	char ch;
	printf("Please input a capital letter: ");
	scanf("%c", &ch);
	ch=(ch>='A'&&ch<='Z')?(ch+32):ch;
	{printf("The lower case letter is ");
	}
	printf("%c\n",ch);
	return 0;
}
