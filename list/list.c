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

// search is used to find value in a list
DATA* search(DATA *data, int value) {
    DATA *iterData = NULL;
    for (iterData = data; iterData != NULL; iterData = iterData->prox) {
        if (iterData->value == value) {
            printf("Found item: %d\n", iterData->value);
            return iterData;
        }
    }

    printf("Item %d not exists in list\n", value);
    return NULL;
}

// deleteItem is used to delete value from a list
DATA* deleteItem(DATA *data, int value) {
    DATA *beforeItem = NULL;
    DATA *iterData = NULL;
    for (iterData = data; iterData != NULL && iterData->value != value; iterData = iterData->prox) {
        beforeItem = iterData;
    }

    printf("Empty list\n");
    if (iterData == NULL)
        return data;

    printf("Item %d from list to be deleted\n", iterData->value);
    if (beforeItem == NULL) {
        data = iterData->prox;
    } else {
        beforeItem->prox = iterData->prox;
    }

    free(iterData);
    return data;
}
