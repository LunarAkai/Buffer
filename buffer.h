#pragma once

struct SBuffer {
    int value;
};

void allocateMemory();
void freeMemory();

bool isEmpty();
bool isFull();

void push(int _value);
void pop();

void printBufferValues();

