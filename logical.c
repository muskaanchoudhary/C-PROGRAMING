#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    // Using logical AND
    if (a > 0 && b > 0) {
        printf("Both numbers are positive.\n");
    } else {
        printf("At least one number is not positive.\n");
    }

    // Using logical OR
    if (a < 0 || b < 0) {
        printf("At least one number is negative.\n");
    } else {
        printf("Both numbers are non-negative.\n");
    }

    // Using logical NOT
    if (!(a == 0)) {
        printf("The first number is not zero.\n");
    } else {
        printf("The first number is zero.\n");
    }

    return 0;
}
