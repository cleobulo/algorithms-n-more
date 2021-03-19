// List assigments

#include <stdio.h>
#include <stdlib.h>

// LIST is used to handle some data
typedef struct ListItem {
    int value;
    struct ListItem *prox;
}LIST;

// insertItem is used to add item in list
LIST* insertItem(LIST *data, int value);

// displayList is used to show data on console
void displayList(LIST *data);

// searchItem is used to find value in list
LIST* searchItem(LIST *data, int value);

// deleteItem is used to delete value from a list
LIST* deleteItem(LIST *data, int value);

// updateItem is used to update value in list
LIST* updateItem(LIST *data, int oldValue, int newValue);
