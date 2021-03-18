// Main program

#include "list.h"

int main() {
    DATA *dataList = NULL;
    dataList = insert(dataList, 23);
    dataList = insert(dataList, 58);
    dataList = insert(dataList, 1);
    display(dataList);
    printf("--------------------\n");
    printf("List works!");
    return 1;
}
