// math_utils.h
#ifndef MATH_UTILS_H
#define MATH_UTILS_H

// Structure to hold two integers
typedef struct {
    int a;
    int b;
} MathPair;

// Function declarations (both standard and struct-based)
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);  // Use float for division
int exponentiate(int base, int exponent);

// Struct-based versions
int add_pair(MathPair pair);
int subtract_pair(MathPair pair);
int multiply_pair(MathPair pair);
float divide_pair(MathPair pair);
int exponentiate_pair(MathPair pair);

#endif // MATH_UTILS_H
