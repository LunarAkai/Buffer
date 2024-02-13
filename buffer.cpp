#include "buffer.h"

#include <stdio.h>
#include <stdlib.h>

SBuffer* g_buffer;

int g_top = -1;
int g_maxBufferSize = 10;

void allocateMemory() {
    g_buffer = (SBuffer *) malloc(sizeof(SBuffer)*g_maxBufferSize);
}


void freeMemory() {
    free(g_buffer);
}

bool isEmpty() {
    if(g_top == -1) {
        return true;
    } else {
        return false;
    }
}

bool isFull() {
    if(g_top == g_maxBufferSize) {
        return true;
    } else {
        return false;
    }
}

void push(int _value) {
    if(isFull()) {
        printf("Stack Overflow\n");
    } else {
        ++g_top;
        g_buffer[g_top].value = _value;
    }
}

void pop() {
    if(isEmpty()) {
        printf("Stack is Empty\n");
    } else {
        for(int i = g_top+1; i < g_top; i++) {
            g_buffer[i-1] = g_buffer[i];
        }
        g_top--;
    }
}

void printBufferValues() {
    if(isEmpty()) {
        printf("Is Empty\n");
    } else {
        for(int i = 0; i <= g_top; i++) {
            printf("Entry: %d, Value: %d\n", i, g_buffer[i].value);
        }
    }
}