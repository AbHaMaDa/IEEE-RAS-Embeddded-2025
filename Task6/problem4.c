#include <stdio.h>
#include <string.h>

// Define a structure for Dog
struct Dog {
    char name[50];          // 50 bytes
    int age;                // 4 bytes (typically)
    char kind[50];          // 50 bytes
    char favoriteFood[50];  // 50 bytes
    char ownerName[50];     // 50 bytes
};

int main() {
    // Create a Dog instance
    struct Dog myDog;
    
    // Print the size of the structure
    printf("Size of the structure: %zu bytes\n", sizeof(myDog));
    printf("Size of name array: %zu bytes\n", sizeof(myDog.name));
    printf("Size of age: %zu bytes\n", sizeof(myDog.age));
    printf("Size of kind array: %zu bytes\n", sizeof(myDog.kind));
    printf("Size of favoriteFood array: %zu bytes\n", sizeof(myDog.favoriteFood));
    printf("Size of ownerName array: %zu bytes\n", sizeof(myDog.ownerName));

    return 0;
}
