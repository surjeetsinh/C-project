#include<stdio.h>

int main(){
	
	int n;
	printf("Enter N: ");
	scanf("%d",&n);
	
	int a[n][n],i,j;
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<n ; j++){
			printf("Enter Elements : ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
