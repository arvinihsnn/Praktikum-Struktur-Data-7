#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    Stack S;
    
    cout << "Hello world!" << endl;
    
    createstack(S);
    pushAscending(S, 3);
    pushAscending(S, 4);
    pushAscending(S, 8);
    pushAscending(S, 2);
    pushAscending(S, 3);
    pushAscending(S, 9);
    
    printInfo(S);
    
    balikStack(S);
    
    cout << "balik stack" << endl;
    printInfo(S);

    return 0;
}