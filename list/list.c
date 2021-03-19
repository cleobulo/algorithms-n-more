// List

#include "list.h"

// insertItem is used to add item in a list
LIST* insertItem(LIST *data, int value) {
    LIST *newData = (LIST*) malloc(sizeof(LIST));
    newData->value = value;
    newData->prox = NULL;

    if (!data) {
        data = newData;
        return data;
    }

    LIST *iterData = data;
    while (iterData->prox != NULL)
        iterData = iterData->prox;

    iterData->prox = newData;
    return data;
}

// displayList is used to show data on console
void displayList(LIST *data) {
    printf("Display list items:\n");

    LIST *iterData = NULL;
    for (iterData = data; iterData != NULL; iterData = iterData->prox)
    {
        printf("Value: %d\n", iterData->value);
    }
}

// searchItem is used to find value in a list
LIST* searchItem(LIST *data, int value) {
    LIST *iterData = NULL;
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
LIST* deleteItem(LIST *data, int value) {
    LIST *beforeItem = NULL;
    LIST *iterData = NULL;
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
