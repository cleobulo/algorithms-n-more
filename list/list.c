// List

#include <stdio.h>
#include <stdlib.h>

typedef struct GenericData {
    int value;
    struct GenericData *prox;
}DATA;

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

void display(DATA *data) {
    DATA *iterData = data;

    for (iterData; iterData != NULL; iterData = iterData->prox)
    {
        printf("Value: %d\n", iterData->value);
    }
}

void main() {
    DATA *dataList = NULL;
    dataList = insert(dataList, 23);
    dataList = insert(dataList, 58);
    dataList = insert(dataList, 1);
    display(dataList);
    printf("List works!");
    return;
}
