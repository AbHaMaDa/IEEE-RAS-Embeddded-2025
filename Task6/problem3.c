#include <stdio.h>
#include <string.h>

// Define a Dog structure
struct Dog {
    char name[50];
    int age;
    char kind[50];
    char favoriteFood[50];
    char ownerName[50];
};

// Function to create a Dog
struct Dog createDog(const char *name, int age, const char *kind, const char *food, const char *owner) {
    struct Dog d;
    strcpy(d.name, name);
    d.age = age;
    strcpy(d.kind, kind);
    strcpy(d.favoriteFood, food);
    strcpy(d.ownerName, owner);
    return d;
}

// Function to print Dog info
void printDog(struct Dog d) {
    printf("Dog Information:\n");
    printf("Name         : %s\n", d.name);
    printf("Age          : %d\n", d.age);
    printf("Kind         : %s\n", d.kind);
    printf("Favorite Food: %s\n", d.favoriteFood);
    printf("Owner        : %s\n", d.ownerName);
}

int main() {
    struct Dog myDog = createDog("Buddy", 4, "Golden Retriever", "Chicken", "Emma Wilson");
    printDog(myDog);
    return 0;
}
