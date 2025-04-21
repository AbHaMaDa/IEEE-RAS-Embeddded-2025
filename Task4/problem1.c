#include <stdio.h>

int main() {
    // Declare and initialize variables
    int a = 10;
    char b = 'Z';
    float c = 3.14;
    long d = 100000L;

    // Declare pointers for each type
    int *ptr_a = &a;
    char *ptr_b = &b;
    float *ptr_c = &c;
    long *ptr_d = &d;

    // Print values and addresses using pointers
    printf("---- Using Pointers in C ----\n");

    // Integer
    printf("\n[INT]\n");
    printf("Value of a: %d\n", *ptr_a);
    printf("Address of a: %p\n", ptr_a);

    // Character
    printf("\n[CHAR]\n");
    printf("Value of b: %c\n", *ptr_b);
    printf("Address of b: %p\n", ptr_b);

    // Float
    printf("\n[FLOAT]\n");
    printf("Value of c: %.2f\n", *ptr_c);
    printf("Address of c: %p\n", ptr_c);

    // Long
    printf("\n[LONG]\n");
    printf("Value of d: %ld\n", *ptr_d);
    printf("Address of d: %p\n", ptr_d);

    return 0;
}
