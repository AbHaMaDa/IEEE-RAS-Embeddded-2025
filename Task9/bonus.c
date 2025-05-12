#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Add a node at the end
void insertAtEnd(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Print the linked list and its length
void printList(Node* head) {
    int count = 0;
    printf("🚂 Train (Linked List): ");
    while (head != NULL) {
        printf("🚃 %d ", head->data);
        head = head->next;
        count++;
    }
    printf("\nTotal nodes: %d\n", count);
}

// Reverse the linked list
void reverseList(Node** head) {
    Node *prev = NULL, *current = *head, *next = NULL;

    while (current != NULL) {
        next = current->next;   // Store next
        current->next = prev;   // Reverse current node's pointer
        prev = current;         // Move pointers forward
        current = next;
    }

    *head = prev; // New head
    printf("🔁 Train has been reversed!\n");
}

// Function to free the entire list
void freeList(Node** head) {
    Node* current = *head;
    Node* temp;

    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }

    *head = NULL;
    printf("🧹 Train has been erased from memory.\n");
}

// Main function
int main() {
    Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    printList(head);       // Before reversing

    reverseList(&head);    // Reverse the list

    printList(head);       // After reversing

    freeList(&head);       // Clean up

    return 0;
}
