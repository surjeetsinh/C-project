#include<stdio.h>

int main () {
	
	int i,N;
	
	printf("Enter N: ");
	scanf("%d",&N);
	
	for(i=1;i<=N;N--) {
		if(N%2==0) {
			printf("%d\n",N);
		}
	}
	return 0;
}
