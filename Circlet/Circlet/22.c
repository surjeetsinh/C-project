#include<stdio.h>

int main () {
	char i,j;
	char a='A';
	
	for (i='A';i<='E';i++) {         //row
		for (j='A';j<=i;j++) {     //column
			printf("%c ",i);
				
		}
		printf("\n");
	}
	return 0;
}
