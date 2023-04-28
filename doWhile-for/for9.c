#include<stdio.h>

int main() {
	
	int i,N,fact=1;
	
	printf("Enter N : ");
	scanf("%d",&N);
	
	for(i=1;i<=N;i++) {
		if (fact*=i) {
		}
	}
	printf("%d\n",fact);
	
	return 0;
}
