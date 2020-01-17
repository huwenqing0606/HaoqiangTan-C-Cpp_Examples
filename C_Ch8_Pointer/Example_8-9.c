#include<stdio.h>
//invert a sequence of numbers
int main(){
	void inv(int *x, int n);
	int i, a[10], *p=a;
	printf("Please input the original array of 10 numbers:\n");
	for (i=0;i<10;i++,p++)
		scanf("%d", p);
	printf("\n");
	p=a;
	inv(p,10);
	printf("The above array has been inverted:\n");
	for (p=a;p<a+10;p++)
		printf("%d ", *p);
	printf("\n");
	return 0; 
}

//void inv(int x[], int n){
//	int temp, i, j, m=(n-1)/2;
//	for (i=0;i<=m;i++){
//		j=n-1-i;
//		temp=x[i]; x[i]=x[j]; x[j]=temp;
//	}
//}

void inv(int *x, int n){
	int *p, temp, *i, *j, m=(n-1)/2;
	i=x; j=x+n-1; p=x+m;
	for (;i<=p;i++,j--){
		temp=*i; *i=*j; *j=temp;
	}
}
