#include <stdio.h>
#include <stdbool.h>
#define SIZE 5

typedef struct {
    int items[SIZE];
    int front, rear;
} Queue;

// Initialize the queue
void initQueue(Queue* q) {
    q->front = -1;
    q->rear = -1;
}

// Check if queue is empty
bool isEmpty(Queue* q) {
    return q->front == -1;
}

// Check if queue is full
bool isFull(Queue* q) {
    return (q->rear + 1) % SIZE == q->front;
}

// Enqueue
void enqueue(Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is FULL!\n");
        return;
    }

    if (isEmpty(q)) {
        q->front = q->rear = 0;
    } else {
        q->rear = (q->rear + 1) % SIZE;
    }

    q->items[q->rear] = value;
    printf("Enqueued: %d\n", value);
}

// Dequeue
int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is EMPTY!\n");
        return -1;
    }

    int value = q->items[q->front];

    if (q->front == q->rear) { // Only one item
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % SIZE;
    }

    return value;
}

// Get front value
int getFront(Queue* q) {
    if (!isEmpty(q))
        return q->items[q->front];
    return -1;
}

// Get rear value
int getRear(Queue* q) {
    if (!isEmpty(q))
        return q->items[q->rear];
    return -1;
}

// Main
int main() {
    Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printf("Front value: %d\n", getFront(&q));
    printf("Rear value: %d\n", getRear(&q));

    printf("Is Queue Empty? %s\n", isEmpty(&q) ? "Yes" : "No");
    printf("Is Queue Full? %s\n", isFull(&q) ? "Yes" : "No");

    dequeue(&q);
    printf("Front after dequeue: %d\n", getFront(&q));

    return 0;
}
