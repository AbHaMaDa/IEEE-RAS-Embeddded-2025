#include <stdio.h>

// Using typedef to create new names for primitive data types
typedef int Int32;            // Rename int to Int32
typedef char Char8;           // Rename char to Char8
typedef float Float32;        // Rename float to Float32
typedef double Double64;      // Rename double to Double64
typedef long Long64;          // Rename long to Long64

int main() {
    // Print the size of each renamed data type
    printf("Size of Int32 (int): %lu bytes\n", sizeof(Int32));
    printf("Size of Char8 (char): %lu byte\n", sizeof(Char8));
    printf("Size of Float32 (float): %lu bytes\n", sizeof(Float32));
    printf("Size of Double64 (double): %lu bytes\n", sizeof(Double64));
    printf("Size of Long64 (long): %lu bytes\n", sizeof(Long64));

    return 0;
}
