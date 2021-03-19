// List assigments

#include <stdio.h>
#include <stdlib.h>

// LIST is used to handle some data
typedef struct ListItem {
    int value;
    struct ListItem *prox;
}LIST;

// insertItem is used to add item in a list
LIST* insertItem(LIST *data, int value);

// displayList is used to show data on console
void displayList(LIST *data);

// searchItem is used to find value in a list
LIST* searchItem(LIST *data, int value);

// deleteItem is used to delete value from a list
LIST* deleteItem(LIST *data, int value);
