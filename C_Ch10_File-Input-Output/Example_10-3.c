#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//read strings from keyboard 
//write them into txt file
//sort in alphabetical order and output the string

int main(){
	FILE *fp;  	//fp is a pointer pointing to some txt file
	char str[3][10], temp[10];
	int i,j,k,n=3;
	printf("Enter strings:\n");
	for (i=0;i<n;i++)
		gets(str[i]); 
				//get the strings using gets
	for (i=0;i<n-1;i++){
		k=i;
		for (j=i+1;j<n;j++)
			if (strcmp(str[k],str[j])>0) k=j;
		if (k!=i){
			strcpy(temp, str[i]);
			strcpy(str[i], str[k]);
			strcpy(str[k], temp);}
		}
	//sort the 3 strings using standard comparison algorithm
	if ((fp=fopen("D:\\My Tex Original File\\General Notes and Solutions\\HaoqiangTAN_C-Cpp\\C_Ch10_File Input-Output\\Example_10-3.txt","w"))==NULL){
			printf("cannot open the file!\n");
			exit(0);
		} //open the file
	printf("\nThe new sequence:\n");
	for (i=0;i<n;i++){
			fputs(str[i],fp); 
			//fputs output string to file pointed by fp
			fputs("\n",fp);
			//output \n to file pointed by fp
			printf("%s\n",str[i]);
			//output the string to screen
		}
	return 0;
} 
