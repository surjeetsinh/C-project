#include<stdio.h>

int main() {
	
	int a=1,N;
	
	printf("Enter value of N: ");
	scanf("%d",&N);
	
	do {
		printf("%d\n",N);
		N--;
	}
	while(N>=a);
	return 0;
}
