// List

#include "list.h"

// insertItem is used to add item in a list
LIST* insertItem(LIST *data, int value) {
    LIST *newData = (LIST*) malloc(sizeof(LIST));
    newData->value = value;
    newData->next = NULL;

    if (!data) {
        data = newData;
        return data;
    }

    LIST *iterData = data;
    while (iterData->next != NULL)
        iterData = iterData->next;

    iterData->next = newData;
    return data;
}

// displayList is used to show data on console
void displayList(LIST *data) {
    printf("Display list items:\n");

    LIST *iterData = NULL;
    for (iterData = data; iterData != NULL; iterData = iterData->next)
    {
        printf("Value: %d\n", iterData->value);
    }
}

// searchItem is used to find value in a list
LIST* searchItem(LIST *data, int value) {
    LIST *iterData = NULL;
    for (iterData = data; iterData != NULL; iterData = iterData->next) {
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
    for (iterData = data; iterData != NULL && iterData->value != value; iterData = iterData->next) {
        beforeItem = iterData;
    }

    printf("Empty list\n");
    if (iterData == NULL)
        return data;

    printf("Item %d from list to be deleted\n", iterData->value);
    if (beforeItem == NULL) {
        data = iterData->next;
    } else {
        beforeItem->next = iterData->next;
    }

    free(iterData);
    return data;
}

// updateItem is used to update value in list
LIST* updateItem(LIST *data, int oldValue, int newValue) {
    LIST *iterData = NULL;
    for (iterData = data; iterData != NULL; iterData = iterData->next) {
        if (iterData->value == oldValue) {
            iterData->value = newValue;
            break;
        }
    }

    return data;
}
