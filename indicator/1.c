#include<stdio.h>
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main(){
	int num1,num2;
	printf("Enter First Number : ");
	scanf("%d",&num1);
	
	printf("Enter Second Number : ");
	scanf("%d",&num2);
	
	printf("\n\nBefore Swaping First Value is : %d and Second value is : %d\n",num1,num2);
	
	swap(&num1,&num2);
	printf("After Swaping First Value is : %d and Second value is : %d",num1,num2);
	return 0;
}
