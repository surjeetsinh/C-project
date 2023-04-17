#include <stdio.h>

int main () {
	char latter;
	
	printf("Enter anyone Latter from M,T,W,t,F,s,S : ");
	scanf("%c", &latter);
	
	switch (latter) {
		    case 'M':
			printf("Monday");
			break;
			case 'T':
			printf("Tuesday");
			break;
			case 'W':
			printf("Wednesday");
			break;
			case 't':
			printf("Thursday");
			break;
			case 'F':
			printf("Friday");
			break;
			case 's':
			printf("Saturday");
			break;
			case 'S':
			printf("Sunday");
			break;
			default:
			printf("Wrong Entry");
			break;
	}
	
	return 0;
}
