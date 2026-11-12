#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>

typedef int infotype;

struct Stack {
    infotype info[20];
    int top;
};

void createstack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void push(Stack &S, infotype x);
void pushAscending(Stack &S, infotype x);
infotype pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);

#endif