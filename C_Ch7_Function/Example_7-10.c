#include<stdio.h>
//use array name as the aprameter of a function
int main(){
	float average(float array[]);
	float score[10], aver;
	int i;
	printf("Please input 10 scores: ");
	for (i=0;i<10;i++)
		scanf("%f", &score[i]);
	printf("\n");
	aver=average(score);
	printf("average score is %5.2f\n", aver);
	return(0);
}

float average(float array[]){
	int i;
	float aver, sum=array[0];
	for (i=1;i<10;i++)
		sum=sum+array[i];
	aver=sum/10;
	return(aver);
}
