#include<stdio.h>
#include<math.h>
//demonstrate all prime numbers from 100~200
int main(){
	int n,i,k;
	for (n=100;n<=200;n++){
		k=sqrt(n);
		for (i=2;i<=k;i++) if (n%i==0) break;
		if (i<=k) {
		}else printf("%d ", n);
		}
	return 0;
}
