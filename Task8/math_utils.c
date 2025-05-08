#include "math_utils.h"
#include <math.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (b != 0) ? (float)a / b : 0.0;
}

int exponentiate(int base, int exponent) {
    return (int)pow(base, exponent);
}

// Struct-based versions
int add_pair(MathPair pair) {
    return add(pair.a, pair.b);
}

int subtract_pair(MathPair pair) {
    return subtract(pair.a, pair.b);
}

int multiply_pair(MathPair pair) {
    return multiply(pair.a, pair.b);
}

float divide_pair(MathPair pair) {
    return divide(pair.a, pair.b);
}

int exponentiate_pair(MathPair pair) {
    return exponentiate(pair.a, pair.b);
}
