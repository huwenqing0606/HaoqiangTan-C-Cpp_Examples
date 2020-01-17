#include <stdio.h>

//output the sign of an integer x

int main(){
	int x, y, z, w, w1;
	printf("Please input an integer x: ");
	scanf("%d", &x);
	if (x<0)
		y=-1;
	else
		if (x==0) y=0;
		else y=1;
	printf("The sign of %d is given by %d\n", x, y);
	if (x>=0)
		if (x>0) 
				z=1;
		else	z=0;
	else z=-1;
	printf("The sign of %d is given by %d\n", x, z);
	w=(x>0)?1:w1=(x==0)?0:-1;
	printf("The sign of %d is given by %d\n", x, w);
	return 0;	
}
