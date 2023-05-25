#include<stdio.h>

int main(){
	
	FILE *p;
	char ch[50];
	
	p = fopen("New.txt","w");
	
	if(p==NULL) {
		printf("Error");
	}
	else{
		printf("Enter Text : ");
		gets(ch);
		
		fputs("\n",p);
		fputs(ch,p);
		
		fclose(p);
	}
	
	return 0;
}
