#include <stdio.h>

int main () {
	
	int i=1;
	int N,fact=1;
	
	printf("N: ");
	scanf("%d",&N);
	
	while (i<=N) {
		fact*=i;
		i++;
	}
	printf("%d\n",fact);
	return 0;
}
