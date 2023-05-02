#include <stdio.h>

int main() {
    int a[4][3] = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4};
    int i,j;
	for (i=0; i<4; i++) {
        for (j=0; j<3; j++) {
            printf("%d  ", a[i][j]);    
        }
        printf("\n");
    }
    printf("Total Row is : %d\n",i);
    printf("Total column is : %d",j);
	return 0;
}
