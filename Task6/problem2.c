#include <stdio.h>
#include <string.h>

// Define the structure
struct Employee {
    char name[50];
    int id;
    float salary;
    char jobTitle[50];
};

// Function to initialize an Employee
void initializeEmployee(struct Employee *emp, const char *name, int id, float salary, const char *jobTitle) {
    strcpy(emp->name, name);
    emp->id = id;
    emp->salary = salary;
    strcpy(emp->jobTitle, jobTitle);
}

// Function to print Employee info
void printEmployee(struct Employee emp) {
    printf("Employee Information:\n");
    printf("Name      : %s\n", emp.name);
    printf("ID        : %d\n", emp.id);
    printf("Salary    : %.2f\n", emp.salary);
    printf("Job Title : %s\n", emp.jobTitle);
}

int main() {
    struct Employee emp;

    // Initialize the employee
    initializeEmployee(&emp, "Alice Johnson", 101, 5500.75, "Software Engineer");

    // Print the employee info
    printEmployee(emp);

    return 0;
}
