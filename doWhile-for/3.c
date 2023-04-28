#include<stdio.h>

int main() {
	
	int a=1,N;
	
	printf("Enter value of N: ");
	scanf("%d",&N);
	
	do {
		printf("%d\n",a);
		a++;
	}
	while (a<=N);
	
	return 0;
}
