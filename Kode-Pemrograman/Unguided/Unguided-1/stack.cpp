#include "stack.h"

using namespace std;

void createstack(Stack &S) {
    S.top = 0;
}

bool isEmpty(Stack S) {
    return S.top == 0;
}

bool isFull(Stack S) {
    return S.top == 20;
}

void push(Stack &S, infotype x) {
    if (!isFull(S)) {
        S.top++;
        S.info[S.top - 1] = x;
    } else {
        cout << "Stack penuh!" << endl;
    }
}

infotype pop(Stack &S) {
    infotype x = -1;
    if (!isEmpty(S)) {
        x = S.info[S.top - 1];
        S.top--;
    } else {
        cout << "Stack kosong!" << endl;
    }
    return x;
}

void printInfo(Stack S) {
    if (!isEmpty(S)) {
        for (int i = S.top; i >= 1; i--) {
            cout << S.info[i - 1] << " ";
        }
        cout << endl;
    } else {
        cout << "Stack kosong" << endl;
    }
}

void balikStack(Stack &S) {
    if (!isEmpty(S)) {
        Stack temp1, temp2;
        createstack(temp1);
        createstack(temp2);

        while (!isEmpty(S)) {
            push(temp1, pop(S));
        }

        while (!isEmpty(temp1)) {
            push(temp2, pop(temp1));
        }

        while (!isEmpty(temp2)) {
            push(S, pop(temp2));
        }
    }
}