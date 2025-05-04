#include <stdio.h>

// Define an enum to represent the arithmetic operations
enum Operation {
    ADD = '+',  // Addition
    SUBTRACT = '-',  // Subtraction
    MULTIPLY = '*',  // Multiplication
    DIVIDE = '/',  // Division
    AND = '&',  // Bitwise AND
    OR = '|',  // Bitwise OR
    NOT = '!'   // Logical NOT
};

// Function to perform the calculation based on the operation
double calculate(double operand1, double operand2, enum Operation operation) {
    switch (operation) {
        case ADD:
            return operand1 + operand2;
        case SUBTRACT:
            return operand1 - operand2;
        case MULTIPLY:
            return operand1 * operand2;
        case DIVIDE:
            if (operand2 != 0) {
                return operand1 / operand2;
            } else {
                printf("Error! Division by zero.\n");
                return 0;
            }
        case AND:
            return (int)operand1 & (int)operand2; // Bitwise AND
        case OR:
            return (int)operand1 | (int)operand2; // Bitwise OR
        case NOT:
            return !((int)operand1); // Logical NOT
        default:
            printf("Invalid operation.\n");
            return 0;
    }
}

int main() {
    double operand1, operand2;
    char operationChar;
    enum Operation operation;

    // Take user input
    printf("Enter operand1: ");
    scanf("%lf", &operand1);
    printf("Enter operand2: ");
    scanf("%lf", &operand2);
    printf("Enter operation (+, -, *, /, &, |, !): ");
    scanf(" %c", &operationChar);  // Note the space before %c to consume any extra newline character.

    // Match operationChar to the corresponding enum value
    operation = (enum Operation)operationChar;

    // Perform the calculation
    double result = calculate(operand1, operand2, operation);

    // Print the result
    printf("Result: %.2f\n", result);

    // Output the size of the enum
    printf("Size of enum Operation: %lu bytes\n", sizeof(enum Operation));

    return 0;
}
