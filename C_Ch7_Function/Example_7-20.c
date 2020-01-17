#include<stdio.h>
#include<string.h>
#include"Example_7-20_enterString.c"
#include"Example_7-20_deleteString.c"
#include"Example_7-20_printString.c"
int main(){
	extern void enter_string(char str[]);
	extern void delete_string(char str[], char ch);
	extern void print_string(char str[]);
	char c, str[200000], sentence[10000][20];
	enter_string(str);
	int i=0,NumWord=0,NumLetter=0;
	while (str[i]!='\0') {
		if (str[i]!=' ') {  
			sentence[NumWord][NumLetter]=str[i];
			NumLetter++;}
		else {NumLetter=0; NumWord++;}
		i=i+1;
	}
	NumWord++;
	int j;
	for (j=0;j<NumWord;j++) {
		if (strcmp(sentence[j],"this")==0) 
			strcpy(sentence[j],"that");
	}
	for (j=0;j<NumWord;j++) puts(sentence[j]);
 	printf("Please enter the letter you want to delete: ");
	scanf("%c", &c);
	delete_string(str,c);
	print_string(str);
	return 0;
}


