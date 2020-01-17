#include<stdio.h>
//pointers pointing to an array with m elements
//int main(){
//	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
//	int (*p)[4],i,j; 
//		//a pointer but it is pointing to an array with m elements
//	p=a;
//	printf("Please enter row, column:");
//	scanf("%d,%d",&i,&j);
//	printf("a[%d,%d]=%d\n",i,j,*(*(p+i)+j));
//	return 0;
//}

//pointer p pointing to an array a
int main(){
	int a[4]={1,3,5,7};
	int (*p)[4];
	p=&a; 	//cannot be p=a, since in that case p=&a[0], which is 
			//not a pointer pointing to an array
	printf("%d\n", (*p)[3]);
	return 0;
}
