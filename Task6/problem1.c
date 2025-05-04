#include <stdio.h>

// Define the structure
struct Dog {
    char name[50];
    int age;
    char kind[50];
    char food[50];
    char ownerName[50];
};

int main() {
    struct Dog myDog;

    // Input dog information
    printf("Enter Dog's Name: ");
    fgets(myDog.name, sizeof(myDog.name), stdin);

    printf("Enter Dog's Age: ");
    scanf("%d", &myDog.age);
    getchar(); // consume newline after age

    printf("Enter Dog's Kind (Breed): ");
    fgets(myDog.kind, sizeof(myDog.kind), stdin);

    printf("Enter Dog's Favorite Food: ");
    fgets(myDog.food, sizeof(myDog.food), stdin);

    printf("Enter Owner's Name: ");
    fgets(myDog.ownerName, sizeof(myDog.ownerName), stdin);

    // Output the dog information
    printf("\n--- Dog Information ---\n");
    printf("Name       : %s", myDog.name);
    printf("Age        : %d\n", myDog.age);
    printf("Kind       : %s", myDog.kind);
    printf("Food       : %s", myDog.food);
    printf("Owner Name : %s", myDog.ownerName);

    return 0;
}
