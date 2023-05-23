#include <stdio.h>
 
int main(){
	int a=10;
	int b=20;
	int *c;
	printf("A's value is %d\n",a);
	printf("A's value is %d",b);
	
	*c = a;
	a=b;
	b=*c;
	
	printf("A's value is %d\n",a);
	printf("A's value is %d",b);
		
	return 0;	
	
}
