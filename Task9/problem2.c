#include <stdio.h>
#include <stdlib.h>

// Define node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to print the list and its length
void printList(Node* head) {
    int length = 0;
    Node* current = head;

    printf("\n🚂 Train (Linked List): ");
    while (current != NULL) {
        printf("🚃 %d ", current->data);
        current = current->next;
        length++;
    }
    printf("\nTotal nodes: %d\n", length);
}

// Insert node at the beginning
void insertAtBeginning(Node** head, int value) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

// Insert node at the end
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

// Delete a specific node by value
void deleteNode(Node** head, int value) {
    Node* temp = *head;
    Node* prev = NULL;

    // If the node to delete is the head
    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Find the node
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // Node not found
    if (temp == NULL) {
        printf("Node with value %d not found.\n", value);
        return;
    }

    // Unlink the node
    prev->next = temp->next;
    free(temp);
}

int main() {
    Node* head = NULL;

    // Insert some nodes
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    printList(head);

    // Insert at beginning
    insertAtBeginning(&head, 5);
    printList(head);

    // Delete node
    deleteNode(&head, 20);
    printList(head);

    // Free remaining memory
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
