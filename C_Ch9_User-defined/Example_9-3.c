#include<stdio.h>
#include<string.h>

//Person is a struct type
//leader is an array with data type Person
struct Person{
	char name[20];
	int count;
};

int main(){
	struct Person leader[3]={"Li",0,"Zhang",0,"Sun",0};
	int i,j;
	char leader_name[20]; //leader_name is a string with <=20 chars
	printf("Please enter 10 leader names:\n");
	for (i=1;i<=10;i++){
		scanf("%s",leader_name);
		//input 10 leader names
		for (j=0;j<3;j++)
			if (strcmp(leader_name, leader[j].name)==0) 
				leader[j].count++;
				//count if the leader name agrees with one of leader[j]
	}
	printf("\nResult:\n");
	for (i=0;i<3;i++) 
		printf("%5s:%d\n",leader[i].name, leader[i].count);
		//output number of multiplicities
	return 0;
} 
