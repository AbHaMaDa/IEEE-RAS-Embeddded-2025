#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

// Defining the struct using bit-fields and typedef
typedef struct {
    unsigned int roll_number : 4;  // 4-bit roll number
    unsigned int age : 8;          // 8-bit age
    unsigned int marks : 3;        // 3-bit marks
    char name[MAX_NAME_LENGTH];    // Name (string)
    char address[MAX_ADDRESS_LENGTH]; // Address (string)
} student_info;

// Function to print student information
void print_student_info(student_info student) {
    printf("Roll Number: %u\n", student.roll_number);
    printf("Age: %u\n", student.age);
    printf("Marks: %u\n", student.marks);
    printf("Name: %s\n", student.name);
    printf("Address: %s\n", student.address);
    printf("\n");
}

int main() {
    // Creating an array of 5 students
    student_info students[5];

    // Input for each student
    for (int i = 0; i < 5; i++) {
        printf("Enter information for Student %d:\n", i + 1);

        printf("Roll Number (0-15): ");
        unsigned int temp_roll_number;
        printf("Roll Number (0-15): ");
        scanf("%u", &temp_roll_number);
        students[i].roll_number = temp_roll_number;

        printf("Age (0-255): ");
        unsigned int temp_age;
        scanf("%u", &temp_age);
        students[i].age = temp_age;

        printf("Marks (0-7): ");
        unsigned int temp_marks;
        scanf("%u", &temp_marks);
        students[i].marks = temp_marks;

        // Clear buffer for strings
        getchar(); 

        printf("Name: ");
        fgets(students[i].name, MAX_NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';  // Remove newline character

        printf("Address: ");
        fgets(students[i].address, MAX_ADDRESS_LENGTH, stdin);
        students[i].address[strcspn(students[i].address, "\n")] = '\0'; // Remove newline character

        printf("\n");
    }

    // Print the information of each student
    for (int i = 0; i < 5; i++) {
        printf("Student %d Info:\n", i + 1);
        print_student_info(students[i]);
    }

    // Print the size of the struct
    printf("Size of student_info struct: %lu bytes\n", sizeof(student_info));

    return 0;
}
