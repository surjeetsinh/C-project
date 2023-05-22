#include<stdio.h>

int main(){
	
	int a[100],i,n,sum=0;
	
	printf("Enter size of Array : ");
	scanf("%d",&n);
	
	printf("Enter elements of array : \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	printf("\nSum of array is : %d",sum);
	return 0;
}
