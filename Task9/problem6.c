#include <stdio.h>
#include <stdlib.h>

// Node structure for Circular Linked List
typedef struct CNode {
    int data;
    struct CNode* next;
} CNode;

// Function to create a new node
CNode* createNode(int value) {
    CNode* newNode = (CNode*)malloc(sizeof(CNode));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at a specific position (1-based index)
void insertAtPosition(CNode** head, int value, int position) {
    CNode* newNode = createNode(value);

    if (*head == NULL) {
        // Empty list, new node points to itself
        newNode->next = newNode;
        *head = newNode;
        return;
    }

    CNode* temp = *head;

    // Insert at beginning
    if (position == 1) {
        // Find the last node
        while (temp->next != *head)
            temp = temp->next;

        newNode->next = *head;
        temp->next = newNode;
        *head = newNode;
        return;
    }

    // Insert at other positions
    for (int i = 1; i < position - 1 && temp->next != *head; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to print circular list
void printCircular(CNode* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    CNode* temp = head;
    printf("🔁 Circular Linked List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("HEAD\n");
}

// Main function
int main() {
    CNode* head = NULL;

    insertAtPosition(&head, 10, 1); // Insert at head
    insertAtPosition(&head, 20, 2); // Insert at end
    insertAtPosition(&head, 15, 2); // Insert in middle
    insertAtPosition(&head, 5, 1);  // Insert at new head

    printCircular(head);

    return 0;
}
