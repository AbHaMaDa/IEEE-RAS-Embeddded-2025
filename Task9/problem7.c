#include <stdio.h>
#include <stdlib.h>

// Node structure
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
    int poppedValue = temp->data;
    *top = temp->next;
    free(temp);
    return poppedValue;
}

// Main function
int main() {
    StackNode* top = NULL;

    // Push values
    push(&top, 10);
    push(&top, 20);
    push(&top, 30);

    // Pop the top value and print it
    int popped = pop(&top);
    printf("Popped value: %d\n", popped);  // Should print 30

    return 0;
}
