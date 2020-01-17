#include<stdio.h>
#include<string.h>
//use of pointers that points to a structure

int main(){
	struct Student{
		long num;
		char name[20];
		char sex;
		float score;
	};	//Student is a structure
	struct Student stu_1;
	struct Student *p; //p is a pointer pointing to Student
	p=&stu_1; //p has the address of stu_1
	stu_1.num=10101;
	strcpy(stu_1.name, "Li Lin");
	stu_1.sex='M';
	stu_1.score=89.5;
	printf("No:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
			stu_1.num, stu_1.name, stu_1.sex, stu_1.score);
	printf("\nNo:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
			(*p).num, (*p).name, (*p).sex, (*p).score);
	printf("\nNo:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
			p->num, p->name, p->sex, p->score);
	return 0;
}
