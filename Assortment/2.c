#include<stdio.h>

int main(){
	
	int n;
	printf("Enter ROW & COLUMN : ");
	scanf("%d",&n);
	
	int a[n][n],i,j,sum=0;
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
	for(i=0;i<n;i++){
			sum += a[i][n-i-1];
	}
	printf("%d\n",sum);

	return 0;
}
