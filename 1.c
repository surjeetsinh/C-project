#include<stdio.h>

int main(){
	
	char a;
	
	printf("Enter Data: ");
	scanf("%c",&a);
	
	if((a>='a' && a<='z') || (a>='A' && a<='Z')) {
		printf("Value is Character");
	}
	else if (a>='0' && a<='9') {
		printf("Value is Digit");
	}
	else {
		printf("Value is Special Character");
	}
	
	return 0;
}
