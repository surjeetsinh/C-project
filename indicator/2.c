#include<stdio.h>
main()
{
int a[100];
int n,i;
int *p=a;

printf("Enter size of Array : ");
scanf("%d",&n);

printf("Enter elements in array : \n");
for(i=0; i<n;i++){
	scanf("%d",p);
	p++;
}
p=a;

printf("Array Elements: ");
for(i=0;i<n;i++){
	printf("%d, ",*p);
	p++;
}
return 0;
}
