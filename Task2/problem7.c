#include <stdio.h>

// Recursive function to find GCD using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;

    // Input
    printf("first number: ");
    scanf("%d", &a);

    printf("second number: ");
    scanf("%d", &b);

    // Output
    printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));

    return 0;
}
