#include<stdio.h>

int main () {
	int i,j;
	
	for (i=5;i>=1;i--) {         //row
		for (j=5;j>=i;j--) {     //column
			printf("%d",j);		
		}
		printf("\n");
	}
	return 0;
}
