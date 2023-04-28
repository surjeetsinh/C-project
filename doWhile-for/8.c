#include<stdio.h>

int main () {
	
	int a=1,N,sum=0;
	
	printf("Enter N: ");
	scanf("%d",&N);
	
	do {
		sum = sum + a;
		a++;
		printf("%d\n",sum);
	}
	while (a<=N);
	
	return 0;
}
