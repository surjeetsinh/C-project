#include<stdio.h>
#include<string.h>

int main(){
	
	char s1[100],s2[100];
	
	printf("Enter Text : ");
	gets(s1);
	
	strcpy(s2,s1);
	strrev(s2);
	
	int c;
	
	c = strcmp(s1,s2);
	if(c==0){
		printf("%s is palindrome",s1);
	}
	else{
		printf("%s is not palidrome",s1);
	}
		
	return 0;
}
