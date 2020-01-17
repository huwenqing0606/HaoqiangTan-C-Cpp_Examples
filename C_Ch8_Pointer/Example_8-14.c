#include<stdio.h>
//there are 3 students in a class, each of them takes
//4 courses. Calculate average score and the score for student n
//We use pointers pointing to an array as the parameter of our function

int main(){
	void average(float *p, int n);
	void search(float (*p)[4], int n);
	float score[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
	average(*score,12);
	search(score,2);
	return 0;
}

void average(float *p, int n){
	float *p_end;
	float sum=0, aver;
	p_end=p+n-1;
	for (;p<=p_end;p++){
		sum=sum+(*p);
	}
	aver=sum/n;
	printf("average=%5.2f\n", aver);
}

void search(float (*p)[4], int n){
	int i;
	printf("The score of No. %d are:\n", n+1);
	for (i=0;i<4;i++){
		printf("%5.2f\n",*(*(p+n)+i));
	}
	printf("\n");
}


