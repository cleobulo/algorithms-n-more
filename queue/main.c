// Main program

#include "queue.h"

// enqueue is used to insert new item on queue
QUEUE* enqueue(QUEUE *data, int value) {
    QUEUE *newItem = (QUEUE*) malloc(sizeof(QUEUE));
    newItem->key = value;
    newItem->next = NULL;

    if (data == NULL)
        return newItem;

    QUEUE *iterData = data;
    while(iterData->next != NULL)
        iterData = iterData->next;

    iterData->next = newItem;

    return data;
}

// displayQueue is used to display all items of the queue
void displayQueue(QUEUE *data) {
    printf("Display queue items:\n");

    QUEUE *iterData = data;
    while (iterData != NULL) {
        printf("Key: %d\n", iterData->key);
        iterData = iterData->next;
    }
}

int main() {
    QUEUE *queue = NULL;
    queue = enqueue(queue, 15);
    queue = enqueue(queue, 1);
    queue = enqueue(queue, 25);
    queue = enqueue(queue, 2);
    displayQueue(queue);
    printf("Queue works!!!");
    return 1;
}
