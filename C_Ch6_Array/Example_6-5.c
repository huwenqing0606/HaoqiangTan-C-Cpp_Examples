#include<stdio.h>
//find the largest term in a 2 times 3 matrix
int main(){
	int i,j,row=0,column=0,max;
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
	max=a[0][0];
	for (i=0;i<=2;i++)
		for (j=0;j<=2;j++)
			if (a[i][j]>max){
				max=a[i][j];
				row=i;
				column=j;
			}
	printf("max=%d\nrow=%d\ncolumn=%d\n",max,row,column);
	return 0;
}
