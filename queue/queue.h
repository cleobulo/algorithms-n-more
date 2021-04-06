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

// displayQueue is used to display all items of the queue
void displayQueue(QUEUE *data);
