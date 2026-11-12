#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    Stack S;
    
    cout << "Hello world!" << endl;
    
    createstack(S);
    push(S, 3);
    push(S, 4);
    push(S, 8);
    pop(S);
    push(S, 2);
    push(S, 3);
    pop(S);
    push(S, 9);
    
    printInfo(S);
    
    balikStack(S);
    
    cout << "balik stack" << endl;
    printInfo(S);

    return 0;
}