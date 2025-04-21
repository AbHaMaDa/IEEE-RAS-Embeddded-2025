#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    // Read input
    printf("Enter first number (num1): ");
    scanf("%d", &num1);
    printf("Enter second number (num2): ");
    scanf("%d", &num2);

    // Point to variables
    ptr1 = &num1;
    ptr2 = &num2;

    // Perform operations using pointers
    int sum = *ptr1 + *ptr2;
    int diff = *ptr1 - *ptr2;
    int prod = (*ptr1) * (*ptr2);
    int quot = (*ptr2 != 0) ? (*ptr1 / *ptr2) : 0;

    // Output results
    printf("\nSum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);
    printf("Quotient = %d\n", quot);

    return 0;
}
