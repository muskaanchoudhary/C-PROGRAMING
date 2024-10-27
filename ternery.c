#include <stdio.h>

int main() {
    int a, b, min;

    
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    
    min = (a < b) ? a : b;

    
    printf("The minimum number is: %d\n", min);

    return 0;
}
