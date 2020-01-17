int max(int x, int y){
	return(x>y?x:y);
}

#include<stdio.h>

//output the index of the largest number in 10 numbers

int main(){
	int i,n,m,a[10];
	printf("Please enter 10 integer numbers: ");
	for (i=0;i<10;i++) scanf("%d",&a[i]);
	printf("\n");
	for (i=1,m=a[0],n=1;i<10;i++){
		if (max(m,a[i])>m){
			m=max(m,a[i]);
			n=i+1;
		}
	}
	printf("the largest number is %d, it is the %dth number.\n",m,n);
	return 0;
}
