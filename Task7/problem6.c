#include <stdio.h>

// Define a union to store an int, a float, and a char
union Data {
    int a;
    float b;
    char c;
};

int main() {
    // Declare a union variable
    union Data data;

    // Assign a value to 'a' (integer)
    data.a = 100;
    printf("After assigning to 'a':\n");
    printf("a = %d, b = %.2f, c = %c\n\n", data.a, data.b, data.c);  // Print all members

    // Assign a value to 'b' (float)
    data.b = 3.14;
    printf("After assigning to 'b':\n");
    printf("a = %d, b = %.2f, c = %c\n\n", data.a, data.b, data.c);  // Print all members

    // Assign a value to 'c' (char)
    data.c = 'X';
    printf("After assigning to 'c':\n");
    printf("a = %d, b = %.2f, c = %c\n\n", data.a, data.b, data.c);  // Print all members

    return 0;
}
