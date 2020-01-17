#include<stdio.h>
int main(){
	void swap(int *q1, int *q2);
	void sort(int *p1, int *p2, int *p3);
	int a, b, c;
	int *pointer_1, *pointer_2, *pointer_3;
	printf("Please enter three numbers a, b, c: ");
	scanf("%d, %d, %d", &a, &b, &c);
	pointer_1=&a;
	pointer_2=&b;
	pointer_3=&c;
	sort(pointer_1, pointer_2, pointer_3);
	printf("The numbers in decreasing order is %d, %d, %d", a, b, c);
	return 0;
}

void sort(int *p1, int *p2, int *p3){
	void swap(int *q1, int *q2);
	if (*p2>*p1) swap(p1, p2);
	if (*p3>*p2) swap(p2, p3);
	if (*p2>*p1) swap(p1, p2);
}

void swap(int *q1, int *q2){
	int temp;
	temp=*q1;
	*q1=*q2;
	*q2=temp;
}
