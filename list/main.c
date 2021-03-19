// Main program

#include "list.h"

int main() {
    LIST *dataList = NULL;
    dataList = insertItem(dataList, 23);
    dataList = insertItem(dataList, 58);
    dataList = insertItem(dataList, 1);
    searchItem(dataList, 58);
    searchItem(dataList, 1);
    searchItem(dataList, 102);
    dataList = deleteItem(dataList, 58);
    displayList(dataList);
    dataList = updateItem(dataList, 1, 60);
    displayList(dataList);
    printf("--------------------\n");
    printf("List works!");
    return 1;
}
