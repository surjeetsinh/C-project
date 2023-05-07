#include<stdio.h>

int main () {
	int i,j;
	
	for (i=1;i<=5;i++) {         //row
		for (j=i;j>=1;j--) {     //column
			printf("%d",j);		
		}
		printf("\n");
	}
	return 0;
}
