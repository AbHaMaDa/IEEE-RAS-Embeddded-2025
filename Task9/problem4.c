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

    printList(head);      // Before deletion
    freeList(&head);      // Free the list
    printList(head);      // After deletion

    return 0;
}
