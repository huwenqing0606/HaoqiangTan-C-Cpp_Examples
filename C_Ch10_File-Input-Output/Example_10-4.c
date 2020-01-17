#include<stdio.h>
#define SIZE 2
//input #=SIZE students' data from keyboard and write them into a file

struct Student_type{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];  
//stud[SIZE] is an array with each element of the structure Student_type

void save(){
	FILE *fp;
	int i;
	if ((fp=fopen("Example_10-4.txt","wb"))==NULL){	
		printf("cannot open the file\n");
		return;
	}
	for (i=0;i<SIZE;i++){
		if (fwrite(&stud[i],sizeof(struct Student_type),1,fp)!=1)
			printf("file with error\n");
		//fwrite(buffer,size,count,fp)
		//fread(buffer,size,count,fp)
		//buffer: an address that stores the read/write document
		//size: number of bites to be read/write
		//count: number of data items to read/write
		//fp: pointer of FILE type
		}
	fclose(fp);
}

int main(){
	int i;
	printf("Please enter data of students:\n");
	for (i=0;i<SIZE;i++){ 
		printf("Student %d\n", i+1); 
		scanf("%s %d %d %s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);} 
	save();
	return 0;	
}

