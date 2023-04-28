#include<stdio.h>

int main () {
	
	int i=1,N,fact=1;
	
	printf("Enter N : ");
	scanf("%d",&N);
	
	do {
		fact*=i;
		i++;
	}
	while(i<=N);
	printf("%d\n",fact);
	return 0;
}
