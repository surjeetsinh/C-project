#include<stdio.h>

int main(){
	
	FILE *p;
	char ch[50];
	
	p = fopen("second.txt","r");
	
	if(p==NULL) {
		printf("Error");
	}
	else{
		
		fgets(ch,10 ,p);
		
		puts(ch);
		
		fclose(p);
	}
	
	return 0;
}
