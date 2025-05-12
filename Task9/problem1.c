#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node (train car)
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to print the list and its length
void printList(Node* head) {
    int length = 0;
    Node* current = head;

    printf("Train (Linked List):\n");
    while (current != NULL) {
        printf("🚃 %d ", current->data);
        current = current->next;
        length++;
    }

    printf("\nTotal number of train cars (nodes): %d\n", length);
}

int main() {
    // Create nodes (train cars)
    Node* head = malloc(sizeof(Node));
    Node* second = malloc(sizeof(Node));
    Node* third = malloc(sizeof(Node));

    // Assign data
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Print the list
    printList(head);

    // Free memory
    free(head);
    free(second);
    free(third);

    return 0;
}
