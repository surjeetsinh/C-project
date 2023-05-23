#include<stdio.h>

int main(){
	
	int a[4]={10,20,30,40};
	int *b[4];
	int c[4];
	
	int i;
	
	for(i=0; a[i]!='\0';i++){
		b[i]=a[i];
		c[i]=(a[i]*=a[i]);
		printf("%d ==> %d \n",b[i],c[i]);
	}
		
	return 0;
}
