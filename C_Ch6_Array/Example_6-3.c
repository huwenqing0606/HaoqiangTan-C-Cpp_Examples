#include<stdio.h>
//bubble sorting

int main(){
	int a[10];
	int i,j,t;
	for (i=0;i<10;i++){
		printf("Please input number a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	printf("\n");
	for (j=0;j<9;j++)
		for (i=0;i<9-j;i++)
			if (a[i]>a[i+1]){
				t=a[i]; a[i]=a[i+1]; a[i+1]=t;
			}
	printf("The sorted numbers are: ");
	for (i=0;i<10;i++) printf("%d ",a[i]);
	printf("\n");
	return 0;
}
