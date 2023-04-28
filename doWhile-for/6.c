#include<stdio.h>

int main () {
	
	int a=1,N;
	
	printf("Enter value of N: ");
	scanf("%d",&N);
	
	do{
		if (N%2==0) {
		printf("%d\n",N);
		}
		N--;	
	}
	while (a<=N);
	return 0;
}
