#include<stdio.h>

int main() {
	
	int i,N;
	
	printf("Enter N: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++) {
		if(i%2==1) {
			printf("%d\n",i);
		}
	}
	return 0;
}
