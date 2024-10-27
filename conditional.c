#include <stdio.h>

int main() {
    int a;

    
    printf("Enter an integer: ");
    scanf("%d", &a);

    
    const char* result = (a % 2 == 0) ? "Even" : "Odd";

   
    printf("The number is: %s\n", result);

    return 0;
}
