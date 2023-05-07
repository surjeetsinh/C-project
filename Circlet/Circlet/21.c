#include<stdio.h>

int main () {
	int i,j,sum=0;
	
	for (i=1;i<=5;i++) {         //row
		for (j=1;j<=i;j++) {     //column
			sum =+ sum+1;
			printf("%d ",sum);
				
		}
		printf("\n");
	}
	return 0;
}
