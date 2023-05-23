#include <stdio.h>
 
int main()
{
   int a, b, *c, *d, temp; // Four Integer
 
   printf("Enter the value of a and b\n"); //Give value to A & B
   scanf("%d%d", &a, &b);
 
   printf("Before Swapping\na = %d\nb = %d\n", a, b); //Print Value of A & B
 
   c = &a; //in C given address of a's value
   d = &b; //in D given address of b's value
 
   temp = *d; //Temp's assigned address of D hence temp = d = b
   *d = *c; // Address of d equal to address of c hence d=c=a
   *c = temp;
 
   printf("After Swapping\na = %d\nb = %d\n", a, b);
 
   return 0;
}
