#include <stdio.h>

int main()
{
    int a[5] = { 1, 2, 3, 4, 5 };
    int *b[5];
    int i = 0;

    printf("\nSquare of array elements: \n");
    for (i = 0; a[i] != '\0'; i++)
	printf("%d ==> %d \n",a[i],a[i]*a[i]);

    printf("\n");

    return 0;
}
