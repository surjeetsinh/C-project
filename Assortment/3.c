#include<stdio.h>

int main(){
	
	int row;
	printf("Enter Number of ROW: ");
	scanf("%d",&row);
	
	int column;
	printf("Enter Number of COLUMN: ");
	scanf("%d",&column);
	
	int a[row][column],b[row][column],i,j,sum[row][column];
	
	//1st matrices
	
	for(i=0;i<row;i++){
		
		for(j=0;j<column;j++){
			
			printf("Enter Elements : ");
			scanf("%d",&a[i][j]);
			
		}
	}
	
	for(i=0;i<row;i++){
		
		for(j=0;j<column;j++){
			
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	//2nd matrices
	
	for(i=0;i<row;i++){
		
		for(j=0;j<column;j++){
			
			printf("Enter Elements : ");
			scanf("%d",&b[i][j]);
			
		}
	}
	
	for(i=0;i<row;i++){
		
		for(j=0;j<column;j++){
			
			printf("%d ",b[i][j]);
			
		}
		printf("\n");
	}
	
	//CALCULATION OF BOTH
	for (i=0;i<row;i++)
    for (j=0;j<column;j++) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  printf("\nSum of two matrices: \n");
  for (i=0; i<row;i++) {
  	for (j=0; j<column; j++) {
      printf("%d ",sum[i][j]);
    }	
    printf("\n");
  }	
	return 0;
}
