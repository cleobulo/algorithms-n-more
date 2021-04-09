// Queue

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

// dequeue is used to remove item from the start of the queue
QUEUE *dequeue(QUEUE **data) {
    QUEUE *dequeueData = NULL;
    if ((*data) != NULL) {
        dequeueData = (QUEUE*) malloc(sizeof(QUEUE));
        dequeueData->key = (*data)->key;
        dequeueData->next = NULL;
    }

    QUEUE *removeData = *data;
    (*data) = (*data)->next;
    free(removeData); 

    return dequeueData;
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
