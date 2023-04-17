#include<stdio.h>

int main(){
	int a;
	
	printf("Provide Value: ");
	scanf("%d",&a);
	
	(a%2) ? printf("Value is ODD") : printf("Value is EVEN");
	
	return 0;
}
