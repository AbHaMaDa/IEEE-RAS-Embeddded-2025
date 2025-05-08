#include <stdio.h>
#include "math_utils.h"

int main() {
    MathPair values;

    printf("Enter two integers:\n");
    printf("a = ");
    scanf("%d", &values.a);
    printf("b = ");
    scanf("%d", &values.b);

    // Using struct-based functions
    printf("\n-- Using Struct-based Functions --\n");
    printf("Addition: %d\n", add_pair(values));
    printf("Subtraction: %d\n", subtract_pair(values));
    printf("Multiplication: %d\n", multiply_pair(values));
    printf("Division: %.2f\n", divide_pair(values));
    printf("Exponentiation: %d\n", exponentiate_pair(values));

    return 0;
}
