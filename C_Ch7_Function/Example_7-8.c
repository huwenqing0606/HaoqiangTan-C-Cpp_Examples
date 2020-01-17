#include<stdio.h>
//hanoi problem

void hanoi(int n, char one, char two, char three){
	if (n==1) printf("%c->%c ", one, three);
		else {
			hanoi(n-1,one, three, two);
			printf("%c->%c ", one, three);
			hanoi(n-1,two, one, three);
		}
}

int main(){
	int m;
	printf("please input the number of disks: ");
	scanf("%d", &m);
	hanoi(m,'A','B','C');
	return 0;
}
