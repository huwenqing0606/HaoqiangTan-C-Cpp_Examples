#include<stdio.h>

//read chars from keyboard, output to screen and Example_10-5_1.txt
//write the material in Example_10-5_1.txt to Example_10-5_2.txt

int main(){
	FILE *fp1, *fp2;
	fp1=fopen("Example_10-5_input.txt","r"); 
			//fp1 points to the read file
	fp2=fopen("Example_10-5_output.txt","w");
			//fp2 points to the write file
	while (!feof(fp1)) putchar(getc(fp1));
			//get char from file fp1 
			//output it to the screen
	putchar(10);
			//output an \n
	rewind(fp1);
			//fp1 points to the beginning of file
	while (!feof(fp1)) putc(getc(fp1),fp2);
			//putc is fputc
	fclose(fp1); fclose(fp2);
	return 0;
} 
