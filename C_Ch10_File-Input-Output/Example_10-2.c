#include<stdio.h>
#include<stdlib.h>

//input into one file, and copy it to another file

int main(){
	FILE *in, *out; //*in and *out are two pointers pointing to files
	char ch, infile[20], outfile[20];
	printf("Please enter the file name for input file: ");
	scanf("%s", infile); //infile name is a string 
	printf("Please enter the file name for output file: ");
	scanf("%s", outfile); //outfile name is a string
	if ((in=fopen(infile,"r"))==NULL) {
		printf("Cannot open this file\n");
		exit(0);
	}
	if ((out=fopen(outfile, "w"))==NULL) {
		printf("Cannot open this file\n");
		exit(0);
	}
	while (!feof(in)){ //feof is the symbol for end of file
		ch=fgetc(in); //ch gets a character in 
		fputc(ch, out); //put the characher ch to file pointed by out
		putchar(ch); //put the characher ch to screen
	}
	putchar(10); //put \n on the screen
	fclose(in);  //close file pointed by in
	fclose(out); //close file pointed by out
	return 0;
} 
