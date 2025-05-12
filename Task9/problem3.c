#include <stdio.h>
#include <stdlib.h>

// Define node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to print the list and its length
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

// Insert at the end
void insertAtEnd(Node** head, int value) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->next != NULL)
        current = current->next;
    current->next = newNode;
}

// Insert at the beginning
void insertAtBeginning(Node** head, int value) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

// Get value at a specific position (0-based index)
int getValueAtPosition(Node* head, int position) {
    int index = 0;
    Node* current = head;

    while (current != NULL) {
        if (index == position)
            return current->data;
        current = current->next;
        index++;
    }

    printf("❌ Position %d out of range.\n", position);
    return -1; // Could use INT_MIN or a flag
}

// Insert a node at a specific position (0-based index)
void insertAtPosition(Node** head, int position, int value) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    Node* current = *head;
    int index = 0;

    while (current != NULL && index < position - 1) {
        current = current->next;
        index++;
    }

    if (current == NULL) {
        printf("❌ Cannot insert at position %d: out of range.\n", position);
        free(newNode);
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

int main() {
    Node* head = NULL;

    // Add some nodes
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtBeginning(&head, 5);
    insertAtEnd(&head, 30);

    printList(head);

    // Get value at position 2
    int pos = 2;
    int value = getValueAtPosition(head, pos);
    if (value != -1)
        printf("✅ Value at position %d is %d\n", pos, value);

    // Insert value at position 2
    insertAtPosition(&head, 2, 99);
    printList(head);

    return 0;
}
