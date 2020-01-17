#include <stdio.h>
#define SUM 100000
//Calculate the average of numbers with sume < 100000
int main(){
	float amot, aver, total;
	int i;
	for (i=1,total=0;i<=1000;i++){
		printf("Please enter amount: ");
		scanf("%f",&amot);
		total+=amot;
		if (total>=SUM) break;
	}
	aver=total/i;
	printf("number=%d, average=%10.2f\n", i, aver);
	return 0;
}
