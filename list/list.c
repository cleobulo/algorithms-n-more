// List

#include "list.h"

// insert is used to add item in a list
DATA* insert(DATA *data, int value) {
    DATA *newData = (DATA*) malloc(sizeof(DATA));
    newData->value = value;
    newData->prox = NULL;

    if (!data) {
        data = newData;
        return data;
    }

    DATA *iterData = data;
    while (iterData->prox != NULL)
        iterData = iterData->prox;

    iterData->prox = newData;
    return data;
}

// display is used to show data on console
void display(DATA *data) {
    printf("Display list items:\n");

    DATA *iterData = NULL;
    for (iterData = data; iterData != NULL; iterData = iterData->prox)
    {
        printf("Value: %d\n", iterData->value);
    }
}
