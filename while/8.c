#include <stdio.h>

int main () {
	
	int a = 1, n, sum=0;
	
	printf("N : ");
	scanf("%d",&n);
	
	 while (a<=n) {
	 	
	 	sum = sum + a;
	 	a++;
	 	
	 	printf("%d\n",sum);
	 }
	 	
	return 0;
}
