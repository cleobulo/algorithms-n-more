// Main program

#include "queue.h"

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
