#include<stdio.h>

int main() {

    char s[100], *p;
    int count;

    printf("Enter any string: ");
    gets(s);

    p = s;

    count = 0;

    while ( *p != '\0') {
        count++;
        p++;
    }

    printf("The length of the string is: %d", count);

    return 0;

}
