#include <stdio.h>

int main () {
	
	int a = 1;
	int n;
	
	printf("N : ");
	scanf("%d",&n);
	
	 while (a<=n) {
	 	
	 	if (n%2==0) {
		 printf("%d\n",n);
		 }
	 	n--;
	 }
	
	return 0;
}
