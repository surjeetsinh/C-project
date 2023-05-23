#include<stdio.h>
#include<string.h>

int main(){
	
	char a[100];
	int i;
	
	while(1){
		
		printf("Enter text : ");
		gets(a);
		
		for(i=0;i<strlen(a);i++){
			
			if(a[0]>='a' && a[0]<='z'){
				a[0] -= 32;
			}
			else if(a[i]>='A' && a[i]<='Z'){
				a[i] += 32;
			}
		}
		printf("%s\n\n",a);
	}

	return 0;
}
