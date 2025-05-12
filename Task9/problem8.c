#include <stdio.h>
#include <stdlib.h>

// Stack Node
typedef struct StackNode {
    int data;
    struct StackNode* next;
} StackNode;

// Function to create a new node
StackNode* createNode(int value) {
    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Push function
void push(StackNode** top, int value) {
    StackNode* newNode = createNode(value);
    newNode->next = *top;
    *top = newNode;
}

// Pop function
int pop(StackNode** top) {
    if (*top == NULL) {
        printf("Stack Underflow\n");
        return -1;
    }
    StackNode* temp = *top;
    int value = temp->data;
    *top = temp->next;
    free(temp);
    return value;
}

// Function to print top 2 elements
void printTopTwo(StackNode* top) {
    if (top && top->next) {
        printf("Top 1: %d\n", top->data);
        printf("Top 2: %d\n", top->next->data);
    } else {
        printf("Not enough elements to show top two.\n");
    }
}

// Function to swap top two elements
void swapTopTwo(StackNode** top) {
    if (*top == NULL || (*top)->next == NULL) {
        printf("Not enough elements to swap.\n");
        return;
    }

    StackNode* first = *top;
    StackNode* second = first->next;

    first->next = second->next;
    second->next = first;
    *top = second;
}

// Main function
int main() {
    StackNode* top = NULL;

    // Push values
    push(&top, 10);
    push(&top, 20);
    push(&top, 30);  // Top of the stack

    printf("Before swap:\n");
    printTopTwo(top);

    swapTopTwo(&top);

    printf("\nAfter swap:\n");
    printTopTwo(top);

    return 0;
}
