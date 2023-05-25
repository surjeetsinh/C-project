#include<stdio.h>
//not complete
int main(){
	
	FILE *a;
	char ch[50];
	
	a = fopen("CopyFile.txt","w");
	
	if(a==NULL) {
		printf("Error");
	}
	else{
		gets(\\second);
		
		fputs("\n",a);
		fputs(ch,a);
		
		fclose(a);
	}
	
	return 0;
}
