#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a == b) {
        printf("Both numbers are equal.\n");
    }
    if (a != b) {
        printf("The numbers are not equal.\n");
    }
    if (a > b) {
        printf("%d is greater than %d.\n", a, b);
    }
    if (a < b) {
        printf("%d is less than %d.\n", a, b);
    }
    if (a >= b) {
        printf("%d is greater than or equal to %d.\n", a, b);
    }
    if (a <= b) {
        printf("%d is less than or equal to %d.\n", a, b);
    }

    return 0;
}

