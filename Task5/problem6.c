#include <stdio.h>

// Arithmetic functions
float add(float a, float b)       { return a + b; }
float subtract(float a, float b)  { return a - b; }
float multiply(float a, float b)  { return a * b; }
float divide(float a, float b)    { return b != 0 ? a / b : 0; } // Handles divide by zero

int main() {
    float num1, num2, result;
    char operator;
    float (*operation)(float, float); // Function pointer declaration

    // Input from user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // space before %c to consume any newline

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Choose function based on operator
    switch (operator) {
        case '+':
            operation = add;
            break;
        case '-':
            operation = subtract;
            break;
        case '*':
            operation = multiply;
            break;
        case '/':
            operation = divide;
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    // Perform the operation using function pointer
    result = (*operation)(num1, num2);

    if (operator == '/' && num2 == 0)
        printf("Error: Division by zero is undefined.\n");
    else
        printf("Result: %.2f %c %.2f = %.2f\n", num1, operator, num2, result);

    return 0;
}
