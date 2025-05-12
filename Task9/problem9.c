#include <stdio.h>
#include <stdlib.h>

// Queue node
typedef struct QueueNode {
    char data;
    struct QueueNode* next;
} QueueNode;

// Queue structure
typedef struct {
    QueueNode* front;
    QueueNode* rear;
} Queue;

// Create a new queue node
QueueNode* createNode(char value) {
    QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Initialize the queue
void initQueue(Queue* q) {
    q->front = NULL;
    q->rear = NULL;
}

// Enqueue function
void enqueue(Queue* q, char value) {
    QueueNode* newNode = createNode(value);
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
        return;
    }
    q->rear->next = newNode;
    q->rear = newNode;
}

// Dequeue function
char dequeue(Queue* q) {
    if (q->front == NULL) {
        printf("Queue Underflow\n");
        return '\0';
    }

    QueueNode* temp = q->front;
    char value = temp->data;
    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;

    free(temp);
    return value;
}

// Main function
int main() {
    Queue q;
    initQueue(&q);

    // Enqueue A, B, C
    enqueue(&q, 'A');
    enqueue(&q, 'B');
    enqueue(&q, 'C');

    // Dequeue one value and print it
    char dequeued = dequeue(&q);
    printf("Dequeued value: %c\n", dequeued);

    return 0;
}
