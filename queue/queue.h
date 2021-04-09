// Queue assigments

#include <stdio.h>
#include <stdlib.h>

// QUEUE is used to create a queue data structure
typedef struct QueueItem {
    int key;
    struct QueueItem *next;
} QUEUE;

// enqueue is used to insert new item on queue
QUEUE* enqueue(QUEUE *data, int value);

// dequeue is used to remove item from the start of the queue
QUEUE *dequeue(QUEUE **data);

// displayQueue is used to display all items of the queue
void displayQueue(QUEUE *data);
