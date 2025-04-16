#include <stdio.h>

// Function to check divisibility
int isDivisible(int a, int b) {
    if (b == 0) {
        printf("Division by zero is not allowed.\n");
        return 0;
    }

    if (a % b == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num1, num2;
    
    // Taking input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Check and print result
    if (isDivisible(num1, num2)) {
        printf("%d is divisible by %d\n", num1, num2);
    } else {
        printf("%d is not divisible by %d\n", num1, num2);
    }

    return 0;
}
