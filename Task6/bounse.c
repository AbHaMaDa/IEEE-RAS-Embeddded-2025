#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for Dog
struct Dog {
    char name[50];
    int age;
    char breed[50];
};

// Define a structure for Cat
struct Cat {
    char name[50];
    int age;
    char breed[50];
};

// Define a structure for Employee
struct Employee {
    char name[50];
    int id;
    char position[50];
};

// Function to create a Dog dynamically and return the pointer
struct Dog* createDog(char *name, int age, char *breed) {
    struct Dog *newDog = (struct Dog*)malloc(sizeof(struct Dog));
    if (newDog != NULL) {
        strcpy(newDog->name, name);
        newDog->age = age;
        strcpy(newDog->breed, breed);
    }
    return newDog;
}

// Function to create a Cat dynamically and return the pointer
struct Cat* createCat(char *name, int age, char *breed) {
    struct Cat *newCat = (struct Cat*)malloc(sizeof(struct Cat));
    if (newCat != NULL) {
        strcpy(newCat->name, name);
        newCat->age = age;
        strcpy(newCat->breed, breed);
    }
    return newCat;
}

// Function to create an Employee dynamically and return the pointer
struct Employee* createEmployee(char *name, int id, char *position) {
    struct Employee *newEmployee = (struct Employee*)malloc(sizeof(struct Employee));
    if (newEmployee != NULL) {
        strcpy(newEmployee->name, name);
        newEmployee->id = id;
        strcpy(newEmployee->position, position);
    }
    return newEmployee;
}

// Function to delete or free a Dog structure
void deleteDog(struct Dog *dog) {
    if (dog != NULL) {
        free(dog);
        printf("Dog memory freed successfully.\n");
    } else {
        printf("Dog pointer is NULL.\n");
    }
}

// Function to delete or free a Cat structure
void deleteCat(struct Cat *cat) {
    if (cat != NULL) {
        free(cat);
        printf("Cat memory freed successfully.\n");
    } else {
        printf("Cat pointer is NULL.\n");
    }
}

// Function to delete or free an Employee structure
void deleteEmployee(struct Employee *employee) {
    if (employee != NULL) {
        free(employee);
        printf("Employee memory freed successfully.\n");
    } else {
        printf("Employee pointer is NULL.\n");
    }
}

int main() {
    // Create a Dog, Cat, and Employee dynamically
    struct Dog *dog1 = createDog("Rex", 5, "German Shepherd");
    struct Cat *cat1 = createCat("Whiskers", 3, "Persian");
    struct Employee *employee1 = createEmployee("John Doe", 12345, "Software Engineer");

    // Display information before freeing memory
    if (dog1 != NULL) {
        printf("Dog Name: %s, Age: %d, Breed: %s\n", dog1->name, dog1->age, dog1->breed);
    }
    if (cat1 != NULL) {
        printf("Cat Name: %s, Age: %d, Breed: %s\n", cat1->name, cat1->age, cat1->breed);
    }
    if (employee1 != NULL) {
        printf("Employee Name: %s, ID: %d, Position: %s\n", employee1->name, employee1->id, employee1->position);
    }

    // Free memory after use
    deleteDog(dog1);
    deleteCat(cat1);
    deleteEmployee(employee1);

    return 0;
}
