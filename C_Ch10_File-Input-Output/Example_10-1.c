#include<stdio.h>
#include<stdlib.h>

//open an existing txt file and enter a sentence into the file
//use of file pointer

int main(){
	FILE *fp;
	char ch, filename[20];
	printf("Please enter the name of the file you use: ");
	scanf("%s", filename);
	if ((fp=fopen(filename,"w"))==NULL){
		printf("Cannot open this file\n");
		exit(0);
	}
	ch=getchar();
	printf("Please enter a string that is to be saved to the disk (end with #): ");
	ch=getchar();
	while (ch!='#') {
		fputc(ch,fp); // write ch into the file pointed by fp
		putchar(ch);  // output ch
		ch=getchar();
	}
	fclose(fp);  // close the file pointed by fp
	putchar(10); // output \n on the screen
	return 0;
}
