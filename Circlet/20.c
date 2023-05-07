#include<stdio.h>

// Not complete

int main () {
	int i,j,k;
	
	for (i=4;i>=1;i--) {         //row=4
		for (k=1;k<i;k++) {     //column=7
			printf(" ");		
		}
		for(j=i;j<=i;j++){
			printf("*");			
		}
		for (k=i;k<4;k++) {
			printf("  ");		
		}
		for(j=i;j<=i;j++){
			printf("*");	
		}	
		printf("\n");
	}
	return 0;
}
