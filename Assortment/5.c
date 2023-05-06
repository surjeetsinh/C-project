#include<stdio.h>

int main(){
	int a[3][3]={1,2,3,1,2,3,1,2,3};
	int i,j,sum;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		sum=0;
		for(j=0;j<3;j++){
			sum += a[j][i];
		}
		printf("\n");
		printf("Column %d Sum = %d\n",i,sum); //i's value taken to print 0 to 2 for column number
	}
	return 0;
}
