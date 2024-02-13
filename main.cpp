#include "buffer.h"

#include <stdio.h>
#include <stdlib.h>

void printMenu() {
    printf(":p - print Values\n");
    printf(":u - push Value to Buffer\n");
    printf(":o - pop last Value from Buffer\n");
    printf(":q - quit Application\n");
}

int main() {
    printMenu();

    allocateMemory();
    while(true) {
        char c;
        scanf("%c", &c);
        switch (c) 
        {       
            case 'p':
                printBufferValues();
                printMenu();
                break;
            case 'u': {
                int value = 0;
                printf("Enter Value: ... \n");
                scanf("%d", &value);
                push(value);
                printMenu();
                break;
            }
            case 'o':
                pop();
                printMenu();
                break;
            case 'q': {
                freeMemory();
                exit(0);
            } 
        }
    }
    return 0;
}