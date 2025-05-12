#include <stdio.h>
#include <stdlib.h>

// Node structure for Doubly Linked List
typedef struct DNode {
    int data;
    struct DNode* prev;
    struct DNode* next;
} DNode;

// Function to insert at the beginning
void insertAtBeginning(DNode** head, int value) {
    DNode* newNode = (DNode*)malloc(sizeof(DNode));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head != NULL)
        (*head)->prev = newNode;

    *head = newNode;
    printf("Inserted %d at the beginning.\n", value);
}

// Function to print the list forward
void printForward(DNode* head) {
    printf("🚂 Doubly Linked List (Forward): ");
    while (head != NULL) {
        printf("🔗 %d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Main function
int main() {
    DNode* head = NULL;

    // Insert nodes at the beginning
    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);

    // Print list forward
    printForward(head);

    return 0;
}
