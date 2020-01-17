#include<stdio.h>

//user-defined structure Student that stores student information

int main(){
	struct Student{
		int num;
		char name[20];
		float score;
	}student1, student2;
	printf("Enter student 1 No., name, score\n");
	scanf("%d%s%f",&student1.num,student1.name,&student1.score);
	//student1.name is a string, so it is a pointer
	printf("Enter student 2 No., name, score\n");
	scanf("%d%s%f",&student2.num,student2.name,&student2.score);
	printf("The higher score is:\n");
	if (student1.score>student2.score)
		printf("%d %s %6.2f\n",student1.num,student1.name,student1.score);
	else if (student1.score<student2.score)
		printf("%d %s %6.2f\n",student2.num,student2.name,student2.score);
	else {
		printf("%d %s %6.2f\n",student1.num,student1.name,student1.score);
		printf("%d %s %6.2f\n",student2.num,student2.name,student2.score);
		}		
	return 0;
}
