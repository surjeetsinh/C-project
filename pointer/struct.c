#include<stdio.h>

enum week{
	mon=1,tue=5,wed=10,thu=15,fri=20,sat=25,sun=30
};

int main(){
	enum week obj;
	obj=mon;
	 //printf("%d",obj);
	 int i;
	 for(i=mon; i<=sun;i++){
	 	printf("%d\n",i);
	 }
	return 0;
	}
