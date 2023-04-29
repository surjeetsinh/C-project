#include<stdio.h>

int main() {
	
	int a=1,N;
	
	printf("N: ");
	scanf("%d",&N);
	
		do {
		printf("%d x %d = %d \n",N,a,N*a);
		a++;
	}
	while(a<=10);
		
	return 0;
}
