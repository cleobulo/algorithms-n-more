// List assigments

#include <stdio.h>
#include <stdlib.h>

// DATA is used to handle some data
typedef struct GenericData {
    int value;
    struct GenericData *prox;
}DATA;

// insert is used to add item in a list
DATA* insert(DATA *data, int value);

// display is used to show data on console
void display(DATA *data);
