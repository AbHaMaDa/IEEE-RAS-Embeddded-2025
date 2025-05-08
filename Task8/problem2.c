#include <stdio.h>

// Choose only one:
//#define ADD_OPERATION
#define SUB_OPERATION

// Macros that act like functions
#define ADD(x, y) ((x) + (y))
#define SUB(x, y) ((x) - (y))

int main() {
    int a, b, result;

    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    #ifdef ADD_OPERATION
        result = ADD(a, b);
        printf("Result of addition: %d\n", result);
    #elif defined(SUB_OPERATION)
        result = SUB(a, b);
        printf("Result of subtraction: %d\n", result);
    #else
        printf("No operation defined.\n");
    #endif

    return 0;
}
