#include <stdio.h>

int str_length(char str[]) {
    int count; 
    for (count = 0; str[count] != '\0'; ++count);
    return count; 
}

int main() {

    char str[1000]; 

    printf("Enter the string: ");
    scanf("%s", str); 
    
    int length = str_length(str); 
    
    printf("\nThe length of the string is %d", length); 
 
    return 0;
}
